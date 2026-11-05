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

// Function: sub_0037DC60
// Address: 0x37dc60 - 0x37f290
void sub_0037DC60_0x37dc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037DC60_0x37dc60");
#endif

    switch (ctx->pc) {
        case 0x37dcd8u: goto label_37dcd8;
        case 0x37dd08u: goto label_37dd08;
        case 0x37e4a0u: goto label_37e4a0;
        case 0x37e788u: goto label_37e788;
        case 0x37e8d0u: goto label_37e8d0;
        case 0x37e968u: goto label_37e968;
        case 0x37e96cu: goto label_37e96c;
        case 0x37ea40u: goto label_37ea40;
        case 0x37ed58u: goto label_37ed58;
        case 0x37ef00u: goto label_37ef00;
        case 0x37f08cu: goto label_37f08c;
        case 0x37f0a8u: goto label_37f0a8;
        case 0x37f0acu: goto label_37f0ac;
        default: break;
    }

    ctx->pc = 0x37dc60u;

    // 0x37dc60: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x37dc60u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x37dc64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dc64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dc68: 0x8440034  j           func_11000D0
    ctx->pc = 0x37DC68u;
    ctx->pc = 0x37DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DC68u;
    // 0x37dc6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x37DC68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DC70u;
    // 0x37dc70: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x37dc70u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
    // 0x37dc74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dc74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dc78: 0x9020033  j           func_40800CC
    ctx->pc = 0x37DC78u;
    ctx->pc = 0x37DC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DC78u;
    // 0x37dc7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x37DC78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DC80u;
    // 0x37dc80: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x37dc80u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x37dc84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dc84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dc88: 0x8430033  j           func_10C00CC
    ctx->pc = 0x37DC88u;
    ctx->pc = 0x37DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DC88u;
    // 0x37dc8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C00CCu, 0x37DC88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DC90u;
    // 0x37dc90: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x37dc90u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x37dc94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dc94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dc98: 0x8240034  j           func_9000D0
    ctx->pc = 0x37DC98u;
    ctx->pc = 0x37DC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DC98u;
    // 0x37dc9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x37DC98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DCA0u;
    // 0x37dca0: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x37dca0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x37dca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dca8: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x37DCA8u;
    {
        const bool branch_taken_0x37dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DCA8u;
        // 0x37dcac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dca8) {
            ctx->pc = 0x385CB0u;
            return;
        }
    }
    ctx->pc = 0x37DCB0u;
    // 0x37dcb0: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x37DCB0u;
    ctx->pc = 0x37DCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DCB0u;
    // 0x37dcb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x37DCB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DCB8u;
    // 0x37dcb8: 0x12080805  beq         $s0, $t0, . + 4 + (0x805 << 2)
    ctx->pc = 0x37DCB8u;
    {
        const bool branch_taken_0x37dcb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x37DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DCB8u;
        // 0x37dcbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dcb8) {
            ctx->pc = 0x37FCD0u;
            return;
        }
    }
    ctx->pc = 0x37DCC0u;
    // 0x37dcc0: 0x1f90037  .word       0x01F90037                   # INVALID     $t7, $t9, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dcc0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x37DCC0 raw=0x01F90037");
    // 0x37dcc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dcc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dcc8: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
    ctx->pc = 0x37DCC8u;
    {
        const bool branch_taken_0x37dcc8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x37dcc8) {
            ctx->pc = 0x37DCCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DCC8u;
            // 0x37dccc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DCD4u;
            return;
        }
    }
    ctx->pc = 0x37DCD0u;
    // 0x37dcd0: 0x1fc0018  mult        $zero, $t7, $gp
    ctx->pc = 0x37dcd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37dcd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dcd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37dcd8:
    // 0x37dcd8: 0x10010005  beq         $zero, $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DCD8u;
    {
        const bool branch_taken_0x37dcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x37DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DCD8u;
        // 0x37dcdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dcd8) {
            ctx->pc = 0x37DCF0u;
            goto label_37dcf0;
        }
    }
    ctx->pc = 0x37DCE0u;
    // 0x37dce0: 0x80011070  lb          $at, 0x1070($zero)
    ctx->pc = 0x37dce0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x1070u));
    // 0x37dce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dce8: 0x12010801  beq         $s0, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x37DCE8u;
    {
        const bool branch_taken_0x37dce8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x37DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DCE8u;
        // 0x37dcec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dce8) {
            ctx->pc = 0x37FCF0u;
            return;
        }
    }
    ctx->pc = 0x37DCF0u;
