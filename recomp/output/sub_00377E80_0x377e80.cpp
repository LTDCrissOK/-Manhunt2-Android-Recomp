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

// Function: sub_00377E80
// Address: 0x377e80 - 0x3780d8
void sub_00377E80_0x377e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377E80_0x377e80");
#endif

    ctx->pc = 0x377e80u;

    // 0x377e80: 0x10010004  beq         $zero, $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x377E80u;
    {
        const bool branch_taken_0x377e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x377E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E80u;
        // 0x377e84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e80) {
            ctx->pc = 0x377E94u;
            goto label_377e94;
        }
    }
    ctx->pc = 0x377E88u;
    // 0x377e88: 0x10020008  beq         $zero, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x377E88u;
    {
        const bool branch_taken_0x377e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x377E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E88u;
        // 0x377e8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e88) {
            ctx->pc = 0x377EACu;
            goto label_377eac;
        }
    }
    ctx->pc = 0x377E90u;
    // 0x377e90: 0x1003000c  beq         $zero, $v1, . + 4 + (0xC << 2)
label_377e94:
    if (ctx->pc == 0x377E94u) {
        ctx->pc = 0x377E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E90u;
        // 0x377e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377E98u;
        goto label_fallthrough_0x377e90;
    }
    ctx->pc = 0x377E90u;
    {
        const bool branch_taken_0x377e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x377E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377E90u;
        // 0x377e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e90) {
            ctx->pc = 0x377EC4u;
            goto label_377ec4;
        }
    }
label_fallthrough_0x377e90:
    ctx->pc = 0x377E98u;
    // 0x377e98: 0x420f0008  .word       0x420F0008                   # tlbp # 000F0000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x377e98u;
    runtime->handleTLBP(rdram, ctx);
    // 0x377e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ea0: 0x10040010  beq         $zero, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x377EA0u;
    {
        const bool branch_taken_0x377ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x377EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EA0u;
        // 0x377ea4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ea0) {
            ctx->pc = 0x377EE4u;
            goto label_377ee4;
        }
    }
    ctx->pc = 0x377EA8u;
    // 0x377ea8: 0x10010000  beq         $zero, $at, . + 4 + (0x0 << 2)
label_377eac:
    if (ctx->pc == 0x377EACu) {
        ctx->pc = 0x377EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EA8u;
        // 0x377eac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377EB0u;
        goto label_fallthrough_0x377ea8;
    }
    ctx->pc = 0x377EA8u;
    {
        const bool branch_taken_0x377ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x377EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EA8u;
        // 0x377eac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ea8) {
            ctx->pc = 0x377EACu;
            goto label_377eac;
        }
    }
label_fallthrough_0x377ea8:
    ctx->pc = 0x377EB0u;
    // 0x377eb0: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x377EB0u;
    {
        const bool branch_taken_0x377eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x377EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EB0u;
        // 0x377eb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377eb0) {
            ctx->pc = 0x377EF4u;
            goto label_377ef4;
        }
    }
    ctx->pc = 0x377EB8u;
    // 0x377eb8: 0x1003000c  beq         $zero, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x377EB8u;
    {
        const bool branch_taken_0x377eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x377EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EB8u;
        // 0x377ebc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377eb8) {
            ctx->pc = 0x377EECu;
            goto label_377eec;
        }
    }
    ctx->pc = 0x377EC0u;
    // 0x377ec0: 0x420f0003  .word       0x420F0003                   # INVALID     $s0, $t7, 0x3 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x377ec0u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x3 at 0x377EC0 raw=0x420F0003");
label_377ec4:
    // 0x377ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ec8: 0x10040018  beq         $zero, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x377EC8u;
    {
        const bool branch_taken_0x377ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x377ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377EC8u;
        // 0x377ecc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ec8) {
            ctx->pc = 0x377F2Cu;
            goto label_377f2c;
        }
    }
    ctx->pc = 0x377ED0u;
    // 0x377ed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377ed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377ed4: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x377ed4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x377ed8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377ed8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ee0: 0x1e10800  .word       0x01E10800                   # sll         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_377ee4:
    // 0x377ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ee8: 0x1e20801  .word       0x01E20801                   # INVALID     $t7, $v0, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377ee8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x377EE8 raw=0x01E20801");
label_377eec:
    // 0x377eec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377eecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ef0: 0x1e30802  .word       0x01E30802                   # srl         $at, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
