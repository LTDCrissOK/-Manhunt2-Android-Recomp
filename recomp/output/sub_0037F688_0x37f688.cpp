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

// Function: sub_0037F688
// Address: 0x37f688 - 0x37f780
void sub_0037F688_0x37f688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F688_0x37f688");
#endif

    switch (ctx->pc) {
        case 0x37f690u: goto label_37f690;
        default: break;
    }

    ctx->pc = 0x37f688u;

    // 0x37f688: 0x1001780c  beq         $zero, $at, . + 4 + (0x780C << 2)
    ctx->pc = 0x37F688u;
    {
        const bool branch_taken_0x37f688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x37F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F688u;
        // 0x37f68c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f688) {
            ctx->pc = 0x39D6BCu;
            return;
        }
    }
    ctx->pc = 0x37F690u;
label_37f690:
    // 0x37f690: 0x10027818  beq         $zero, $v0, . + 4 + (0x7818 << 2)
    ctx->pc = 0x37F690u;
    {
        const bool branch_taken_0x37f690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F690u;
        // 0x37f694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f690) {
            ctx->pc = 0x39D6F4u;
            return;
        }
    }
    ctx->pc = 0x37F698u;
    // 0x37f698: 0x10030003  beq         $zero, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37F698u;
    {
        const bool branch_taken_0x37f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x37F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F698u;
        // 0x37f69c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f698) {
            ctx->pc = 0x37F6A8u;
            goto label_37f6a8;
        }
    }
    ctx->pc = 0x37F6A0u;
    // 0x37f6a0: 0x81e50b7c  lb          $a1, 0xB7C($t7)
    ctx->pc = 0x37f6a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37f6a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f6a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37f6a8:
    // 0x37f6a8: 0x81e60b7c  lb          $a2, 0xB7C($t7)
    ctx->pc = 0x37f6a8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37f6ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f6acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f6b0: 0x81e70b7c  lb          $a3, 0xB7C($t7)
    ctx->pc = 0x37f6b0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37f6b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f6b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f6b8: 0x81e80b7c  lb          $t0, 0xB7C($t7)
    ctx->pc = 0x37f6b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37f6bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f6bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f6c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f6c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f6c4: 0x1e129bc  .word       0x01E129BC                   # dsll32      $a1, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f6c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37f6c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f6c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f6cc: 0x1e130bd  .word       0x01E130BD                   # INVALID     $t7, $at, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f6ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37F6CC raw=0x01E130BD");
    // 0x37f6d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f6d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f6d4: 0x1e138be  .word       0x01E138BE                   # dsrl32      $a3, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f6d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37f6d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f6d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f6dc: 0x1e1434b  .word       0x01E1434B                   # movn        $t0, $t7, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f6dcu;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
    // 0x37f6e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f6e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f6e4: 0x1e229bc  .word       0x01E229BC                   # dsll32      $a1, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f6e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37f6e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f6e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f6ec: 0x1e230bd  .word       0x01E230BD                   # INVALID     $t7, $v0, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f6ecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37F6EC raw=0x01E230BD");
    // 0x37f6f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f6f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f6f4: 0x1e238be  .word       0x01E238BE                   # dsrl32      $a3, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f6f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x37f6f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f6f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f6fc: 0x1e2438b  .word       0x01E2438B                   # movn        $t0, $t7, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f6fcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
    // 0x37f700: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f700u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f704: 0x1e329bc  .word       0x01E329BC                   # dsll32      $a1, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37f708: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f708u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f70c: 0x1e330bd  .word       0x01E330BD                   # INVALID     $t7, $v1, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f70cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37F70C raw=0x01E330BD");
    // 0x37f710: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f710u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f714: 0x1e338be  .word       0x01E338BE                   # dsrl32      $a3, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f714u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x37f718: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f718u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f71c: 0x1e343cb  .word       0x01E343CB                   # movn        $t0, $t7, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f71cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
    // 0x37f720: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f720u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f724: 0x1e429bc  .word       0x01E429BC                   # dsll32      $a1, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 6));
    // 0x37f728: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f728u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f72c: 0x1e430bd  .word       0x01E430BD                   # INVALID     $t7, $a0, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f72cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37F72C raw=0x01E430BD");
    // 0x37f730: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f730u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f734: 0x1e438be  .word       0x01E438BE                   # dsrl32      $a3, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f734u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) >> (32 + 2));
    // 0x37f738: 0x12031801  beq         $s0, $v1, . + 4 + (0x1801 << 2)
    ctx->pc = 0x37F738u;
    {
        const bool branch_taken_0x37f738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x37F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F738u;
        // 0x37f73c: 0x1e4440b  .word       0x01E4440B                   # movn        $t0, $t7, $a0 # 00000400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f738) {
            ctx->pc = 0x385740u;
            return;
        }
    }
    ctx->pc = 0x37F740u;
    // 0x37f740: 0x81e26b7d  lb          $v0, 0x6B7D($t7)
    ctx->pc = 0x37f740u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 27517)));
    // 0x37f744: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f744u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f748: 0x81e2737d  lb          $v0, 0x737D($t7)
    ctx->pc = 0x37f748u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29565)));
    // 0x37f74c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f74cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f750: 0x81e27b7d  lb          $v0, 0x7B7D($t7)
    ctx->pc = 0x37f750u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 31613)));
    // 0x37f754: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f754u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f758: 0x520307e8  beql        $s0, $v1, . + 4 + (0x7E8 << 2)
    ctx->pc = 0x37F758u;
    {
        const bool branch_taken_0x37f758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x37f758) {
            ctx->pc = 0x37F75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F758u;
            // 0x37f75c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3816FCu;
            return;
        }
    }
    ctx->pc = 0x37F760u;
    // 0x37f760: 0x81e2837d  lb          $v0, -0x7C83($t7)
    ctx->pc = 0x37f760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935421)));
    // 0x37f764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f768: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f768u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f76c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x37f76cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x37f770: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f770u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37f774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37f778: 0x0  nop
    ctx->pc = 0x37f778u;
    // NOP
    // 0x37f77c: 0x0  nop
    ctx->pc = 0x37f77cu;
    // NOP
    ctx->pc = 0x37f780u;
}