label_37dcf0:
    // 0x37dcf0: 0x1fd0019  multu       $t7, $sp
    ctx->pc = 0x37dcf0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37dcf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dcf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dcf8: 0x1fe001a  div         $zero, $t7, $fp
    ctx->pc = 0x37dcf8u;
    { int32_t divisor = GPR_S32(ctx, 30);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37dcfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dcfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dd00: 0x1ff001b  divu        $zero, $t7, $ra
    ctx->pc = 0x37dd00u;
    { uint32_t divisor = GPR_U32(ctx, 31); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37dd04: 0x1e02958  .word       0x01E02958                   # mult        $a1, $t7, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37dd04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_37dd08:
    // 0x37dd08: 0x1f80045  .word       0x01F80045                   # INVALID     $t7, $t8, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd08u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x37DD08 raw=0x01F80045");
    // 0x37dd0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dd0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dd10: 0x80000170  lb          $zero, 0x170($zero)
    ctx->pc = 0x37dd10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x170u));
    // 0x37dd14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dd14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dd18: 0x102607ff  beq         $at, $a2, . + 4 + (0x7FF << 2)
    ctx->pc = 0x37DD18u;
    {
        const bool branch_taken_0x37dd18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 6));
        ctx->pc = 0x37DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD18u;
        // 0x37dd1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dd18) {
            ctx->pc = 0x37FD18u;
            return;
        }
    }
    ctx->pc = 0x37DD20u;
    // 0x37dd20: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37dd20u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37dd24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dd24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dd28: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x37dd28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37dd2c: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd2cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37dd30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dd30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dd34: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd34u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DD34 raw=0x01E1E8BD");
    // 0x37dd38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dd38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dd3c: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd3cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37dd40: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37dd40u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37dd44: 0x1e0f88b  .word       0x01E0F88B                   # movn        $ra, $t7, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd44u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37dd48: 0x81e4133c  lb          $a0, 0x133C($t7)
    ctx->pc = 0x37dd48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4924)));
    // 0x37dd4c: 0x1f8116a  .word       0x01F8116A                   # slt         $v0, $t7, $t8 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37dd50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dd50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dd54: 0x1c0199b  .word       0x01C0199B                   # divu        $v1, $t6, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd54u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37dd58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dd58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dd5c: 0x20119b  .word       0x0020119B                   # divu        $v0, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd5cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37dd60: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x37dd60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37dd64: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd64u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37dd68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dd68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dd6c: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DD6C raw=0x01E1E8BD");
    // 0x37dd70: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37dd70u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37dd74: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd74u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37dd78: 0x81e4337d  lb          $a0, 0x337D($t7)
    ctx->pc = 0x37dd78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
    // 0x37dd7c: 0x1e0f88b  .word       0x01E0F88B                   # movn        $ra, $t7, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd7cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37dd80: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37dd80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37dd84: 0x1c429ff  .word       0x01C429FF                   # dsra32      $a1, $a0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 4) >> (32 + 7));
    // 0x37dd88: 0x81e4237d  lb          $a0, 0x237D($t7)
    ctx->pc = 0x37dd88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9085)));
    // 0x37dd8c: 0x1c421ff  .word       0x01C421FF                   # dsra32      $a0, $a0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd8cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 7));
    // 0x37dd90: 0x81e4133c  lb          $a0, 0x133C($t7)
    ctx->pc = 0x37dd90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4924)));
    // 0x37dd94: 0x1f8116a  .word       0x01F8116A                   # slt         $v0, $t7, $t8 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37dd98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dd98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dd9c: 0x1c0199b  .word       0x01C0199B                   # divu        $v1, $t6, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dd9cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37dda0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dda0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dda4: 0x20119b  .word       0x0020119B                   # divu        $v0, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dda4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37dda8: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x37dda8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37ddac: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ddacu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37ddb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ddb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ddb4: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ddb4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DDB4 raw=0x01E1E8BD");
    // 0x37ddb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ddb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ddbc: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ddbcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37ddc0: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37ddc0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37ddc4: 0x1e0f88b  .word       0x01E0F88B                   # movn        $ra, $t7, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ddc4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37ddc8: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37ddc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37ddcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ddccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ddd0: 0xa2717fc  j           func_89C5FF0
    ctx->pc = 0x37DDD0u;
    ctx->pc = 0x37DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DDD0u;
    // 0x37ddd4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF0u, 0x37DDD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DDD8u;
    // 0x37ddd8: 0x81e4337d  lb          $a0, 0x337D($t7)
    ctx->pc = 0x37ddd8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
    // 0x37dddc: 0x1c429ff  .word       0x01C429FF                   # dsra32      $a1, $a0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dddcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 4) >> (32 + 7));
    // 0x37dde0: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37dde0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37dde4: 0x1c421ff  .word       0x01C421FF                   # dsra32      $a0, $a0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dde4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 7));
    // 0x37dde8: 0x81e4237d  lb          $a0, 0x237D($t7)
    ctx->pc = 0x37dde8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9085)));
    // 0x37ddec: 0x1f8116a  .word       0x01F8116A                   # slt         $v0, $t7, $t8 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ddecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37ddf0: 0x81e4133c  lb          $a0, 0x133C($t7)
    ctx->pc = 0x37ddf0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4924)));
    // 0x37ddf4: 0x1c0199b  .word       0x01C0199B                   # divu        $v1, $t6, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ddf4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37ddf8: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37ddf8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37ddfc: 0x20119b  .word       0x0020119B                   # divu        $v0, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ddfcu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37de00: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x37de00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37de04: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de04u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37de08: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37de08u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37de0c: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DE0C raw=0x01E1E8BD");
    // 0x37de10: 0x520117f6  beql        $s0, $at, . + 4 + (0x17F6 << 2)
    ctx->pc = 0x37DE10u;
    {
        const bool branch_taken_0x37de10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x37de10) {
            ctx->pc = 0x37DE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DE10u;
            // 0x37de14: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383DECu;
            return;
        }
    }
    ctx->pc = 0x37DE18u;
    // 0x37de18: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37de18u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37de1c: 0x1e0f88b  .word       0x01E0F88B                   # movn        $ra, $t7, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de1cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37de20: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37de20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37de24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37de24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37de28: 0xa2717fc  j           func_89C5FF0
    ctx->pc = 0x37DE28u;
    ctx->pc = 0x37DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DE28u;
    // 0x37de2c: 0x1c429ff  .word       0x01C429FF                   # dsra32      $a1, $a0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 4) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF0u, 0x37DE28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DE30u;
    // 0x37de30: 0x81e4337d  lb          $a0, 0x337D($t7)
    ctx->pc = 0x37de30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
    // 0x37de34: 0x1c421ff  .word       0x01C421FF                   # dsra32      $a0, $a0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de34u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 7));
    // 0x37de38: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37de38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37de3c: 0x1f8116a  .word       0x01F8116A                   # slt         $v0, $t7, $t8 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37de40: 0x81e4237d  lb          $a0, 0x237D($t7)
    ctx->pc = 0x37de40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9085)));
    // 0x37de44: 0x1c0199b  .word       0x01C0199B                   # divu        $v1, $t6, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de44u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37de48: 0x81e4133c  lb          $a0, 0x133C($t7)
    ctx->pc = 0x37de48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4924)));
    // 0x37de4c: 0x20119b  .word       0x0020119B                   # divu        $v0, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de4cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37de50: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x37de50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37de54: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de54u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37de58: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37de58u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37de5c: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DE5C raw=0x01E1E8BD");
    // 0x37de60: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37de60u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37de64: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de64u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37de68: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37de68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37de6c: 0x1e0f88b  .word       0x01E0F88B                   # movn        $ra, $t7, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de6cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37de70: 0xa2717fd  j           func_89C5FF4
    ctx->pc = 0x37DE70u;
    ctx->pc = 0x37DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DE70u;
    // 0x37de74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF4u, 0x37DE70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DE78u;
    // 0x37de78: 0x81e4337d  lb          $a0, 0x337D($t7)
    ctx->pc = 0x37de78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
    // 0x37de7c: 0x1c429ff  .word       0x01C429FF                   # dsra32      $a1, $a0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de7cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 4) >> (32 + 7));
    // 0x37de80: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37de80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37de84: 0x1c421ff  .word       0x01C421FF                   # dsra32      $a0, $a0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 7));
    // 0x37de88: 0x81e4237d  lb          $a0, 0x237D($t7)
    ctx->pc = 0x37de88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9085)));
    // 0x37de8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37de8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37de90: 0x81e4133c  lb          $a0, 0x133C($t7)
    ctx->pc = 0x37de90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4924)));
    // 0x37de94: 0x1f8116a  .word       0x01F8116A                   # slt         $v0, $t7, $t8 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37de98: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37de98u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37de9c: 0x1c0199b  .word       0x01C0199B                   # divu        $v1, $t6, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37de9cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37dea0: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37dea0u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37dea4: 0x20119b  .word       0x0020119B                   # divu        $v0, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dea4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37dea8: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37dea8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37deac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37deacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37deb0: 0xa2717fe  j           func_89C5FF8
    ctx->pc = 0x37DEB0u;
    ctx->pc = 0x37DEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DEB0u;
    // 0x37deb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF8u, 0x37DEB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DEB8u;
    // 0x37deb8: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37deb8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37debc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37debcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dec0: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37dec0u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37dec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dec8: 0x81e4337d  lb          $a0, 0x337D($t7)
    ctx->pc = 0x37dec8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
    // 0x37decc: 0x1c429ff  .word       0x01C429FF                   # dsra32      $a1, $a0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37deccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 4) >> (32 + 7));
    // 0x37ded0: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37ded0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37ded4: 0x1c421ff  .word       0x01C421FF                   # dsra32      $a0, $a0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ded4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 7));
    // 0x37ded8: 0x81e4237d  lb          $a0, 0x237D($t7)
    ctx->pc = 0x37ded8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9085)));
    // 0x37dedc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dedcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dee0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dee0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37deec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37deecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37def0: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37def0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37def4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37def4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37def8: 0xa2717ff  j           func_89C5FFC
    ctx->pc = 0x37DEF8u;
    ctx->pc = 0x37DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DEF8u;
    // 0x37defc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FFCu, 0x37DEF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DF00u;
    // 0x37df00: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37df00u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37df04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df08: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37df08u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37df0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df10: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37df10u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37DF10 raw=0x48007800");
    // 0x37df14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37df18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37df1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df20: 0x1df0021  addu        $zero, $t6, $ra
    ctx->pc = 0x37df20u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 31)));
    // 0x37df24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df28: 0x3e0038  .word       0x003E0038                   # dsll        $zero, $fp, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37df28u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) << 0);
    // 0x37df2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df30: 0x8440fff  j           func_1103FFC
    ctx->pc = 0x37DF30u;
    ctx->pc = 0x37DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DF30u;
    // 0x37df34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103FFCu, 0x37DF30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DF38u;
    // 0x37df38: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x37df38u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x37df3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df40: 0x81fc0b7c  lb          $gp, 0xB7C($t7)
    ctx->pc = 0x37df40u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37df44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df48: 0x81fd0b7c  lb          $sp, 0xB7C($t7)
    ctx->pc = 0x37df48u;
    SET_GPR_S32(ctx, 29, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37df4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df50: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x37df50u;
    // CACHE instruction (ignored)
    // 0x37df54: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37df54u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x37df58: 0x11ed07f0  beq         $t7, $t5, . + 4 + (0x7F0 << 2)
    ctx->pc = 0x37DF58u;
    {
        const bool branch_taken_0x37df58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 13));
        ctx->pc = 0x37DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF58u;
        // 0x37df5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37df58) {
            ctx->pc = 0x37FF1Cu;
            return;
        }
    }
    ctx->pc = 0x37DF60u;
    // 0x37df60: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
    ctx->pc = 0x37DF60u;
    {
        const bool branch_taken_0x37df60 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x37DF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF60u;
        // 0x37df64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37df60) {
            ctx->pc = 0x37FF60u;
            return;
        }
    }
    ctx->pc = 0x37DF68u;
    // 0x37df68: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
    ctx->pc = 0x37DF68u;
    {
        const bool branch_taken_0x37df68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x37DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF68u;
        // 0x37df6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37df68) {
            ctx->pc = 0x393F70u;
            return;
        }
    }
    ctx->pc = 0x37DF70u;
    // 0x37df70: 0x100c0010  beq         $zero, $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x37DF70u;
    {
        const bool branch_taken_0x37df70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x37DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DF70u;
        // 0x37df74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37df70) {
            ctx->pc = 0x37DFB4u;
            goto label_37dfb4;
        }
    }
    ctx->pc = 0x37DF78u;
    // 0x37df78: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x37df78u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x37df7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df80: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x37df80u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x37df84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df88: 0x81fbe33c  lb          $k1, -0x1CC4($t7)
    ctx->pc = 0x37df88u;
    SET_GPR_S32(ctx, 27, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959932)));
    // 0x37df8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df90: 0x81fceb3c  lb          $gp, -0x14C4($t7)
    ctx->pc = 0x37df90u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294961980)));
    // 0x37df94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37df98: 0x81dd0b7c  lb          $sp, 0xB7C($t6)
    ctx->pc = 0x37df98u;
    SET_GPR_S32(ctx, 29, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 2940)));
    // 0x37df9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37df9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dfa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dfa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dfa4: 0x1dcd8ac  .word       0x01DCD8AC                   # dadd        $k1, $t6, $gp # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dfa4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
    // 0x37dfa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dfa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dfac: 0x1dce8ec  .word       0x01DCE8EC                   # dadd        $sp, $t6, $gp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dfacu;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
    // 0x37dfb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dfb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37dfb4:
    // 0x37dfb4: 0x1dcf92c  .word       0x01DCF92C                   # dadd        $ra, $t6, $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dfb4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
    // 0x37dfb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dfb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dfbc: 0x1c312fe  .word       0x01C312FE                   # dsrl32      $v0, $v1, 11 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 11));
    // 0x37dfc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dfc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dfc4: 0x1c2196e  .word       0x01C2196E                   # dsub        $v1, $t6, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dfc4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
    // 0x37dfc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dfc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dfcc: 0x1de219b  .word       0x01DE219B                   # divu        $a0, $t6, $fp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dfccu;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37dfd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dfd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dfd4: 0x1c531ea  .word       0x01C531EA                   # slt         $a2, $t6, $a1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dfd4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x37dfd8: 0x8251000  j           func_944000
    ctx->pc = 0x37DFD8u;
    ctx->pc = 0x37DFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DFD8u;
    // 0x37dfdc: 0x2701bc  .word       0x002701BC                   # dsll32      $zero, $a3, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x944000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x944000u, 0x37DFD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DFE0u;
    // 0x37dfe0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dfe0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dfe4: 0x2700bd  .word       0x002700BD                   # INVALID     $at, $a3, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dfe4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DFE4 raw=0x002700BD");
    // 0x37dfe8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dfe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dfec: 0x27020a  .word       0x0027020A                   # movz        $zero, $at, $a3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dfecu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x37dff0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dff0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dff4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dff4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dff8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dff8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dffc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dffcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e000: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e000u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e008: 0x34066000  ori         $a2, $zero, 0x6000
    ctx->pc = 0x37e008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)24576);
    // 0x37e00c: 0x20f79e  .word       0x0020F79E                   # ddiv        $fp, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e00cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E00C raw=0x0020F79E");
    // 0x37e010: 0x800d31b0  lb          $t5, 0x31B0($zero)
    ctx->pc = 0x37e010u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x31B0u));
    // 0x37e014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e018: 0x800b31b4  lb          $t3, 0x31B4($zero)
    ctx->pc = 0x37e018u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x31B4u));
    // 0x37e01c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e01cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e020: 0x800629f5  lb          $a2, 0x29F5($zero)
    ctx->pc = 0x37e020u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x29F5u));
    // 0x37e024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e028: 0xa271000  j           func_89C4000
    ctx->pc = 0x37E028u;
    ctx->pc = 0x37E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E028u;
    // 0x37e02c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C4000u, 0x37E028u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E030u;
    // 0x37e030: 0x52040fea  beql        $s0, $a0, . + 4 + (0xFEA << 2)
    ctx->pc = 0x37E030u;
    {
        const bool branch_taken_0x37e030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x37e030) {
            ctx->pc = 0x37E034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E030u;
            // 0x37e034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381FDCu;
            return;
        }
    }
    ctx->pc = 0x37E038u;
    // 0x37e038: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x37e038u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x37e03c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e03cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e040: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37e040u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37E040 raw=0x48007800");
    // 0x37e044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e048: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e048u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e04c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e04cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e050: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x37e050u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x37e054: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e058: 0x1f70030  tge         $t7, $s7, 0
    ctx->pc = 0x37e058u;
    if (GPR_S64(ctx, 15) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x37e05c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e05cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e060: 0x1f80031  tgeu        $t7, $t8, 0
    ctx->pc = 0x37e060u;
    if (GPR_U64(ctx, 15) >= GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x37e064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e068: 0x1f90032  tlt         $t7, $t9, 0
    ctx->pc = 0x37e068u;
    if (GPR_S64(ctx, 15) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x37e06c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e06cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e070: 0x8440034  j           func_11000D0
    ctx->pc = 0x37E070u;
    ctx->pc = 0x37E074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E070u;
    // 0x37e074: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x37E070u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E078u;
    // 0x37e078: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x37e078u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
    // 0x37e07c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e07cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e080: 0x9020033  j           func_40800CC
    ctx->pc = 0x37E080u;
    ctx->pc = 0x37E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E080u;
    // 0x37e084: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x37E080u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E088u;
    // 0x37e088: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x37e088u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x37e08c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e08cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e090: 0x8430033  j           func_10C00CC
    ctx->pc = 0x37E090u;
    ctx->pc = 0x37E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E090u;
    // 0x37e094: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C00CCu, 0x37E090u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E098u;
    // 0x37e098: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x37e098u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x37e09c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e09cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e0a0: 0x8240034  j           func_9000D0
    ctx->pc = 0x37E0A0u;
    ctx->pc = 0x37E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E0A0u;
    // 0x37e0a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x37E0A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E0A8u;
    // 0x37e0a8: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x37e0a8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x37e0ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e0acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e0b0: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x37E0B0u;
    {
        const bool branch_taken_0x37e0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0B0u;
        // 0x37e0b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e0b0) {
            ctx->pc = 0x3860B8u;
            return;
        }
    }
    ctx->pc = 0x37E0B8u;
    // 0x37e0b8: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x37E0B8u;
    ctx->pc = 0x37E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E0B8u;
    // 0x37e0bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x37E0B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E0C0u;
    // 0x37e0c0: 0x12080807  beq         $s0, $t0, . + 4 + (0x807 << 2)
    ctx->pc = 0x37E0C0u;
    {
        const bool branch_taken_0x37e0c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x37E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0C0u;
        // 0x37e0c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e0c0) {
            ctx->pc = 0x3800E0u;
            return;
        }
    }
    ctx->pc = 0x37E0C8u;
    // 0x37e0c8: 0x1f60037  .word       0x01F60037                   # INVALID     $t7, $s6, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e0c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x37E0C8 raw=0x01F60037");
    // 0x37e0cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e0ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e0d0: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
    ctx->pc = 0x37E0D0u;
    {
        const bool branch_taken_0x37e0d0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x37e0d0) {
            ctx->pc = 0x37E0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E0D0u;
            // 0x37e0d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E0DCu;
            return;
        }
    }
    ctx->pc = 0x37E0D8u;
    // 0x37e0d8: 0x3b808081  xori        $zero, $gp, 0x8081
    ctx->pc = 0x37e0d8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)32897);
    // 0x37e0dc: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37e0dcu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x37e0e0: 0x10010007  beq         $zero, $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x37E0E0u;
    {
        const bool branch_taken_0x37e0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x37E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0E0u;
        // 0x37e0e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e0e0) {
            ctx->pc = 0x37E100u;
            goto label_37e100;
        }
    }
    ctx->pc = 0x37E0E8u;
    // 0x37e0e8: 0x80011870  lb          $at, 0x1870($zero)
    ctx->pc = 0x37e0e8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x1870u));
    // 0x37e0ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e0ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e0f0: 0x12010801  beq         $s0, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x37E0F0u;
    {
        const bool branch_taken_0x37e0f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x37E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0F0u;
        // 0x37e0f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e0f0) {
            ctx->pc = 0x3800F8u;
            return;
        }
    }
    ctx->pc = 0x37E0F8u;
    // 0x37e0f8: 0x1fc001c  dmult       $t7, $gp
    ctx->pc = 0x37e0f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E0F8 raw=0x01FC001C");
    // 0x37e0fc: 0x1c0bdde  .word       0x01C0BDDE                   # ddiv        $s7, $t6, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e0fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E0FC raw=0x01C0BDDE");
