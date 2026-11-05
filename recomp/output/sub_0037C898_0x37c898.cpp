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

// Function: sub_0037C898
// Address: 0x37c898 - 0x37c9d8
void sub_0037C898_0x37c898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C898_0x37c898");
#endif

    ctx->pc = 0x37c898u;

    // 0x37c898: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x37c898u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x37c89c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c89cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c8a0: 0x9020800  j           func_4082000
    ctx->pc = 0x37C8A0u;
    ctx->pc = 0x37C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C8A0u;
    // 0x37c8a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4082000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4082000u, 0x37C8A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37C8A8u;
    // 0x37c8a8: 0x8430800  j           func_10C2000
    ctx->pc = 0x37C8A8u;
    ctx->pc = 0x37C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C8A8u;
    // 0x37c8ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C2000u, 0x37C8A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37C8B0u;
    // 0x37c8b0: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37c8b0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c8b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c8b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c8b8: 0x81e30b7d  lb          $v1, 0xB7D($t7)
    ctx->pc = 0x37c8b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2941)));
    // 0x37c8bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c8bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c8c0: 0x80030130  lb          $v1, 0x130($zero)
    ctx->pc = 0x37c8c0u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x130u));
    // 0x37c8c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c8c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c8c8: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37c8c8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37c8cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c8ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c8d0: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37c8d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37c8d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c8d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c8d8: 0x800208b0  lb          $v0, 0x8B0($zero)
    ctx->pc = 0x37c8d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x8B0u));
    // 0x37c8dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c8dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c8e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c8e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c8e4: 0x1e00258  .word       0x01E00258                   # mult        $zero, $t7, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37c8e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37c8e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c8e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c8ec: 0x1e00298  .word       0x01E00298                   # mult        $zero, $t7, $zero # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37c8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37c8f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c8f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c8f4: 0x1e002d8  .word       0x01E002D8                   # mult        $zero, $t7, $zero # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37c8f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37c8f8: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37c8f8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c8fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c8fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c900: 0x81e20b7c  lb          $v0, 0xB7C($t7)
    ctx->pc = 0x37c900u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c904: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c904u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c908: 0x81e30b7c  lb          $v1, 0xB7C($t7)
    ctx->pc = 0x37c908u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c90c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c90cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c910: 0x81e40b7c  lb          $a0, 0xB7C($t7)
    ctx->pc = 0x37c910u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c918: 0x81e51b7c  lb          $a1, 0x1B7C($t7)
    ctx->pc = 0x37c918u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37c91c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c91cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c920: 0x81e61b7c  lb          $a2, 0x1B7C($t7)
    ctx->pc = 0x37c920u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37c924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c928: 0x81e71b7c  lb          $a3, 0x1B7C($t7)
    ctx->pc = 0x37c928u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37c92c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c92cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c930: 0x81e81b7c  lb          $t0, 0x1B7C($t7)
    ctx->pc = 0x37c930u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37c934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c938: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c938u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c93c: 0x1c129bc  .word       0x01C129BC                   # dsll32      $a1, $at, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c93cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37c940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c944: 0x1c130bd  .word       0x01C130BD                   # INVALID     $t6, $at, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c944u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C944 raw=0x01C130BD");
    // 0x37c948: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c948u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c94c: 0x1c13a4a  .word       0x01C13A4A                   # movz        $a3, $t6, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c94cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 14));
    // 0x37c950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c954: 0x1c229bc  .word       0x01C229BC                   # dsll32      $a1, $v0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37c958: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c958u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c95c: 0x1c230bd  .word       0x01C230BD                   # INVALID     $t6, $v0, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c95cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C95C raw=0x01C230BD");
    // 0x37c960: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c960u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c964: 0x1c23a8a  .word       0x01C23A8A                   # movz        $a3, $t6, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c964u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 14));
    // 0x37c968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c96c: 0x1c329bc  .word       0x01C329BC                   # dsll32      $a1, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c96cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37c970: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c970u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c974: 0x1c330bd  .word       0x01C330BD                   # INVALID     $t6, $v1, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c974u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C974 raw=0x01C330BD");
    // 0x37c978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c97c: 0x1c33aca  .word       0x01C33ACA                   # movz        $a3, $t6, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c97cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 14));
    // 0x37c980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c984: 0x1e429bc  .word       0x01E429BC                   # dsll32      $a1, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37c988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c98c: 0x1e430bd  .word       0x01E430BD                   # INVALID     $t7, $a0, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c98cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C98C raw=0x01E430BD");
    // 0x37c990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c994: 0x1e438be  .word       0x01E438BE                   # dsrl32      $a3, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c994u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) >> (32 + 2));
    // 0x37c998: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c998u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c99c: 0x1e4430b  .word       0x01E4430B                   # movn        $t0, $t7, $a0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c99cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
    // 0x37c9a0: 0x81e44b7d  lb          $a0, 0x4B7D($t7)
    ctx->pc = 0x37c9a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 19325)));
    // 0x37c9a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c9a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c9a8: 0x81e4537d  lb          $a0, 0x537D($t7)
    ctx->pc = 0x37c9a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 21373)));
    // 0x37c9ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c9acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c9b0: 0x81e45b7d  lb          $a0, 0x5B7D($t7)
    ctx->pc = 0x37c9b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 23421)));
    // 0x37c9b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c9b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c9b8: 0x52020fe7  beql        $s0, $v0, . + 4 + (0xFE7 << 2)
    ctx->pc = 0x37C9B8u;
    {
        const bool branch_taken_0x37c9b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x37c9b8) {
            ctx->pc = 0x37C9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C9B8u;
            // 0x37c9bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380958u;
            return;
        }
    }
    ctx->pc = 0x37C9C0u;
    // 0x37c9c0: 0x81e4637d  lb          $a0, 0x637D($t7)
    ctx->pc = 0x37c9c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 25469)));
    // 0x37c9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c9c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c9c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c9cc: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x37c9ccu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x37c9d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c9d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c9d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c9d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x37c9d8u;
}
