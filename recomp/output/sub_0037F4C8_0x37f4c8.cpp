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

// Function: sub_0037F4C8
// Address: 0x37f4c8 - 0x37f600
void sub_0037F4C8_0x37f4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F4C8_0x37f4c8");
#endif

    ctx->pc = 0x37f4c8u;

    // 0x37f4c8: 0x10047818  beq         $zero, $a0, . + 4 + (0x7818 << 2)
    ctx->pc = 0x37F4C8u;
    {
        const bool branch_taken_0x37f4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F4C8u;
        // 0x37f4cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f4c8) {
            ctx->pc = 0x39D52Cu;
            return;
        }
    }
    ctx->pc = 0x37F4D0u;
    // 0x37f4d0: 0x80000070  lb          $zero, 0x70($zero)
    ctx->pc = 0x37f4d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x70u));
    // 0x37f4d4: 0x1e007d8  .word       0x01E007D8                   # mult        $zero, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37f4d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37f4d8: 0x800000b0  lb          $zero, 0xB0($zero)
    ctx->pc = 0x37f4d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xB0u));
    // 0x37f4dc: 0x1c110ac  .word       0x01C110AC                   # dadd        $v0, $t6, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f4dcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
    // 0x37f4e0: 0x10030003  beq         $zero, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F4E0u;
    {
        const bool branch_taken_0x37f4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x37F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F4E0u;
        // 0x37f4e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f4e0) {
            ctx->pc = 0x37F4F0u;
            goto label_37f4f0;
        }
    }
    ctx->pc = 0x37F4E8u;
    // 0x37f4e8: 0x100500f0  beq         $zero, $a1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x37F4E8u;
    {
        const bool branch_taken_0x37f4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x37F4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F4E8u;
        // 0x37f4ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f4e8) {
            ctx->pc = 0x37F8ACu;
            return;
        }
    }
    ctx->pc = 0x37F4F0u;