label_37e100:
    // 0x37e100: 0x1fd001d  dmultu      $t7, $sp
    ctx->pc = 0x37e100u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x37E100 raw=0x01FD001D");
    // 0x37e104: 0x1c0c61e  .word       0x01C0C61E                   # ddiv        $t8, $t6, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e104u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E104 raw=0x01C0C61E");
    // 0x37e108: 0x1fe001e  ddiv        $zero, $t7, $fp
    ctx->pc = 0x37e108u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E108 raw=0x01FE001E");
    // 0x37e10c: 0x1c0ce5e  .word       0x01C0CE5E                   # ddiv        $t9, $t6, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e10cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E10C raw=0x01C0CE5E");
    // 0x37e110: 0x1ff001f  ddivu       $zero, $t7, $ra
    ctx->pc = 0x37e110u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x37E110 raw=0x01FF001F");
    // 0x37e114: 0x1e00218  .word       0x01E00218                   # mult        $zero, $t7, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37e114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37e118: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e118u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e11c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e11cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e120: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e120u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e124: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e128: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e128u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e12c: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e12cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e134: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e134u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E134 raw=0x01E2E8BD");
    // 0x37e138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e13c: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e13cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e144: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e144u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e14c: 0x1c3b9bc  .word       0x01C3B9BC                   # dsll32      $s7, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e14cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e150: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e154: 0x1c3c0bd  .word       0x01C3C0BD                   # INVALID     $t6, $v1, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e154u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E154 raw=0x01C3C0BD");
    // 0x37e158: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e15c: 0x1c3c94a  .word       0x01C3C94A                   # movz        $t9, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e15cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x37e160: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e160u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e164: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e168: 0x81e403bc  lb          $a0, 0x3BC($t7)
    ctx->pc = 0x37e168u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37e16c: 0x1e0219b  .word       0x01E0219B                   # divu        $a0, $t7, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e16cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37e170: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e174: 0x1c029db  .word       0x01C029DB                   # divu        $a1, $t6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e174u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e178: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e178u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e17c: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e17cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e180: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e180u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e184: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e184u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E184 raw=0x01E2E8BD");
    // 0x37e188: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e188u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e18c: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e18cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e194: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e194u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e198: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e198u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e19c: 0x1c3b9bc  .word       0x01C3B9BC                   # dsll32      $s7, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e19cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e1a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e1a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e1a4: 0x1c3c0bd  .word       0x01C3C0BD                   # INVALID     $t6, $v1, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E1A4 raw=0x01C3C0BD");
    // 0x37e1a8: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e1a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e1ac: 0x1c3c94a  .word       0x01C3C94A                   # movz        $t9, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1acu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x37e1b0: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e1b0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e1b4: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e1b8: 0x8029333c  lb          $t1, 0x333C($at)
    ctx->pc = 0x37e1b8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 13116)));
    // 0x37e1bc: 0x1c0321c  .word       0x01C0321C                   # dmult       $t6, $zero # 00003200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E1BC raw=0x01C0321C");
    // 0x37e1c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e1c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e1c4: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E1C4 raw=0x01C03A5C");
    // 0x37e1c8: 0x81e403bc  lb          $a0, 0x3BC($t7)
    ctx->pc = 0x37e1c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37e1cc: 0x1e0219b  .word       0x01E0219B                   # divu        $a0, $t7, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1ccu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37e1d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e1d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e1d4: 0x1c029db  .word       0x01C029DB                   # divu        $a1, $t6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1d4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e1d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e1d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e1dc: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1dcu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e1e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e1e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e1e4: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E1E4 raw=0x01E2E8BD");
    // 0x37e1e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e1e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e1ec: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1ecu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e1f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e1f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e1f4: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1f4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e1f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e1f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e1fc: 0x1c3b9bc  .word       0x01C3B9BC                   # dsll32      $s7, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e1fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e200: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e200u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e204: 0x1c3c0bd  .word       0x01C3C0BD                   # INVALID     $t6, $v1, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e204u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E204 raw=0x01C3C0BD");
    // 0x37e208: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e208u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e20c: 0x1c3c94a  .word       0x01C3C94A                   # movz        $t9, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e20cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x37e210: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e210u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e214: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e218: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37e218u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37e21c: 0x1ea417d  .word       0x01EA417D                   # INVALID     $t7, $t2, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e21cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E21C raw=0x01EA417D");
    // 0x37e220: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37e220u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37e224: 0x1c0321c  .word       0x01C0321C                   # dmult       $t6, $zero # 00003200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e224u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E224 raw=0x01C0321C");
    // 0x37e228: 0x8029333c  lb          $t1, 0x333C($at)
    ctx->pc = 0x37e228u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 13116)));
    // 0x37e22c: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e22cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E22C raw=0x01C03A5C");
    // 0x37e230: 0x81e403bc  lb          $a0, 0x3BC($t7)
    ctx->pc = 0x37e230u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37e234: 0x1e0219b  .word       0x01E0219B                   # divu        $a0, $t7, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e234u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37e238: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e238u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e23c: 0x1c029db  .word       0x01C029DB                   # divu        $a1, $t6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e23cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e240: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e240u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e244: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e244u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e248: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e248u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e24c: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e24cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E24C raw=0x01E2E8BD");
    // 0x37e250: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e250u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e254: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e254u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e25c: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e25cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e260: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e260u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e264: 0x1c3b9bc  .word       0x01C3B9BC                   # dsll32      $s7, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e264u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e268: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e268u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e26c: 0x1c3c0bd  .word       0x01C3C0BD                   # INVALID     $t6, $v1, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e26cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E26C raw=0x01C3C0BD");
    // 0x37e270: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e270u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e274: 0x1c3c94a  .word       0x01C3C94A                   # movz        $t9, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e274u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x37e278: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e278u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e27c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e280: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37e280u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37e284: 0x1ea417d  .word       0x01EA417D                   # INVALID     $t7, $t2, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e284u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E284 raw=0x01EA417D");
    // 0x37e288: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37e288u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37e28c: 0x1c0321c  .word       0x01C0321C                   # dmult       $t6, $zero # 00003200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e28cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E28C raw=0x01C0321C");
    // 0x37e290: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37e290u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37e294: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e294u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E294 raw=0x01C03A5C");
    // 0x37e298: 0x8029333c  lb          $t1, 0x333C($at)
    ctx->pc = 0x37e298u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 13116)));
    // 0x37e29c: 0x1e0219b  .word       0x01E0219B                   # divu        $a0, $t7, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e29cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37e2a0: 0x81e403bc  lb          $a0, 0x3BC($t7)
    ctx->pc = 0x37e2a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37e2a4: 0x1c029db  .word       0x01C029DB                   # divu        $a1, $t6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e2a4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e2a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e2a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e2ac: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e2acu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e2b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e2b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e2b4: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e2b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E2B4 raw=0x01E2E8BD");
    // 0x37e2b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e2b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e2bc: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e2bcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e2c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e2c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e2c4: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e2c4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e2c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e2c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e2cc: 0x1c3b9bc  .word       0x01C3B9BC                   # dsll32      $s7, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e2ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e2d0: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e2d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e2d4: 0x1c3c0bd  .word       0x01C3C0BD                   # INVALID     $t6, $v1, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e2d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E2D4 raw=0x01C3C0BD");
    // 0x37e2d8: 0x52011ff4  beql        $s0, $at, . + 4 + (0x1FF4 << 2)
    ctx->pc = 0x37E2D8u;
    {
        const bool branch_taken_0x37e2d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x37e2d8) {
            ctx->pc = 0x37E2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E2D8u;
            // 0x37e2dc: 0x1c3c94a  .word       0x01C3C94A                   # movz        $t9, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3862ACu;
            return;
        }
    }
    ctx->pc = 0x37E2E0u;
    // 0x37e2e0: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e2e0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e2e4: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e2e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e2e8: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37e2e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37e2ec: 0x1ea417d  .word       0x01EA417D                   # INVALID     $t7, $t2, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e2ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E2EC raw=0x01EA417D");
    // 0x37e2f0: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37e2f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37e2f4: 0x1c0321c  .word       0x01C0321C                   # dmult       $t6, $zero # 00003200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e2f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E2F4 raw=0x01C0321C");
    // 0x37e2f8: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37e2f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37e2fc: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e2fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E2FC raw=0x01C03A5C");
    // 0x37e300: 0x81e403bc  lb          $a0, 0x3BC($t7)
    ctx->pc = 0x37e300u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37e304: 0x1e0219b  .word       0x01E0219B                   # divu        $a0, $t7, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e304u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37e308: 0x8029333c  lb          $t1, 0x333C($at)
    ctx->pc = 0x37e308u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 13116)));
    // 0x37e30c: 0x1c029db  .word       0x01C029DB                   # divu        $a1, $t6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e30cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e310: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e310u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e314: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e314u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e31c: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e31cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E31C raw=0x01E2E8BD");
    // 0x37e320: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e320u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e324: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e324u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e328: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e328u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e32c: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e32cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e330: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e330u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e334: 0x1c3b9bc  .word       0x01C3B9BC                   # dsll32      $s7, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e334u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e338: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e338u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e33c: 0x1c3c0bd  .word       0x01C3C0BD                   # INVALID     $t6, $v1, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e33cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E33C raw=0x01C3C0BD");
    // 0x37e340: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e340u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e344: 0x1c3c94a  .word       0x01C3C94A                   # movz        $t9, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e344u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x37e348: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e348u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e34c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e34cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e350: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37e350u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37e354: 0x1ea417d  .word       0x01EA417D                   # INVALID     $t7, $t2, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e354u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E354 raw=0x01EA417D");
    // 0x37e358: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37e358u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37e35c: 0x1c0321c  .word       0x01C0321C                   # dmult       $t6, $zero # 00003200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e35cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E35C raw=0x01C0321C");
    // 0x37e360: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37e360u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37e364: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e364u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E364 raw=0x01C03A5C");
    // 0x37e368: 0x81e403bc  lb          $a0, 0x3BC($t7)
    ctx->pc = 0x37e368u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37e36c: 0x1e0219b  .word       0x01E0219B                   # divu        $a0, $t7, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e36cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37e370: 0x8029333c  lb          $t1, 0x333C($at)
    ctx->pc = 0x37e370u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 13116)));
    // 0x37e374: 0x1c029db  .word       0x01C029DB                   # divu        $a1, $t6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e374u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e378: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e378u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e37c: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e37cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e380: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e380u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e384: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e384u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E384 raw=0x01E2E8BD");
    // 0x37e388: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e388u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e38c: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e38cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e390: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e390u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e394: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e394u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e398: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e398u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e39c: 0x1c3b9bc  .word       0x01C3B9BC                   # dsll32      $s7, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e39cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e3a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e3a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e3a4: 0x1c3c0bd  .word       0x01C3C0BD                   # INVALID     $t6, $v1, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e3a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E3A4 raw=0x01C3C0BD");
    // 0x37e3a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e3a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e3ac: 0x1c3c94a  .word       0x01C3C94A                   # movz        $t9, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e3acu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x37e3b0: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37e3b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37e3b4: 0x1ea417d  .word       0x01EA417D                   # INVALID     $t7, $t2, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e3b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E3B4 raw=0x01EA417D");
    // 0x37e3b8: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37e3b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37e3bc: 0x1c0321c  .word       0x01C0321C                   # dmult       $t6, $zero # 00003200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e3bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E3BC raw=0x01C0321C");
    // 0x37e3c0: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37e3c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37e3c4: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e3c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E3C4 raw=0x01C03A5C");
    // 0x37e3c8: 0x81e403bc  lb          $a0, 0x3BC($t7)
    ctx->pc = 0x37e3c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37e3cc: 0x1e0219b  .word       0x01E0219B                   # divu        $a0, $t7, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e3ccu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37e3d0: 0x8029333c  lb          $t1, 0x333C($at)
    ctx->pc = 0x37e3d0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 13116)));
    // 0x37e3d4: 0x1c029db  .word       0x01C029DB                   # divu        $a1, $t6, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e3d4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e3d8: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37e3d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37e3dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e3dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e3e0: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37e3e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37e3e4: 0x1ea417d  .word       0x01EA417D                   # INVALID     $t7, $t2, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e3e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E3E4 raw=0x01EA417D");
    // 0x37e3e8: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x37e3e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
    // 0x37e3ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e3ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e3f0: 0x8029333c  lb          $t1, 0x333C($at)
    ctx->pc = 0x37e3f0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 13116)));
    // 0x37e3f4: 0x1c0321c  .word       0x01C0321C                   # dmult       $t6, $zero # 00003200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e3f4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E3F4 raw=0x01C0321C");
    // 0x37e3f8: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37e3f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37e3fc: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e3fcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E3FC raw=0x01C03A5C");
    // 0x37e400: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37e400u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37e404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e408: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37e408u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37e40c: 0x1ea417d  .word       0x01EA417D                   # INVALID     $t7, $t2, 0x417D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e40cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E40C raw=0x01EA417D");
    // 0x37e410: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37e410u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37e414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e418: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37e418u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37E418 raw=0x48007800");
    // 0x37e41c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e41cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e420: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37e420u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37e424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e428: 0x0  nop
    ctx->pc = 0x37e428u;
    // NOP
    // 0x37e42c: 0x0  nop
    ctx->pc = 0x37e42cu;
    // NOP
    // 0x37e430: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x37e430u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x37e434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e438: 0x1fc0018  mult        $zero, $t7, $gp
    ctx->pc = 0x37e438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37e43c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e43cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e440: 0x1fd0019  multu       $t7, $sp
    ctx->pc = 0x37e440u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37e444: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e448: 0x1fe001a  div         $zero, $t7, $fp
    ctx->pc = 0x37e448u;
    { int32_t divisor = GPR_S32(ctx, 30);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37e44c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e44cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e450: 0x1ff001b  divu        $zero, $t7, $ra
    ctx->pc = 0x37e450u;
    { uint32_t divisor = GPR_U32(ctx, 31); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37e454: 0x1e02958  .word       0x01E02958                   # mult        $a1, $t7, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37e454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x37e458: 0x3b808081  xori        $zero, $gp, 0x8081
    ctx->pc = 0x37e458u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)32897);
    // 0x37e45c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37e45cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x37e460: 0x1f50030  tge         $t7, $s5, 0
    ctx->pc = 0x37e460u;
    if (GPR_S64(ctx, 15) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x37e464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e468: 0x1f60031  tgeu        $t7, $s6, 0
    ctx->pc = 0x37e468u;
    if (GPR_U64(ctx, 15) >= GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x37e46c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e46cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e470: 0x1f70032  tlt         $t7, $s7, 0
    ctx->pc = 0x37e470u;
    if (GPR_S64(ctx, 15) < GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x37e474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e478: 0x8440034  j           func_11000D0
    ctx->pc = 0x37E478u;
    ctx->pc = 0x37E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E478u;
    // 0x37e47c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x37E478u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E480u;
    // 0x37e480: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x37e480u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
    // 0x37e484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e488: 0x9020033  j           func_40800CC
    ctx->pc = 0x37E488u;
    ctx->pc = 0x37E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E488u;
    // 0x37e48c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x37E488u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E490u;
    // 0x37e490: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x37e490u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x37e494: 0x1e0ad5e  .word       0x01E0AD5E                   # ddiv        $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e494u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E494 raw=0x01E0AD5E");
    // 0x37e498: 0x8430033  j           func_10C00CC
    ctx->pc = 0x37E498u;
    ctx->pc = 0x37E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E498u;
    // 0x37e49c: 0x1e0b59e  .word       0x01E0B59E                   # ddiv        $s6, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E49C raw=0x01E0B59E");
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C00CCu, 0x37E498u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E4A0u;
label_37e4a0:
    // 0x37e4a0: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x37e4a0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x37e4a4: 0x1e0bdde  .word       0x01E0BDDE                   # ddiv        $s7, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e4a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E4A4 raw=0x01E0BDDE");
    // 0x37e4a8: 0x8240034  j           func_9000D0
    ctx->pc = 0x37E4A8u;
    ctx->pc = 0x37E4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E4A8u;
    // 0x37e4ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x37E4A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E4B0u;
    // 0x37e4b0: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x37e4b0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x37e4b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e4b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e4b8: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x37E4B8u;
    {
        const bool branch_taken_0x37e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4B8u;
        // 0x37e4bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e4b8) {
            ctx->pc = 0x3864C0u;
            return;
        }
    }
    ctx->pc = 0x37E4C0u;
    // 0x37e4c0: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x37E4C0u;
    ctx->pc = 0x37E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E4C0u;
    // 0x37e4c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x37E4C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E4C8u;
    // 0x37e4c8: 0x12080806  beq         $s0, $t0, . + 4 + (0x806 << 2)
    ctx->pc = 0x37E4C8u;
    {
        const bool branch_taken_0x37e4c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x37E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4C8u;
        // 0x37e4cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e4c8) {
            ctx->pc = 0x3804E4u;
            return;
        }
    }
    ctx->pc = 0x37E4D0u;
    // 0x37e4d0: 0x1f90037  .word       0x01F90037                   # INVALID     $t7, $t9, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e4d0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x37E4D0 raw=0x01F90037");
    // 0x37e4d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e4d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e4d8: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
    ctx->pc = 0x37E4D8u;
    {
        const bool branch_taken_0x37e4d8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x37e4d8) {
            ctx->pc = 0x37E4DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E4D8u;
            // 0x37e4dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E4E4u;
            return;
        }
    }
    ctx->pc = 0x37E4E0u;
    // 0x37e4e0: 0x1f80045  .word       0x01F80045                   # INVALID     $t7, $t8, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e4e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x37E4E0 raw=0x01F80045");
    // 0x37e4e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e4e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e4e8: 0x10010006  beq         $zero, $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x37E4E8u;
    {
        const bool branch_taken_0x37e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x37E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4E8u;
        // 0x37e4ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e4e8) {
            ctx->pc = 0x37E504u;
            goto label_37e504;
        }
    }
    ctx->pc = 0x37E4F0u;
    // 0x37e4f0: 0x80011870  lb          $at, 0x1870($zero)
    ctx->pc = 0x37e4f0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x1870u));
    // 0x37e4f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e4f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e4f8: 0x12010801  beq         $s0, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x37E4F8u;
    {
        const bool branch_taken_0x37e4f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x37E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E4F8u;
        // 0x37e4fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e4f8) {
            ctx->pc = 0x380500u;
            return;
        }
    }
    ctx->pc = 0x37E500u;
    // 0x37e500: 0x80000170  lb          $zero, 0x170($zero)
    ctx->pc = 0x37e500u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x170u));