label_377ef4:
    // 0x377ef4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377ef4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ef8: 0x1e40803  .word       0x01E40803                   # sra         $at, $a0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377ef8u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 4), 0));
    // 0x377efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377f00: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x377f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377f08: 0x1e61001  .word       0x01E61001                   # INVALID     $t7, $a2, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f08u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x377F08 raw=0x01E61001");
    // 0x377f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377f10: 0x1e71002  .word       0x01E71002                   # srl         $v0, $a3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
    // 0x377f14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377f14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377f18: 0x1e81003  .word       0x01E81003                   # sra         $v0, $t0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 0));
    // 0x377f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377f20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377f24: 0x1e129bc  .word       0x01E129BC                   # dsll32      $a1, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) << (32 + 6));
    // 0x377f28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_377f2c:
    // 0x377f2c: 0x1e130bd  .word       0x01E130BD                   # INVALID     $t7, $at, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x377F2C raw=0x01E130BD");
    // 0x377f30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377f34: 0x1e138be  .word       0x01E138BE                   # dsrl32      $a3, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x377f38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377f3c: 0x1e1424b  .word       0x01E1424B                   # movn        $t0, $t7, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f3cu;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
    // 0x377f40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377f44: 0x1e229bc  .word       0x01E229BC                   # dsll32      $a1, $v0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 6));
    // 0x377f48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377f4c: 0x1e230bd  .word       0x01E230BD                   # INVALID     $t7, $v0, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x377F4C raw=0x01E230BD");
    // 0x377f50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377f54: 0x1e238be  .word       0x01E238BE                   # dsrl32      $a3, $v0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x377f58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377f5c: 0x1e2428b  .word       0x01E2428B                   # movn        $t0, $t7, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
    // 0x377f60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377f64: 0x1e329bc  .word       0x01E329BC                   # dsll32      $a1, $v1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 6));
    // 0x377f68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377f6c: 0x1e330bd  .word       0x01E330BD                   # INVALID     $t7, $v1, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x377F6C raw=0x01E330BD");
    // 0x377f70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377f74: 0x1e338be  .word       0x01E338BE                   # dsrl32      $a3, $v1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x377f78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377f78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377f7c: 0x1e342cb  .word       0x01E342CB                   # movn        $t0, $t7, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f7cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
    // 0x377f80: 0x1ed1800  .word       0x01ED1800                   # sll         $v1, $t5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 0));
    // 0x377f84: 0x1e429bc  .word       0x01E429BC                   # dsll32      $a1, $a0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 6));
    // 0x377f88: 0x1ee1801  .word       0x01EE1801                   # INVALID     $t7, $t6, 0x1801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f88u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x377F88 raw=0x01EE1801");
    // 0x377f8c: 0x1e430bd  .word       0x01E430BD                   # INVALID     $t7, $a0, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f8cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x377F8C raw=0x01E430BD");
    // 0x377f90: 0x1ef1802  .word       0x01EF1802                   # srl         $v1, $t7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
    // 0x377f94: 0x1e438be  .word       0x01E438BE                   # dsrl32      $a3, $a0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) >> (32 + 2));
    // 0x377f98: 0x1f01803  .word       0x01F01803                   # sra         $v1, $s0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 0));
    // 0x377f9c: 0x1e4430b  .word       0x01E4430B                   # movn        $t0, $t7, $a0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377f9cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 15));
    // 0x377fa0: 0x3e44800  .word       0x03E44800                   # sll         $t1, $a0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x377fa4: 0x1e969bc  .word       0x01E969BC                   # dsll32      $t5, $t1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fa4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 9) << (32 + 6));
    // 0x377fa8: 0x3e45001  .word       0x03E45001                   # INVALID     $ra, $a0, 0x5001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fa8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x377FA8 raw=0x03E45001");
    // 0x377fac: 0x1e970bd  .word       0x01E970BD                   # INVALID     $t7, $t1, 0x70BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377facu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x377FAC raw=0x01E970BD");
    // 0x377fb0: 0x3e45802  .word       0x03E45802                   # srl         $t3, $a0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fb0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
    // 0x377fb4: 0x1e978be  .word       0x01E978BE                   # dsrl32      $t7, $t1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fb4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) >> (32 + 2));
    // 0x377fb8: 0x3e46003  .word       0x03E46003                   # sra         $t4, $a0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fb8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 0));
    // 0x377fbc: 0x1e9844b  .word       0x01E9844B                   # movn        $s0, $t7, $t1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fbcu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
    // 0x377fc0: 0x10042004  beq         $zero, $a0, . + 4 + (0x2004 << 2)
    ctx->pc = 0x377FC0u;
    {
        const bool branch_taken_0x377fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x377FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377FC0u;
        // 0x377fc4: 0x1ea69bc  .word       0x01EA69BC                   # dsll32      $t5, $t2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) << (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377fc0) {
            ctx->pc = 0x37FFD4u;
            return;
        }
    }
    ctx->pc = 0x377FC8u;
    // 0x377fc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377fc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377fcc: 0x1ea70bd  .word       0x01EA70BD                   # INVALID     $t7, $t2, 0x70BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x377FCC raw=0x01EA70BD");
    // 0x377fd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377fd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377fd4: 0x1ea78be  .word       0x01EA78BE                   # dsrl32      $t7, $t2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fd4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) >> (32 + 2));
    // 0x377fd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377fd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377fdc: 0x1ea848b  .word       0x01EA848B                   # movn        $s0, $t7, $t2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fdcu;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
    // 0x377fe0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377fe0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377fe4: 0x1eb69bc  .word       0x01EB69BC                   # dsll32      $t5, $t3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fe4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) << (32 + 6));
    // 0x377fe8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377fe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377fec: 0x1eb70bd  .word       0x01EB70BD                   # INVALID     $t7, $t3, 0x70BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377fecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x377FEC raw=0x01EB70BD");
    // 0x377ff0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377ff0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377ff4: 0x1eb78be  .word       0x01EB78BE                   # dsrl32      $t7, $t3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377ff4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) >> (32 + 2));
    // 0x377ff8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377ff8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377ffc: 0x1eb84cb  .word       0x01EB84CB                   # movn        $s0, $t7, $t3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377ffcu;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
    // 0x378000: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378000u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378004: 0x1ec69bc  .word       0x01EC69BC                   # dsll32      $t5, $t4, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378004u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 6));
    // 0x378008: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378008u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37800c: 0x1ec70bd  .word       0x01EC70BD                   # INVALID     $t7, $t4, 0x70BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37800cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37800C raw=0x01EC70BD");
    // 0x378010: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378010u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378014: 0x1ec78be  .word       0x01EC78BE                   # dsrl32      $t7, $t4, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378014u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) >> (32 + 2));
    // 0x378018: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378018u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37801c: 0x1ec850b  .word       0x01EC850B                   # movn        $s0, $t7, $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37801cu;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 15));
    // 0x378020: 0x3e48800  .word       0x03E48800                   # sll         $s1, $a0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378020u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
    // 0x378024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378028: 0x3e49001  .word       0x03E49001                   # INVALID     $ra, $a0, -0x6FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378028u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x378028 raw=0x03E49001");
    // 0x37802c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37802cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378030: 0x3e49802  .word       0x03E49802                   # srl         $s3, $a0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378030u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
    // 0x378034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378038: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x378038u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x378038 raw=0x48007800");
    // 0x37803c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37803cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378040: 0x3e4a003  .word       0x03E4A003                   # sra         $s4, $a0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378040u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 4), 0));
    // 0x378044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378048: 0x1e10000  .word       0x01E10000                   # sll         $zero, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378048u;
    
    // 0x37804c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37804cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378050: 0x1e20001  .word       0x01E20001                   # INVALID     $t7, $v0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378050u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x378050 raw=0x01E20001");
    // 0x378054: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378058: 0x1e30002  .word       0x01E30002                   # srl         $zero, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378058u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
    // 0x37805c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37805cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378060: 0x1e40003  .word       0x01E40003                   # sra         $zero, $a0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378060u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 4), 0));
    // 0x378064: 0x1010140  .word       0x01010140                   # sll         $zero, $at, 5 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378064u;
    
    // 0x378068: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378068u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37806c: 0x820140  .word       0x00820140                   # sll         $zero, $v0, 5 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37806cu;
    
    // 0x378070: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378070u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378074: 0x430140  .word       0x00430140                   # sll         $zero, $v1, 5 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378074u;
    
    // 0x378078: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378078u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37807c: 0x1010181  .word       0x01010181                   # INVALID     $t0, $at, 0x181 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37807cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37807C raw=0x01010181");
    // 0x378080: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378080u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x378084: 0x820181  .word       0x00820181                   # INVALID     $a0, $v0, 0x181 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378084u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x378084 raw=0x00820181");
    // 0x378088: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378088u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37808c: 0x430181  .word       0x00430181                   # INVALID     $v0, $v1, 0x181 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37808cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37808C raw=0x00430181");
    // 0x378090: 0x1e80020  add         $zero, $t7, $t0
    ctx->pc = 0x378090u;
    {     int32_t rs_val = GPR_S32(ctx, 15);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x378094: 0x10101c2  .word       0x010101C2                   # srl         $zero, $at, 7 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x378094u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 1), 7));
    // 0x378098: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x378098u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37809c: 0x8201c2  .word       0x008201C2                   # srl         $zero, $v0, 7 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37809cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
    // 0x3780a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3780a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3780a4: 0x4301c2  .word       0x004301C2                   # srl         $zero, $v1, 7 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3780a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x3780a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3780a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3780ac: 0x1c4422c  .word       0x01C4422C                   # dadd        $t0, $t6, $a0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3780acu;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
    // 0x3780b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3780b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3780b4: 0x1c829bc  .word       0x01C829BC                   # dsll32      $a1, $t0, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3780b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 6));
    // 0x3780b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3780b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3780bc: 0x1c830bd  .word       0x01C830BD                   # INVALID     $t6, $t0, 0x30BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3780bcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x3780BC raw=0x01C830BD");
    // 0x3780c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3780c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3780c4: 0x1c83a0a  .word       0x01C83A0A                   # movz        $a3, $t6, $t0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3780c4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 14));
    // 0x3780c8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3780c8u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x3780C8 raw=0x48007800");
    // 0x3780cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3780ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3780d0: 0x3c04021  addu        $t0, $fp, $zero
    ctx->pc = 0x3780d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x3780d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3780d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x3780d8u;
}