label_37f4f0:
    // 0x37f4f0: 0x81e3237c  lb          $v1, 0x237C($t7)
    ctx->pc = 0x37f4f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f4f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f4f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f4f8: 0x81e4237c  lb          $a0, 0x237C($t7)
    ctx->pc = 0x37f4f8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f4fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f4fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f500: 0x81e5237c  lb          $a1, 0x237C($t7)
    ctx->pc = 0x37f500u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f504: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f504u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f508: 0x81e6237c  lb          $a2, 0x237C($t7)
    ctx->pc = 0x37f508u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f50c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f50cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f510: 0x80010870  lb          $at, 0x870($zero)
    ctx->pc = 0x37f510u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x870u));
    // 0x37f514: 0x1e119bc  .word       0x01E119BC                   # dsll32      $v1, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37f518: 0x80010870  lb          $at, 0x870($zero)
    ctx->pc = 0x37f518u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x870u));
    // 0x37f51c: 0x1e120bd  .word       0x01E120BD                   # INVALID     $t7, $at, 0x20BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f51cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37F51C raw=0x01E120BD");
    // 0x37f520: 0x80010870  lb          $at, 0x870($zero)
    ctx->pc = 0x37f520u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x870u));
    // 0x37f524: 0x1e128be  .word       0x01E128BE                   # dsrl32      $a1, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37f528: 0x80010870  lb          $at, 0x870($zero)
    ctx->pc = 0x37f528u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x870u));
    // 0x37f52c: 0x1e031cb  .word       0x01E031CB                   # movn        $a2, $t7, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f52cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 15));
    // 0x37f530: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37f530u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37f534: 0x1e21a18  .word       0x01E21A18                   # mult        $v1, $t7, $v0 # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37f534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37f538: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37f538u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37f53c: 0x1e22259  .word       0x01E22259                   # multu       $t7, $v0 # 00002240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f53cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x37f540: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37f540u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37f544: 0x1e22a9a  .word       0x01E22A9A                   # div         $a1, $t7, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f544u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37f548: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37f548u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37f54c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f54cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f554: 0x1ff42ef  .word       0x01FF42EF                   # dsubu       $t0, $t7, $ra # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f554u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 15) - GPR_U64(ctx, 31));
    // 0x37f558: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f558u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f55c: 0x1ff4b2f  .word       0x01FF4B2F                   # dsubu       $t1, $t7, $ra # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f55cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) - GPR_U64(ctx, 31));
    // 0x37f560: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f560u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f564: 0x1ff536f  .word       0x01FF536F                   # dsubu       $t2, $t7, $ra # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f564u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) - GPR_U64(ctx, 31));
    // 0x37f568: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f568u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f56c: 0x1ff43ab  .word       0x01FF43AB                   # sltu        $t0, $t7, $ra # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f56cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 31)) ? 1 : 0);
    // 0x37f570: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f570u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f574: 0x1ff4beb  .word       0x01FF4BEB                   # sltu        $t1, $t7, $ra # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f574u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 31)) ? 1 : 0);
    // 0x37f578: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f578u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f57c: 0x1ff542b  .word       0x01FF542B                   # sltu        $t2, $t7, $ra # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f57cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 31)) ? 1 : 0);
    // 0x37f580: 0x81e3237c  lb          $v1, 0x237C($t7)
    ctx->pc = 0x37f580u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f584: 0x1e039bf  .word       0x01E039BF                   # dsra32      $a3, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f584u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 6));
    // 0x37f588: 0x81e4237c  lb          $a0, 0x237C($t7)
    ctx->pc = 0x37f588u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f58c: 0x1e058bf  .word       0x01E058BF                   # dsra32      $t3, $zero, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f58cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 0) >> (32 + 2));
    // 0x37f590: 0x81e5237c  lb          $a1, 0x237C($t7)
    ctx->pc = 0x37f590u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f594: 0x1e060bf  .word       0x01E060BF                   # dsra32      $t4, $zero, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f594u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (32 + 2));
    // 0x37f598: 0x81e6237c  lb          $a2, 0x237C($t7)
    ctx->pc = 0x37f598u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37f59c: 0x1e06c4b  .word       0x01E06C4B                   # movn        $t5, $t7, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f59cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 15));
    // 0x37f5a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f5a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f5a4: 0x1e039bf  .word       0x01E039BF                   # dsra32      $a3, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f5a4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 6));
    // 0x37f5a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f5a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f5ac: 0x1e070bf  .word       0x01E070BF                   # dsra32      $t6, $zero, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f5acu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (32 + 2));
    // 0x37f5b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f5b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f5b4: 0x1e078bf  .word       0x01E078BF                   # dsra32      $t7, $zero, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f5b4u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 0) >> (32 + 2));
    // 0x37f5b8: 0x34062800  ori         $a2, $zero, 0x2800
    ctx->pc = 0x37f5b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)10240);
    // 0x37f5bc: 0x1e0848b  .word       0x01E0848B                   # movn        $s0, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f5bcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
    // 0x37f5c0: 0x80060875  lb          $a2, 0x875($zero)
    ctx->pc = 0x37f5c0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x875u));
    // 0x37f5c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f5c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f5c8: 0x12031801  beq         $s0, $v1, . + 4 + (0x1801 << 2)
    ctx->pc = 0x37F5C8u;
    {
        const bool branch_taken_0x37f5c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x37F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F5C8u;
        // 0x37f5cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f5c8) {
            ctx->pc = 0x3855D0u;
            return;
        }
    }
    ctx->pc = 0x37F5D0u;
    // 0x37f5d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f5d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f5d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f5d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f5d8: 0x34072800  ori         $a3, $zero, 0x2800
    ctx->pc = 0x37f5d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)10240);
    // 0x37f5dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f5dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f5e0: 0x520307e5  beql        $s0, $v1, . + 4 + (0x7E5 << 2)
    ctx->pc = 0x37F5E0u;
    {
        const bool branch_taken_0x37f5e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x37f5e0) {
            ctx->pc = 0x37F5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F5E0u;
            // 0x37f5e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381578u;
            return;
        }
    }
    ctx->pc = 0x37F5E8u;
    // 0x37f5e8: 0x800710b5  lb          $a3, 0x10B5($zero)
    ctx->pc = 0x37f5e8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x10B5u));
    // 0x37f5ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f5ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f5f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f5f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f5f4: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x37f5f4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x37f5f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f5f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f5fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f5fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x37f600u;
}