label_37e504:
    // 0x37e504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e508: 0x102607ff  beq         $at, $a2, . + 4 + (0x7FF << 2)
    ctx->pc = 0x37E508u;
    {
        const bool branch_taken_0x37e508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 6));
        ctx->pc = 0x37E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E508u;
        // 0x37e50c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e508) {
            ctx->pc = 0x380508u;
            return;
        }
    }
    ctx->pc = 0x37E510u;
    // 0x37e510: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e510u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e518: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e518u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e51c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e51cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e520: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e520u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e524: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e524u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e528: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e528u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e52c: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e52cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E52C raw=0x01E2E8BD");
    // 0x37e530: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e530u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e534: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e534u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e538: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e538u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e53c: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e53cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e540: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e540u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e544: 0x1c3a9bc  .word       0x01C3A9BC                   # dsll32      $s5, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e544u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e548: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e548u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e54c: 0x1c3b0bd  .word       0x01C3B0BD                   # INVALID     $t6, $v1, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e54cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E54C raw=0x01C3B0BD");
    // 0x37e550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e554: 0x1c3b94a  .word       0x01C3B94A                   # movz        $s7, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e554u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x37e558: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e558u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e55c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e55cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e560: 0x81e6233c  lb          $a2, 0x233C($t7)
    ctx->pc = 0x37e560u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9020)));
    // 0x37e564: 0x1f821ea  .word       0x01F821EA                   # slt         $a0, $t7, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e564u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37e568: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e568u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e56c: 0x1c02a1b  .word       0x01C02A1B                   # divu        $a1, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e56cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e570: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e570u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e574: 0x20221b  .word       0x0020221B                   # divu        $a0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e574u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37e578: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e578u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e57c: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e57cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e580: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e580u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e584: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e584u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E584 raw=0x01E2E8BD");
    // 0x37e588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e58c: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e58cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e590: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e590u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e594: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e594u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e59c: 0x1c3a9bc  .word       0x01C3A9BC                   # dsll32      $s5, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e59cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e5a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e5a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e5a4: 0x1c3b0bd  .word       0x01C3B0BD                   # INVALID     $t6, $v1, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E5A4 raw=0x01C3B0BD");
    // 0x37e5a8: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e5a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e5ac: 0x1c3b94a  .word       0x01C3B94A                   # movz        $s7, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5acu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x37e5b0: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e5b0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e5b4: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e5b8: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37e5b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37e5bc: 0x1c639ff  .word       0x01C639FF                   # dsra32      $a3, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5bcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 6) >> (32 + 7));
    // 0x37e5c0: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37e5c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37e5c4: 0x1c631ff  .word       0x01C631FF                   # dsra32      $a2, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5c4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 7));
    // 0x37e5c8: 0x81e4337d  lb          $a0, 0x337D($t7)
    ctx->pc = 0x37e5c8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
    // 0x37e5cc: 0x1f821ea  .word       0x01F821EA                   # slt         $a0, $t7, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5ccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37e5d0: 0x81e6233c  lb          $a2, 0x233C($t7)
    ctx->pc = 0x37e5d0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9020)));
    // 0x37e5d4: 0x1c02a1b  .word       0x01C02A1B                   # divu        $a1, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5d4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e5d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e5d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e5dc: 0x20221b  .word       0x0020221B                   # divu        $a0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5dcu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37e5e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e5e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e5e4: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5e4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e5e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e5e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e5ec: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E5EC raw=0x01E2E8BD");
    // 0x37e5f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e5f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e5f4: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5f4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e5f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e5f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e5fc: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e5fcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e600: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e600u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e604: 0x1c3a9bc  .word       0x01C3A9BC                   # dsll32      $s5, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e604u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e608: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e608u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e60c: 0x1c3b0bd  .word       0x01C3B0BD                   # INVALID     $t6, $v1, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e60cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E60C raw=0x01C3B0BD");
    // 0x37e610: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e610u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e614: 0x1c3b94a  .word       0x01C3B94A                   # movz        $s7, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e614u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x37e618: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e618u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e61c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e61cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e620: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37e620u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37e624: 0x1c639ff  .word       0x01C639FF                   # dsra32      $a3, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e624u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 6) >> (32 + 7));
    // 0x37e628: 0xa2717fc  j           func_89C5FF0
    ctx->pc = 0x37E628u;
    ctx->pc = 0x37E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E628u;
    // 0x37e62c: 0x1c631ff  .word       0x01C631FF                   # dsra32      $a2, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF0u, 0x37E628u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E630u;
    // 0x37e630: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37e630u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37e634: 0x1f821ea  .word       0x01F821EA                   # slt         $a0, $t7, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e634u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37e638: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37e638u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37e63c: 0x1c02a1b  .word       0x01C02A1B                   # divu        $a1, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e63cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e640: 0x81e4337d  lb          $a0, 0x337D($t7)
    ctx->pc = 0x37e640u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
    // 0x37e644: 0x20221b  .word       0x0020221B                   # divu        $a0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e644u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37e648: 0x81e6233c  lb          $a2, 0x233C($t7)
    ctx->pc = 0x37e648u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9020)));
    // 0x37e64c: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e64cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e650: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37e650u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37e654: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e654u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E654 raw=0x01E2E8BD");
    // 0x37e658: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37e658u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37e65c: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e65cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e664: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e664u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e668: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e668u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e66c: 0x1c3a9bc  .word       0x01C3A9BC                   # dsll32      $s5, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e66cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e674: 0x1c3b0bd  .word       0x01C3B0BD                   # INVALID     $t6, $v1, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e674u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E674 raw=0x01C3B0BD");
    // 0x37e678: 0x52011ff4  beql        $s0, $at, . + 4 + (0x1FF4 << 2)
    ctx->pc = 0x37E678u;
    {
        const bool branch_taken_0x37e678 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x37e678) {
            ctx->pc = 0x37E67Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E678u;
            // 0x37e67c: 0x1c3b94a  .word       0x01C3B94A                   # movz        $s7, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38664Cu;
            return;
        }
    }
    ctx->pc = 0x37E680u;
    // 0x37e680: 0x81e11b7c  lb          $at, 0x1B7C($t7)
    ctx->pc = 0x37e680u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e684: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e684u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e688: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37e688u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37e68c: 0x1c639ff  .word       0x01C639FF                   # dsra32      $a3, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e68cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 6) >> (32 + 7));
    // 0x37e690: 0xa2717fc  j           func_89C5FF0
    ctx->pc = 0x37E690u;
    ctx->pc = 0x37E694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E690u;
    // 0x37e694: 0x1c631ff  .word       0x01C631FF                   # dsra32      $a2, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF0u, 0x37E690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E698u;
    // 0x37e698: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37e698u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37e69c: 0x1f821ea  .word       0x01F821EA                   # slt         $a0, $t7, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e69cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37e6a0: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37e6a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37e6a4: 0x1c02a1b  .word       0x01C02A1B                   # divu        $a1, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e6a4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e6a8: 0x81e4337d  lb          $a0, 0x337D($t7)
    ctx->pc = 0x37e6a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
    // 0x37e6ac: 0x20221b  .word       0x0020221B                   # divu        $a0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e6acu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37e6b0: 0x81e6233c  lb          $a2, 0x233C($t7)
    ctx->pc = 0x37e6b0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9020)));
    // 0x37e6b4: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e6b4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e6b8: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37e6b8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37e6bc: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e6bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E6BC raw=0x01E2E8BD");
    // 0x37e6c0: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37e6c0u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37e6c4: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e6c4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e6c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e6c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e6cc: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e6ccu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e6d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e6d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e6d4: 0x1c3a9bc  .word       0x01C3A9BC                   # dsll32      $s5, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e6d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37e6d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e6d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e6dc: 0x1c3b0bd  .word       0x01C3B0BD                   # INVALID     $t6, $v1, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e6dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E6DC raw=0x01C3B0BD");
    // 0x37e6e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e6e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e6e4: 0x1c3b94a  .word       0x01C3B94A                   # movz        $s7, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e6e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x37e6e8: 0x81e2137c  lb          $v0, 0x137C($t7)
    ctx->pc = 0x37e6e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e6ec: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e6ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37e6f0: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37e6f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37e6f4: 0x1c639ff  .word       0x01C639FF                   # dsra32      $a3, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e6f4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 6) >> (32 + 7));
    // 0x37e6f8: 0xa2717fc  j           func_89C5FF0
    ctx->pc = 0x37E6F8u;
    ctx->pc = 0x37E6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E6F8u;
    // 0x37e6fc: 0x1c631ff  .word       0x01C631FF                   # dsra32      $a2, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF0u, 0x37E6F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E700u;
    // 0x37e700: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37e700u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37e704: 0x1f821ea  .word       0x01F821EA                   # slt         $a0, $t7, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e704u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37e708: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37e708u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37e70c: 0x1c02a1b  .word       0x01C02A1B                   # divu        $a1, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e70cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e710: 0x81e4337d  lb          $a0, 0x337D($t7)
    ctx->pc = 0x37e710u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
    // 0x37e714: 0x20221b  .word       0x0020221B                   # divu        $a0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e714u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37e718: 0x81e6233c  lb          $a2, 0x233C($t7)
    ctx->pc = 0x37e718u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9020)));
    // 0x37e71c: 0x1e2e1bc  .word       0x01E2E1BC                   # dsll32      $gp, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e71cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37e720: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37e720u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37e724: 0x1e2e8bd  .word       0x01E2E8BD                   # INVALID     $t7, $v0, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e724u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E724 raw=0x01E2E8BD");
    // 0x37e728: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37e728u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37e72c: 0x1e2f0be  .word       0x01E2F0BE                   # dsrl32      $fp, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e72cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37e730: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37e730u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37e734: 0x1e0f90b  .word       0x01E0F90B                   # movn        $ra, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e734u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e738: 0xa2717fd  j           func_89C5FF4
    ctx->pc = 0x37E738u;
    ctx->pc = 0x37E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E738u;
    // 0x37e73c: 0x1c3a9bc  .word       0x01C3A9BC                   # dsll32      $s5, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF4u, 0x37E738u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E740u;
    // 0x37e740: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37e740u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37e744: 0x1c3b0bd  .word       0x01C3B0BD                   # INVALID     $t6, $v1, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e744u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E744 raw=0x01C3B0BD");
    // 0x37e748: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37e748u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37e74c: 0x1c3b94a  .word       0x01C3B94A                   # movz        $s7, $t6, $v1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e74cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x37e750: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37e750u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37e754: 0x1c639ff  .word       0x01C639FF                   # dsra32      $a3, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e754u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 6) >> (32 + 7));
    // 0x37e758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e75c: 0x1c631ff  .word       0x01C631FF                   # dsra32      $a2, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e75cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 7));
    // 0x37e760: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37e760u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37e764: 0x1f821ea  .word       0x01F821EA                   # slt         $a0, $t7, $t8 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e764u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37e768: 0x81e4337d  lb          $a0, 0x337D($t7)
    ctx->pc = 0x37e768u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
    // 0x37e76c: 0x1c02a1b  .word       0x01C02A1B                   # divu        $a1, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e76cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e770: 0x81e6233c  lb          $a2, 0x233C($t7)
    ctx->pc = 0x37e770u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9020)));
    // 0x37e774: 0x20221b  .word       0x0020221B                   # divu        $a0, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e774u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37e778: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37e778u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37e77c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e77cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e780: 0xa2717fe  j           func_89C5FF8
    ctx->pc = 0x37E780u;
    ctx->pc = 0x37E784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E780u;
    // 0x37e784: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF8u, 0x37E780u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E788u;
label_37e788:
    // 0x37e788: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37e788u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37e78c: 0x1c639ff  .word       0x01C639FF                   # dsra32      $a3, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e78cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 6) >> (32 + 7));
    // 0x37e790: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37e790u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37e794: 0x1c631ff  .word       0x01C631FF                   # dsra32      $a2, $a2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e794u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 7));
    // 0x37e798: 0x81e4337d  lb          $a0, 0x337D($t7)
    ctx->pc = 0x37e798u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 13181)));
    // 0x37e79c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e79cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e7a0: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37e7a0u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37e7a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e7a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e7a8: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37e7a8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37e7ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e7acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e7b0: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37e7b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37e7b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e7b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e7b8: 0xa2717ff  j           func_89C5FFC
    ctx->pc = 0x37E7B8u;
    ctx->pc = 0x37E7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E7B8u;
    // 0x37e7bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FFCu, 0x37E7B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E7C0u;
    // 0x37e7c0: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37e7c0u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37e7c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e7c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e7c8: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37e7c8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37e7cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e7ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e7d0: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37e7d0u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37E7D0 raw=0x48007800");
    // 0x37e7d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e7d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e7d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e7d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e7dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e7dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e7e0: 0x1df0021  addu        $zero, $t6, $ra
    ctx->pc = 0x37e7e0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 31)));
    // 0x37e7e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e7e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e7e8: 0x3e0038  .word       0x003E0038                   # dsll        $zero, $fp, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e7e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) << 0);
    // 0x37e7ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e7ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e7f0: 0x8440fff  j           func_1103FFC
    ctx->pc = 0x37E7F0u;
    ctx->pc = 0x37E7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E7F0u;
    // 0x37e7f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103FFCu, 0x37E7F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E7F8u;
    // 0x37e7f8: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x37e7f8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x37e7fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e7fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e800: 0x81fc0b7c  lb          $gp, 0xB7C($t7)
    ctx->pc = 0x37e800u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37e804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e808: 0x81fd0b7c  lb          $sp, 0xB7C($t7)
    ctx->pc = 0x37e808u;
    SET_GPR_S32(ctx, 29, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37e80c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e80cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e810: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x37e810u;
    // CACHE instruction (ignored)
    // 0x37e814: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37e814u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x37e818: 0x11ed07f0  beq         $t7, $t5, . + 4 + (0x7F0 << 2)
    ctx->pc = 0x37E818u;
    {
        const bool branch_taken_0x37e818 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 13));
        ctx->pc = 0x37E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E818u;
        // 0x37e81c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e818) {
            ctx->pc = 0x3807DCu;
            return;
        }
    }
    ctx->pc = 0x37E820u;
    // 0x37e820: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
    ctx->pc = 0x37E820u;
    {
        const bool branch_taken_0x37e820 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x37E824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E820u;
        // 0x37e824: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e820) {
            ctx->pc = 0x380820u;
            return;
        }
    }
    ctx->pc = 0x37E828u;
    // 0x37e828: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
    ctx->pc = 0x37E828u;
    {
        const bool branch_taken_0x37e828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x37E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E828u;
        // 0x37e82c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e828) {
            ctx->pc = 0x394830u;
            return;
        }
    }
    ctx->pc = 0x37E830u;
    // 0x37e830: 0x100c0010  beq         $zero, $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x37E830u;
    {
        const bool branch_taken_0x37e830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x37E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E830u;
        // 0x37e834: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e830) {
            ctx->pc = 0x37E874u;
            goto label_37e874;
        }
    }
    ctx->pc = 0x37E838u;
    // 0x37e838: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x37e838u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x37e83c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e83cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e840: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x37e840u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x37e844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e848: 0x81fbe33c  lb          $k1, -0x1CC4($t7)
    ctx->pc = 0x37e848u;
    SET_GPR_S32(ctx, 27, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959932)));
    // 0x37e84c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e84cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e850: 0x81fceb3c  lb          $gp, -0x14C4($t7)
    ctx->pc = 0x37e850u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294961980)));
    // 0x37e854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e858: 0x81dd0b7c  lb          $sp, 0xB7C($t6)
    ctx->pc = 0x37e858u;
    SET_GPR_S32(ctx, 29, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 2940)));
    // 0x37e85c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e85cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e860: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e860u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e864: 0x1dcd8ac  .word       0x01DCD8AC                   # dadd        $k1, $t6, $gp # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e864u;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
    // 0x37e868: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e868u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e86c: 0x1dce8ec  .word       0x01DCE8EC                   # dadd        $sp, $t6, $gp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e86cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
    // 0x37e870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37e874:
    // 0x37e874: 0x1dcf92c  .word       0x01DCF92C                   # dadd        $ra, $t6, $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e874u;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
    // 0x37e878: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e878u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e87c: 0x1c312fe  .word       0x01C312FE                   # dsrl32      $v0, $v1, 11 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 11));
    // 0x37e880: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e884: 0x1c2196e  .word       0x01C2196E                   # dsub        $v1, $t6, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e884u;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
    // 0x37e888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e88c: 0x1de219b  .word       0x01DE219B                   # divu        $a0, $t6, $fp # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e88cu;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37e890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e894: 0x1c531ea  .word       0x01C531EA                   # slt         $a2, $t6, $a1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e894u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x37e898: 0x8251000  j           func_944000
    ctx->pc = 0x37E898u;
    ctx->pc = 0x37E89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E898u;
    // 0x37e89c: 0x2701bc  .word       0x002701BC                   # dsll32      $zero, $a3, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x944000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x944000u, 0x37E898u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E8A0u;
    // 0x37e8a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e8a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e8a4: 0x2700bd  .word       0x002700BD                   # INVALID     $at, $a3, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e8a4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E8A4 raw=0x002700BD");
    // 0x37e8a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e8a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e8ac: 0x27020a  .word       0x0027020A                   # movz        $zero, $at, $a3 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e8acu;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x37e8b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e8b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e8b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e8b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e8b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e8b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e8bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e8bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e8c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e8c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e8c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e8c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e8c8: 0x34066000  ori         $a2, $zero, 0x6000
    ctx->pc = 0x37e8c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)24576);
    // 0x37e8cc: 0x20f79e  .word       0x0020F79E                   # ddiv        $fp, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e8ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E8CC raw=0x0020F79E");
label_37e8d0:
    // 0x37e8d0: 0x800d31b0  lb          $t5, 0x31B0($zero)
    ctx->pc = 0x37e8d0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x31B0u));
    // 0x37e8d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e8d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e8d8: 0x800b31b4  lb          $t3, 0x31B4($zero)
    ctx->pc = 0x37e8d8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x31B4u));
    // 0x37e8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e8e0: 0x800629f5  lb          $a2, 0x29F5($zero)
    ctx->pc = 0x37e8e0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x29F5u));
    // 0x37e8e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e8e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e8e8: 0xa271000  j           func_89C4000
    ctx->pc = 0x37E8E8u;
    ctx->pc = 0x37E8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E8E8u;
    // 0x37e8ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C4000u, 0x37E8E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E8F0u;
    // 0x37e8f0: 0x52040fea  beql        $s0, $a0, . + 4 + (0xFEA << 2)
    ctx->pc = 0x37E8F0u;
    {
        const bool branch_taken_0x37e8f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x37e8f0) {
            ctx->pc = 0x37E8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E8F0u;
            // 0x37e8f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38289Cu;
            return;
        }
    }
    ctx->pc = 0x37E8F8u;
    // 0x37e8f8: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x37e8f8u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x37e8fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e8fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e900: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37e900u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37E900 raw=0x48007800");
    // 0x37e904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37e908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37e90c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e90cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e910: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x37e910u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x37e914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e918: 0x1fa002e  dsub        $zero, $t7, $k0
    ctx->pc = 0x37e918u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 26); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x37e91c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e91cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e920: 0x1fb002f  dsubu       $zero, $t7, $k1
    ctx->pc = 0x37e920u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 15) - GPR_U64(ctx, 27));
    // 0x37e924: 0x1e04a58  .word       0x01E04A58                   # mult        $t1, $t7, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37e924u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x37e928: 0x1fc001c  dmult       $t7, $gp
    ctx->pc = 0x37e928u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37E928 raw=0x01FC001C");
    // 0x37e92c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e92cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e930: 0x1fd001d  dmultu      $t7, $sp
    ctx->pc = 0x37e930u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x37E930 raw=0x01FD001D");
    // 0x37e934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e938: 0x1fe001e  ddiv        $zero, $t7, $fp
    ctx->pc = 0x37e938u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E938 raw=0x01FE001E");
    // 0x37e93c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e93cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e940: 0x1ff001f  ddivu       $zero, $t7, $ra
    ctx->pc = 0x37e940u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x37E940 raw=0x01FF001F");
    // 0x37e944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e948: 0x1f70030  tge         $t7, $s7, 0
    ctx->pc = 0x37e948u;
    if (GPR_S64(ctx, 15) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x37e94c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e94cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e950: 0x1f80031  tgeu        $t7, $t8, 0
    ctx->pc = 0x37e950u;
    if (GPR_U64(ctx, 15) >= GPR_U64(ctx, 24)) { runtime->handleTrap(rdram, ctx); }
    // 0x37e954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e958: 0x1f90032  tlt         $t7, $t9, 0
    ctx->pc = 0x37e958u;
    if (GPR_S64(ctx, 15) < GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
    // 0x37e95c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e95cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e960: 0x8440034  j           func_11000D0
    ctx->pc = 0x37E960u;
    ctx->pc = 0x37E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E960u;
    // 0x37e964: 0x1fbe1bc  .word       0x01FBE1BC                   # dsll32      $gp, $k1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 27) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x37E960u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E968u;
label_37e968:
    // 0x37e968: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x37e968u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
label_37e96c:
    // 0x37e96c: 0x1fbe8bd  .word       0x01FBE8BD                   # INVALID     $t7, $k1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e96cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37E96C raw=0x01FBE8BD");
    // 0x37e970: 0x9020033  j           func_40800CC
    ctx->pc = 0x37E970u;
    ctx->pc = 0x37E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E970u;
    // 0x37e974: 0x1fbf0be  .word       0x01FBF0BE                   # dsrl32      $fp, $k1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 27) >> (32 + 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x37E970u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E978u;
    // 0x37e978: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x37e978u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x37e97c: 0x1fbffcb  .word       0x01FBFFCB                   # movn        $ra, $t7, $k1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e97cu;
    if (GPR_U64(ctx, 27) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37e980: 0x8430033  j           func_10C00CC
    ctx->pc = 0x37E980u;
    ctx->pc = 0x37E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E980u;
    // 0x37e984: 0x1fae718  .word       0x01FAE718                   # mult        $gp, $t7, $k0 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C00CCu, 0x37E980u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E988u;
    // 0x37e988: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x37e988u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x37e98c: 0x1faef59  .word       0x01FAEF59                   # multu       $t7, $k0 # 0000EF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e98cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
    // 0x37e990: 0x8240034  j           func_9000D0
    ctx->pc = 0x37E990u;
    ctx->pc = 0x37E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E990u;
    // 0x37e994: 0x1faf79a  .word       0x01FAF79A                   # div         $fp, $t7, $k0 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x37E990u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E998u;
    // 0x37e998: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x37e998u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x37e99c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e99cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e9a0: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x37E9A0u;
    {
        const bool branch_taken_0x37e9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9A0u;
        // 0x37e9a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e9a0) {
            ctx->pc = 0x3869A8u;
            return;
        }
    }
    ctx->pc = 0x37E9A8u;
    // 0x37e9a8: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x37E9A8u;
    ctx->pc = 0x37E9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E9A8u;
    // 0x37e9ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x37E9A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37E9B0u;
    // 0x37e9b0: 0x12050807  beq         $s0, $a1, . + 4 + (0x807 << 2)
    ctx->pc = 0x37E9B0u;
    {
        const bool branch_taken_0x37e9b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x37E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9B0u;
        // 0x37e9b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e9b0) {
            ctx->pc = 0x3809D0u;
            return;
        }
    }
    ctx->pc = 0x37E9B8u;
    // 0x37e9b8: 0x3b808081  xori        $zero, $gp, 0x8081
    ctx->pc = 0x37e9b8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)32897);
    // 0x37e9bc: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37e9bcu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x37e9c0: 0x5a002802  blezl       $s0, . + 4 + (0x2802 << 2)
    ctx->pc = 0x37E9C0u;
    {
        const bool branch_taken_0x37e9c0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x37e9c0) {
            ctx->pc = 0x37E9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E9C0u;
            // 0x37e9c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3889CCu;
            return;
        }
    }
    ctx->pc = 0x37E9C8u;
    // 0x37e9c8: 0x1f60037  .word       0x01F60037                   # INVALID     $t7, $s6, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e9c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x37E9C8 raw=0x01F60037");
    // 0x37e9cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e9ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e9d0: 0x10010007  beq         $zero, $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x37E9D0u;
    {
        const bool branch_taken_0x37e9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x37E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9D0u;
        // 0x37e9d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e9d0) {
            ctx->pc = 0x37E9F0u;
            goto label_37e9f0;
        }
    }
    ctx->pc = 0x37E9D8u;
    // 0x37e9d8: 0x80011070  lb          $at, 0x1070($zero)
    ctx->pc = 0x37e9d8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x1070u));
    // 0x37e9dc: 0x1c0bdde  .word       0x01C0BDDE                   # ddiv        $s7, $t6, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e9dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E9DC raw=0x01C0BDDE");
    // 0x37e9e0: 0x12010801  beq         $s0, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x37E9E0u;
    {
        const bool branch_taken_0x37e9e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x37E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E9E0u;
        // 0x37e9e4: 0x1c0c61e  .word       0x01C0C61E                   # ddiv        $t8, $t6, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E9E4 raw=0x01C0C61E");
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e9e0) {
            ctx->pc = 0x3809E8u;
            return;
        }
    }
    ctx->pc = 0x37E9E8u;
    // 0x37e9e8: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37e9e8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e9ec: 0x1c0ce5e  .word       0x01C0CE5E                   # ddiv        $t9, $t6, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e9ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37E9EC raw=0x01C0CE5E");
label_37e9f0:
    // 0x37e9f0: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37e9f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37e9f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37e9f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37e9f8: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37e9f8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37e9fc: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37e9fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37ea00: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37ea00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37ea04: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37ea08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea0c: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea0cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37ea10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea14: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EA14 raw=0x01E3E8BD");
    // 0x37ea18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea1c: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea1cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37ea20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea24: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea24u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37ea28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea2c: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea2cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37ea30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea34: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea34u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EA34 raw=0x01C4C0BD");
    // 0x37ea38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea3c: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea3cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
label_37ea40:
    // 0x37ea40: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37ea40u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37ea44: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37ea48: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37ea48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37ea4c: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37ea50: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x37ea50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37ea54: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea54u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37ea58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea5c: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea5cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37ea60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea64: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea64u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37ea68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea6c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EA6C raw=0x01E3E8BD");
    // 0x37ea70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea74: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea74u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37ea78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea7c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea7cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37ea80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea84: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea84u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37ea88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea8c: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea8cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EA8C raw=0x01C4C0BD");
    // 0x37ea90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ea90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ea94: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea94u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x37ea98: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37ea98u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37ea9c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ea9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37eaa0: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37eaa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37eaa4: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37eaa8: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x37eaa8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x37eaac: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eaacu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37EAAC raw=0x01C03A5C");
    // 0x37eab0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eab0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eab4: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eab4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37EAB4 raw=0x01C0429C");
    // 0x37eab8: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x37eab8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37eabc: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eabcu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37eac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eac4: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eac4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37eac8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eac8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eacc: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eaccu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37ead0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ead0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ead4: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ead4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EAD4 raw=0x01E3E8BD");
    // 0x37ead8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ead8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eadc: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eadcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37eae0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eae0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eae4: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eae4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37eae8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eae8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eaec: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eaecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37eaf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eaf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eaf4: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eaf4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EAF4 raw=0x01C4C0BD");
    // 0x37eaf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eaf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eafc: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eafcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x37eb00: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37eb00u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37eb04: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37eb08: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37eb08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37eb0c: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37eb10: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37eb10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37eb14: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EB14 raw=0x01EB497D");
    // 0x37eb18: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37eb18u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37eb1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37eb1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37eb20: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x37eb20u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x37eb24: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37EB24 raw=0x01C03A5C");
    // 0x37eb28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eb28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eb2c: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37EB2C raw=0x01C0429C");
    // 0x37eb30: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x37eb30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37eb34: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb34u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37eb38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eb38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eb3c: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb3cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37eb40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eb40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eb44: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb44u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37eb48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eb48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eb4c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EB4C raw=0x01E3E8BD");
    // 0x37eb50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eb50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eb54: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb54u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37eb58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eb58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eb5c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb5cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37eb60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eb60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eb64: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb64u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37eb68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eb68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eb6c: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EB6C raw=0x01C4C0BD");
    // 0x37eb70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eb70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eb74: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb74u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x37eb78: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37eb78u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37eb7c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37eb80: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37eb80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37eb84: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37eb88: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x37eb88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x37eb8c: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb8cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EB8C raw=0x01EB497D");
    // 0x37eb90: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37eb90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37eb94: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb94u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37EB94 raw=0x01C0429C");
    // 0x37eb98: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x37eb98u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x37eb9c: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eb9cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37EB9C raw=0x01C03A5C");
    // 0x37eba0: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x37eba0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37eba4: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eba4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37eba8: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37eba8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37ebac: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ebacu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37ebb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ebb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ebb4: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ebb4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37ebb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ebb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ebbc: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ebbcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EBBC raw=0x01E3E8BD");
    // 0x37ebc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ebc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ebc4: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ebc4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37ebc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ebc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ebcc: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ebccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37ebd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ebd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ebd4: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ebd4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37ebd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ebd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ebdc: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ebdcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37ebe0: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37ebe0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37ebe4: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ebe4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EBE4 raw=0x01C4C0BD");
    // 0x37ebe8: 0x520117f3  beql        $s0, $at, . + 4 + (0x17F3 << 2)
    ctx->pc = 0x37EBE8u;
    {
        const bool branch_taken_0x37ebe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x37ebe8) {
            ctx->pc = 0x37EBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37EBE8u;
            // 0x37ebec: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384BB8u;
            return;
        }
    }
    ctx->pc = 0x37EBF0u;
    // 0x37ebf0: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37ebf0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37ebf4: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ebf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37ebf8: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x37ebf8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x37ebfc: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ebfcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EBFC raw=0x01EB497D");
    // 0x37ec00: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37ec00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37ec04: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec04u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37EC04 raw=0x01C0429C");
    // 0x37ec08: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x37ec08u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x37ec0c: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37EC0C raw=0x01C03A5C");
    // 0x37ec10: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x37ec10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37ec14: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec14u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37ec18: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37ec18u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37ec1c: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec1cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37ec20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ec20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ec24: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec24u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37ec28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ec28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ec2c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EC2C raw=0x01E3E8BD");
    // 0x37ec30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ec30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ec34: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec34u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37ec38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ec38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ec3c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec3cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37ec40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ec40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ec44: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec44u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37ec48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ec48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ec4c: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EC4C raw=0x01C4C0BD");
    // 0x37ec50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ec50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ec54: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec54u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x37ec58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ec58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ec5c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37ec60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ec60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ec64: 0x1e4113c  .word       0x01E4113C                   # dsll32      $v0, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37ec68: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x37ec68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x37ec6c: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EC6C raw=0x01EB497D");
    // 0x37ec70: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37ec70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37ec74: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37EC74 raw=0x01C0429C");
    // 0x37ec78: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x37ec78u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x37ec7c: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37EC7C raw=0x01C03A5C");
    // 0x37ec80: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x37ec80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37ec84: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec84u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37ec88: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37ec88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37ec8c: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec8cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37ec90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ec90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ec94: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec94u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37ec98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ec98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ec9c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ec9cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EC9C raw=0x01E3E8BD");
    // 0x37eca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eca4: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eca4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37eca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ecac: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ecacu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37ecb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ecb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ecb4: 0x1c4b9bc  .word       0x01C4B9BC                   # dsll32      $s7, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ecb4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37ecb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ecb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ecbc: 0x1c4c0bd  .word       0x01C4C0BD                   # INVALID     $t6, $a0, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ecbcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37ECBC raw=0x01C4C0BD");
    // 0x37ecc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ecc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ecc4: 0x1c4c98a  .word       0x01C4C98A                   # movz        $t9, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ecc4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 25, GPR_VEC(ctx, 14));
    // 0x37ecc8: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x37ecc8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x37eccc: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ecccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37ECCC raw=0x01EB497D");
    // 0x37ecd0: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37ecd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37ecd4: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ecd4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37ECD4 raw=0x01C0429C");
    // 0x37ecd8: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x37ecd8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x37ecdc: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ecdcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37ECDC raw=0x01C03A5C");
    // 0x37ece0: 0x81e503bc  lb          $a1, 0x3BC($t7)
    ctx->pc = 0x37ece0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37ece4: 0x1e029db  .word       0x01E029DB                   # divu        $a1, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ece4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37ece8: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37ece8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37ecec: 0x1c0321b  .word       0x01C0321B                   # divu        $a2, $t6, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ececu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37ecf0: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x37ecf0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x37ecf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ecf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ecf8: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37ecf8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37ecfc: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ecfcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37ECFC raw=0x01EB497D");
    // 0x37ed00: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37ed00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37ed04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed08: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x37ed08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
    // 0x37ed0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed10: 0x802a3b3c  lb          $t2, 0x3B3C($at)
    ctx->pc = 0x37ed10u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 15164)));
    // 0x37ed14: 0x1c03a5c  .word       0x01C03A5C                   # dmult       $t6, $zero # 00003A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ed14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37ED14 raw=0x01C03A5C");
    // 0x37ed18: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x37ed18u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x37ed1c: 0x1c0429c  .word       0x01C0429C                   # dmult       $t6, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ed1cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37ED1C raw=0x01C0429C");
    // 0x37ed20: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37ed20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37ed24: 0x1eb497d  .word       0x01EB497D                   # INVALID     $t7, $t3, 0x497D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ed24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37ED24 raw=0x01EB497D");
    // 0x37ed28: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37ed28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37ed2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed30: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37ed30u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37ED30 raw=0x48007800");
    // 0x37ed34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed38: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x37ed38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x37ed3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed40: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x37ed40u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x37ed44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed48: 0x1fc0018  mult        $zero, $t7, $gp
    ctx->pc = 0x37ed48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 28); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37ed4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed50: 0x1fd0019  multu       $t7, $sp
    ctx->pc = 0x37ed50u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37ed54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37ed58:
    // 0x37ed58: 0x1fe001a  div         $zero, $t7, $fp
    ctx->pc = 0x37ed58u;
    { int32_t divisor = GPR_S32(ctx, 30);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37ed5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed60: 0x1ff001b  divu        $zero, $t7, $ra
    ctx->pc = 0x37ed60u;
    { uint32_t divisor = GPR_U32(ctx, 31); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37ed64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed68: 0x1fa002e  dsub        $zero, $t7, $k0
    ctx->pc = 0x37ed68u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 26); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x37ed6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed70: 0x1fb002f  dsubu       $zero, $t7, $k1
    ctx->pc = 0x37ed70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 15) - GPR_U64(ctx, 27));
    // 0x37ed74: 0x1e02958  .word       0x01E02958                   # mult        $a1, $t7, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37ed74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x37ed78: 0x1f50030  tge         $t7, $s5, 0
    ctx->pc = 0x37ed78u;
    if (GPR_S64(ctx, 15) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x37ed7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed80: 0x1f60031  tgeu        $t7, $s6, 0
    ctx->pc = 0x37ed80u;
    if (GPR_U64(ctx, 15) >= GPR_U64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
    // 0x37ed84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed88: 0x1f70032  tlt         $t7, $s7, 0
    ctx->pc = 0x37ed88u;
    if (GPR_S64(ctx, 15) < GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
    // 0x37ed8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ed8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ed90: 0x3b808081  xori        $zero, $gp, 0x8081
    ctx->pc = 0x37ed90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)32897);
    // 0x37ed94: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37ed94u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x37ed98: 0x8440034  j           func_11000D0
    ctx->pc = 0x37ED98u;
    ctx->pc = 0x37ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ED98u;
    // 0x37ed9c: 0x1fbe1bc  .word       0x01FBE1BC                   # dsll32      $gp, $k1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 27) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x37ED98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37EDA0u;
    // 0x37eda0: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x37eda0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
    // 0x37eda4: 0x1fbe8bd  .word       0x01FBE8BD                   # INVALID     $t7, $k1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eda4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EDA4 raw=0x01FBE8BD");
    // 0x37eda8: 0x9020033  j           func_40800CC
    ctx->pc = 0x37EDA8u;
    ctx->pc = 0x37EDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EDA8u;
    // 0x37edac: 0x1fbf0be  .word       0x01FBF0BE                   # dsrl32      $fp, $k1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 27) >> (32 + 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x37EDA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37EDB0u;
    // 0x37edb0: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x37edb0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x37edb4: 0x1fbffcb  .word       0x01FBFFCB                   # movn        $ra, $t7, $k1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37edb4u;
    if (GPR_U64(ctx, 27) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37edb8: 0x8430033  j           func_10C00CC
    ctx->pc = 0x37EDB8u;
    ctx->pc = 0x37EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EDB8u;
    // 0x37edbc: 0x1fae718  .word       0x01FAE718                   # mult        $gp, $t7, $k0 # 00000700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C00CCu, 0x37EDB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37EDC0u;
    // 0x37edc0: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x37edc0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x37edc4: 0x1faef59  .word       0x01FAEF59                   # multu       $t7, $k0 # 0000EF40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37edc4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
    // 0x37edc8: 0x8240034  j           func_9000D0
    ctx->pc = 0x37EDC8u;
    ctx->pc = 0x37EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EDC8u;
    // 0x37edcc: 0x1faf79a  .word       0x01FAF79A                   # div         $fp, $t7, $k0 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x37EDC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37EDD0u;
    // 0x37edd0: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x37edd0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x37edd4: 0x1e0ad5e  .word       0x01E0AD5E                   # ddiv        $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37edd4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37EDD4 raw=0x01E0AD5E");
    // 0x37edd8: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x37EDD8u;
    {
        const bool branch_taken_0x37edd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EDD8u;
        // 0x37eddc: 0x1e0b59e  .word       0x01E0B59E                   # ddiv        $s6, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37EDDC raw=0x01E0B59E");
        ctx->in_delay_slot = false;
        if (branch_taken_0x37edd8) {
            ctx->pc = 0x386DE0u;
            return;
        }
    }
    ctx->pc = 0x37EDE0u;
    // 0x37ede0: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x37EDE0u;
    ctx->pc = 0x37EDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EDE0u;
    // 0x37ede4: 0x1e0bdde  .word       0x01E0BDDE                   # ddiv        $s7, $t7, $zero # 000005C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37EDE4 raw=0x01E0BDDE");
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x37EDE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37EDE8u;
    // 0x37ede8: 0x12080806  beq         $s0, $t0, . + 4 + (0x806 << 2)
    ctx->pc = 0x37EDE8u;
    {
        const bool branch_taken_0x37ede8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x37EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EDE8u;
        // 0x37edec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ede8) {
            ctx->pc = 0x380E04u;
            return;
        }
    }
    ctx->pc = 0x37EDF0u;
    // 0x37edf0: 0x1f80045  .word       0x01F80045                   # INVALID     $t7, $t8, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37edf0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x37EDF0 raw=0x01F80045");
    // 0x37edf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37edf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37edf8: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
    ctx->pc = 0x37EDF8u;
    {
        const bool branch_taken_0x37edf8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x37edf8) {
            ctx->pc = 0x37EDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37EDF8u;
            // 0x37edfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38EE04u;
            return;
        }
    }
    ctx->pc = 0x37EE00u;
    // 0x37ee00: 0x1f90037  .word       0x01F90037                   # INVALID     $t7, $t9, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x37EE00 raw=0x01F90037");
    // 0x37ee04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ee04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ee08: 0x10010006  beq         $zero, $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x37EE08u;
    {
        const bool branch_taken_0x37ee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x37EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EE08u;
        // 0x37ee0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ee08) {
            ctx->pc = 0x37EE24u;
            goto label_37ee24;
        }
    }
    ctx->pc = 0x37EE10u;
    // 0x37ee10: 0x80011870  lb          $at, 0x1870($zero)
    ctx->pc = 0x37ee10u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x1870u));
    // 0x37ee14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ee14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ee18: 0x12010801  beq         $s0, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x37EE18u;
    {
        const bool branch_taken_0x37ee18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x37EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EE18u;
        // 0x37ee1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ee18) {
            ctx->pc = 0x380E20u;
            return;
        }
    }
    ctx->pc = 0x37EE20u;
    // 0x37ee20: 0x80000170  lb          $zero, 0x170($zero)
    ctx->pc = 0x37ee20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x170u));
label_37ee24:
    // 0x37ee24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ee24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ee28: 0x102607ff  beq         $at, $a2, . + 4 + (0x7FF << 2)
    ctx->pc = 0x37EE28u;
    {
        const bool branch_taken_0x37ee28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 6));
        ctx->pc = 0x37EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EE28u;
        // 0x37ee2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ee28) {
            ctx->pc = 0x380E28u;
            return;
        }
    }
    ctx->pc = 0x37EE30u;
    // 0x37ee30: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37ee30u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37ee34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ee34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ee38: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37ee38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37ee3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ee3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ee40: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37ee40u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37ee44: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37ee48: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37ee48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37ee4c: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37ee50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ee50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ee54: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee54u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37ee58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ee58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ee5c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EE5C raw=0x01E3E8BD");
    // 0x37ee60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ee60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ee64: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee64u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37ee68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ee68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ee6c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee6cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37ee70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ee70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ee74: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37ee78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ee78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ee7c: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EE7C raw=0x01C4B0BD");
    // 0x37ee80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ee80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ee84: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee84u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x37ee88: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37ee88u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37ee8c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37ee90: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37ee90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37ee94: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37ee98: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x37ee98u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
    // 0x37ee9c: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ee9cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37eea0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eea0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eea4: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eea4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37eea8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eea8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eeac: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eeacu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37eeb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eeb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eeb4: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eeb4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37eeb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eeb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eebc: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eebcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EEBC raw=0x01E3E8BD");
    // 0x37eec0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eec0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eec4: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eec4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37eec8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eec8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eecc: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eeccu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37eed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eed4: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eed4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37eed8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eed8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eedc: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eedcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EEDC raw=0x01C4B0BD");
    // 0x37eee0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37eee0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37eee4: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eee4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x37eee8: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37eee8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37eeec: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eeecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37eef0: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37eef0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37eef4: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37eef8: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37eef8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37eefc: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eefcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
label_37ef00:
    // 0x37ef00: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37ef00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37ef04: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef04u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x37ef08: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37ef08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37ef0c: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef0cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37ef10: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x37ef10u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
    // 0x37ef14: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef14u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37ef18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ef18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ef1c: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef1cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37ef20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ef20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ef24: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef24u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37ef28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ef28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ef2c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EF2C raw=0x01E3E8BD");
    // 0x37ef30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ef30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ef34: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef34u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37ef38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ef38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ef3c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef3cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37ef40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ef40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ef44: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef44u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37ef48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ef48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ef4c: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EF4C raw=0x01C4B0BD");
    // 0x37ef50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37ef50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37ef54: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef54u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x37ef58: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37ef58u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37ef5c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37ef60: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37ef60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37ef64: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37ef68: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37ef68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37ef6c: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef6cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x37ef70: 0xa2717fb  j           func_89C5FEC
    ctx->pc = 0x37EF70u;
    ctx->pc = 0x37EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EF70u;
    // 0x37ef74: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FECu, 0x37EF70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37EF78u;
    // 0x37ef78: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37ef78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37ef7c: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef7cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37ef80: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37ef80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37ef84: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef84u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37ef88: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37ef88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37ef8c: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef8cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37ef90: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37ef90u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37ef94: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef94u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37ef98: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37ef98u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37ef9c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ef9cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EF9C raw=0x01E3E8BD");
    // 0x37efa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37efa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37efa4: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37efa4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37efa8: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x37efa8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
    // 0x37efac: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37efacu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37efb0: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37efb0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37efb4: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37efb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37efb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37efb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37efbc: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37efbcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37efc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37efc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37efc4: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37efc4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37EFC4 raw=0x01C4B0BD");
    // 0x37efc8: 0x52011ff3  beql        $s0, $at, . + 4 + (0x1FF3 << 2)
    ctx->pc = 0x37EFC8u;
    {
        const bool branch_taken_0x37efc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x37efc8) {
            ctx->pc = 0x37EFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37EFC8u;
            // 0x37efcc: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386F98u;
            return;
        }
    }
    ctx->pc = 0x37EFD0u;
    // 0x37efd0: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37efd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37efd4: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37efd8: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37efd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37efdc: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37efdcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x37efe0: 0xa2717fb  j           func_89C5FEC
    ctx->pc = 0x37EFE0u;
    ctx->pc = 0x37EFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EFE0u;
    // 0x37efe4: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FECu, 0x37EFE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37EFE8u;
    // 0x37efe8: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37efe8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37efec: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37efecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37eff0: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37eff0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37eff4: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37eff4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37eff8: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37eff8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37effc: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37effcu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37f000: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37f000u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37f004: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f004u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37f008: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37f008u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37f00c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f00cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37F00C raw=0x01E3E8BD");
    // 0x37f010: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f010u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f014: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f014u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37f018: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x37f018u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
    // 0x37f01c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f01cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37f020: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f020u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f024: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f024u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37f028: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f028u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f02c: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f02cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37F02C raw=0x01C4B0BD");
    // 0x37f030: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f030u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f034: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f034u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
    // 0x37f038: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f038u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f03c: 0x1e3093c  .word       0x01E3093C                   # dsll32      $at, $v1, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f03cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37f040: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f040u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f044: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37f048: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37f048u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37f04c: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f04cu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x37f050: 0xa2717fc  j           func_89C5FF0
    ctx->pc = 0x37F050u;
    ctx->pc = 0x37F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F050u;
    // 0x37f054: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF0u, 0x37F050u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37F058u;
    // 0x37f058: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37f058u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37f05c: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f05cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37f060: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37f060u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37f064: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f064u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37f068: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37f068u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37f06c: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f06cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37f070: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37f070u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37f074: 0x1e3e1bc  .word       0x01E3E1BC                   # dsll32      $gp, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f074u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37f078: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37f078u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37f07c: 0x1e3e8bd  .word       0x01E3E8BD                   # INVALID     $t7, $v1, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f07cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37F07C raw=0x01E3E8BD");
    // 0x37f080: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f080u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f084: 0x1e3f0be  .word       0x01E3F0BE                   # dsrl32      $fp, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f084u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37f088: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x37f088u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
label_37f08c:
    // 0x37f08c: 0x1e0f94b  .word       0x01E0F94B                   # movn        $ra, $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f08cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37f090: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37f090u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37f094: 0x1c4a9bc  .word       0x01C4A9BC                   # dsll32      $s5, $a0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f094u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37f098: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37f098u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37f09c: 0x1c4b0bd  .word       0x01C4B0BD                   # INVALID     $t6, $a0, -0x4F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f09cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37F09C raw=0x01C4B0BD");
    // 0x37f0a0: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37f0a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37f0a4: 0x1c4b98a  .word       0x01C4B98A                   # movz        $s7, $t6, $a0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f0a4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 14));
label_37f0a8:
    // 0x37f0a8: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37f0a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_37f0ac:
    // 0x37f0ac: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f0acu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x37f0b0: 0xa2717fd  j           func_89C5FF4
    ctx->pc = 0x37F0B0u;
    ctx->pc = 0x37F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F0B0u;
    // 0x37f0b4: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF4u, 0x37F0B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37F0B8u;
    // 0x37f0b8: 0x81e72b3c  lb          $a3, 0x2B3C($t7)
    ctx->pc = 0x37f0b8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 11068)));
    // 0x37f0bc: 0x1f82a2a  .word       0x01F82A2A                   # slt         $a1, $t7, $t8 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f0bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x37f0c0: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37f0c0u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37f0c4: 0x1c0325b  .word       0x01C0325B                   # divu        $a2, $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f0c4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37f0c8: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37f0c8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37f0cc: 0x202a5b  .word       0x00202A5B                   # divu        $a1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f0ccu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 1) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,1); } }
    // 0x37f0d0: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37f0d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37f0d4: 0x1c741ff  .word       0x01C741FF                   # dsra32      $t0, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f0d4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 7) >> (32 + 7));
    // 0x37f0d8: 0xa2717fe  j           func_89C5FF8
    ctx->pc = 0x37F0D8u;
    ctx->pc = 0x37F0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F0D8u;
    // 0x37f0dc: 0x1c739ff  .word       0x01C739FF                   # dsra32      $a3, $a3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FF8u, 0x37F0D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37F0E0u;
    // 0x37f0e0: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37f0e0u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37f0e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f0e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f0e8: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37f0e8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37f0ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f0ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f0f0: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37f0f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37f0f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f0f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f0f8: 0x81e4cb7d  lb          $a0, -0x3483($t7)
    ctx->pc = 0x37f0f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
    // 0x37f0fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f0fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f100: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37f100u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37f104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f108: 0x38070000  xori        $a3, $zero, 0x0
    ctx->pc = 0x37f108u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
    // 0x37f10c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f10cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f110: 0xa2717ff  j           func_89C5FFC
    ctx->pc = 0x37F110u;
    ctx->pc = 0x37F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F110u;
    // 0x37f114: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C5FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C5FFCu, 0x37F110u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37F118u;
    // 0x37f118: 0x80072975  lb          $a3, 0x2975($zero)
    ctx->pc = 0x37f118u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x2975u));
    // 0x37f11c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f11cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f120: 0x800731b4  lb          $a3, 0x31B4($zero)
    ctx->pc = 0x37f120u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x31B4u));
    // 0x37f124: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f124u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f128: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37f128u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37F128 raw=0x48007800");
    // 0x37f12c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f12cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f134: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f134u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f138: 0x0  nop
    ctx->pc = 0x37f138u;
    // NOP
    // 0x37f13c: 0x0  nop
    ctx->pc = 0x37f13cu;
    // NOP
    // 0x37f140: 0x1df0021  addu        $zero, $t6, $ra
    ctx->pc = 0x37f140u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 31)));
    // 0x37f144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f148: 0x3e0038  .word       0x003E0038                   # dsll        $zero, $fp, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f148u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 30) << 0);
    // 0x37f14c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f14cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f150: 0x8440fff  j           func_1103FFC
    ctx->pc = 0x37F150u;
    ctx->pc = 0x37F154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F150u;
    // 0x37f154: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103FFCu, 0x37F150u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37F158u;
    // 0x37f158: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x37f158u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x37f15c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f15cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f160: 0x1f9002e  dsub        $zero, $t7, $t9
    ctx->pc = 0x37f160u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 25); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x37f164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f168: 0x1fa002f  dsubu       $zero, $t7, $k0
    ctx->pc = 0x37f168u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 15) - GPR_U64(ctx, 26));
    // 0x37f16c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f16cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f170: 0x81fc0b7c  lb          $gp, 0xB7C($t7)
    ctx->pc = 0x37f170u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37f174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f178: 0x81fd0b7c  lb          $sp, 0xB7C($t7)
    ctx->pc = 0x37f178u;
    SET_GPR_S32(ctx, 29, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37f17c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f17cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f180: 0xbf800000  cache       0x00, 0x0($gp)
    ctx->pc = 0x37f180u;
    // CACHE instruction (ignored)
    // 0x37f184: 0x81dce13c  lb          $gp, -0x1EC4($t6)
    ctx->pc = 0x37f184u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294959420)));
    // 0x37f188: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f188u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f18c: 0x1dde93c  .word       0x01DDE93C                   # dsll32      $sp, $sp, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f18cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 29) << (32 + 4));
    // 0x37f190: 0x11ed07f0  beq         $t7, $t5, . + 4 + (0x7F0 << 2)
    ctx->pc = 0x37F190u;
    {
        const bool branch_taken_0x37f190 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 13));
        ctx->pc = 0x37F194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F190u;
        // 0x37f194: 0x1dccabe  .word       0x01DCCABE                   # dsrl32      $t9, $gp, 10 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 28) >> (32 + 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f190) {
            ctx->pc = 0x381154u;
            return;
        }
    }
    ctx->pc = 0x37F198u;
    // 0x37f198: 0x11eb07ff  beq         $t7, $t3, . + 4 + (0x7FF << 2)
    ctx->pc = 0x37F198u;
    {
        const bool branch_taken_0x37f198 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x37F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F198u;
        // 0x37f19c: 0x1c0d70b  .word       0x01C0D70B                   # movn        $k0, $t6, $zero # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f198) {
            ctx->pc = 0x381198u;
            return;
        }
    }
    ctx->pc = 0x37F1A0u;
    // 0x37f1a0: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
    ctx->pc = 0x37F1A0u;
    {
        const bool branch_taken_0x37f1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x37F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1A0u;
        // 0x37f1a4: 0x1ddcabe  .word       0x01DDCABE                   # dsrl32      $t9, $sp, 10 # 01C00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 29) >> (32 + 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f1a0) {
            ctx->pc = 0x3951A8u;
            return;
        }
    }
    ctx->pc = 0x37F1A8u;
    // 0x37f1a8: 0x100c0010  beq         $zero, $t4, . + 4 + (0x10 << 2)
    ctx->pc = 0x37F1A8u;
    {
        const bool branch_taken_0x37f1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x37F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1A8u;
        // 0x37f1ac: 0x1c0d74b  .word       0x01C0D74B                   # movn        $k0, $t6, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f1a8) {
            ctx->pc = 0x37F1ECu;
            goto label_37f1ec;
        }
    }
    ctx->pc = 0x37F1B0u;
    // 0x37f1b0: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x37f1b0u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x37f1b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f1b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f1b8: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x37f1b8u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x37f1bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f1bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f1c0: 0x81c10b7c  lb          $at, 0xB7C($t6)
    ctx->pc = 0x37f1c0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 2940)));
    // 0x37f1c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f1c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f1c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f1c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f1cc: 0x1e2093c  .word       0x01E2093C                   # dsll32      $at, $v0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f1ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
    // 0x37f1d0: 0x81fbe33c  lb          $k1, -0x1CC4($t7)
    ctx->pc = 0x37f1d0u;
    SET_GPR_S32(ctx, 27, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959932)));
    // 0x37f1d4: 0x1c2cabe  .word       0x01C2CABE                   # dsrl32      $t9, $v0, 10 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f1d4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) >> (32 + 10));
    // 0x37f1d8: 0x81fceb3c  lb          $gp, -0x14C4($t7)
    ctx->pc = 0x37f1d8u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294961980)));
    // 0x37f1dc: 0x1c0d74b  .word       0x01C0D74B                   # movn        $k0, $t6, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f1dcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 14));
    // 0x37f1e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f1e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f1e4: 0x1dcd8ec  .word       0x01DCD8EC                   # dadd        $k1, $t6, $gp # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f1e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
    // 0x37f1e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f1e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37f1ec:
    // 0x37f1ec: 0x1dce92c  .word       0x01DCE92C                   # dadd        $sp, $t6, $gp # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f1ecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
    // 0x37f1f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f1f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f1f4: 0x1dcf96c  .word       0x01DCF96C                   # dadd        $ra, $t6, $gp # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f1f4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 28); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
    // 0x37f1f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f1f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f1fc: 0x1c41afe  .word       0x01C41AFE                   # dsrl32      $v1, $a0, 11 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> (32 + 11));
    // 0x37f200: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f200u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f204: 0x1c321ae  .word       0x01C321AE                   # dsub        $a0, $t6, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f204u;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
    // 0x37f208: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f208u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f20c: 0x1de29db  .word       0x01DE29DB                   # divu        $a1, $t6, $fp # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f20cu;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37f210: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f210u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f214: 0x1c63a2a  .word       0x01C63A2A                   # slt         $a3, $t6, $a2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f214u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x37f218: 0x8251000  j           func_944000
    ctx->pc = 0x37F218u;
    ctx->pc = 0x37F21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F218u;
    // 0x37f21c: 0x2801bc  .word       0x002801BC                   # dsll32      $zero, $t0, 6 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x944000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x944000u, 0x37F218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37F220u;
    // 0x37f220: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f220u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f224: 0x2800bd  .word       0x002800BD                   # INVALID     $at, $t0, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f224u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37F224 raw=0x002800BD");
    // 0x37f228: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f22c: 0x28024a  .word       0x0028024A                   # movz        $zero, $at, $t0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f22cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 1));
    // 0x37f230: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f230u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f238: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f238u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f23c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f23cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f240: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f240u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f248: 0x34066000  ori         $a2, $zero, 0x6000
    ctx->pc = 0x37f248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)24576);
    // 0x37f24c: 0x20f79e  .word       0x0020F79E                   # ddiv        $fp, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f24cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37F24C raw=0x0020F79E");
    // 0x37f250: 0x800d31b0  lb          $t5, 0x31B0($zero)
    ctx->pc = 0x37f250u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x31B0u));
    // 0x37f254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f258: 0x800b31b4  lb          $t3, 0x31B4($zero)
    ctx->pc = 0x37f258u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x31B4u));
    // 0x37f25c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f25cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f260: 0x800629f5  lb          $a2, 0x29F5($zero)
    ctx->pc = 0x37f260u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x29F5u));
    // 0x37f264: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f264u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f268: 0xa271000  j           func_89C4000
    ctx->pc = 0x37F268u;
    ctx->pc = 0x37F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F268u;
    // 0x37f26c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x89C4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x89C4000u, 0x37F268u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37F270u;
    // 0x37f270: 0x52040fe9  beql        $s0, $a0, . + 4 + (0xFE9 << 2)
    ctx->pc = 0x37F270u;
    {
        const bool branch_taken_0x37f270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x37f270) {
            ctx->pc = 0x37F274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F270u;
            // 0x37f274: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383218u;
            return;
        }
    }
    ctx->pc = 0x37F278u;
    // 0x37f278: 0x800310b0  lb          $v1, 0x10B0($zero)
    ctx->pc = 0x37f278u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x10B0u));
    // 0x37f27c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f27cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f280: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37f280u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37F280 raw=0x48007800");
    // 0x37f284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f288: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f288u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f28c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f28cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x37f290u;
}
