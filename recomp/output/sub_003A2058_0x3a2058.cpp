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

// Function: sub_003A2058
// Address: 0x3a2058 - 0x3a21a0
void sub_003A2058_0x3a2058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2058_0x3a2058");
#endif

    switch (ctx->pc) {
        case 0x3a2098u: goto label_3a2098;
        case 0x3a20f0u: goto label_3a20f0;
        case 0x3a2100u: goto label_3a2100;
        case 0x3a2140u: goto label_3a2140;
        default: break;
    }

    ctx->pc = 0x3a2058u;

    // 0x3a2058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a2058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a205c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a205cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a2060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a2060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a2064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a2068: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a2068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a206c: 0x10c00046  beqz        $a2, . + 4 + (0x46 << 2)
    ctx->pc = 0x3A206Cu;
    {
        const bool branch_taken_0x3a206c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A206Cu;
        // 0x3a2070: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a206c) {
            ctx->pc = 0x3A2188u;
            goto label_3a2188;
        }
    }
    ctx->pc = 0x3A2074u;
    // 0x3a2074: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x3a2074u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a2078: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x3a2078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x3a207c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A207Cu;
    {
        const bool branch_taken_0x3a207c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A207Cu;
        // 0x3a2080: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a207c) {
            ctx->pc = 0x3A20D0u;
            goto label_3a20d0;
        }
    }
    ctx->pc = 0x3A2084u;
    // 0x3a2084: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A2084u;
    {
        const bool branch_taken_0x3a2084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2084u;
        // 0x3a2088: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2084) {
            ctx->pc = 0x3A20E0u;
            goto label_3a20e0;
        }
    }
    ctx->pc = 0x3A208Cu;
    // 0x3a208c: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x3a208cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x3a2090: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3a2090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a2094: 0x0  nop
    ctx->pc = 0x3a2094u;
    // NOP
label_3a2098:
    // 0x3a2098: 0x2081821  addu        $v1, $s0, $t0
    ctx->pc = 0x3a2098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x3a209c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a209cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a20a0: 0x29020129  slti        $v0, $t0, 0x129
    ctx->pc = 0x3a20a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x3a20a4: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x3a20a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3a20a8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A20A8u;
    {
        const bool branch_taken_0x3a20a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A20A8u;
        // 0x3a20ac: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a20a8) {
            ctx->pc = 0x3A20D4u;
            goto label_3a20d4;
        }
    }
    ctx->pc = 0x3A20B0u;
    // 0x3a20b0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3a20b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a20b4: 0x10470008  beq         $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A20B4u;
    {
        const bool branch_taken_0x3a20b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x3a20b4) {
            ctx->pc = 0x3A20D8u;
            goto label_3a20d8;
        }
    }
    ctx->pc = 0x3A20BCu;
    // 0x3a20bc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A20BCu;
    {
        const bool branch_taken_0x3a20bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a20bc) {
            ctx->pc = 0x3A20C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A20BCu;
            // 0x3a20c0: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2098;
        }
    }
    ctx->pc = 0x3A20C4u;
    // 0x3a20c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A20C4u;
    {
        const bool branch_taken_0x3a20c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a20c4) {
            ctx->pc = 0x3A20D8u;
            goto label_3a20d8;
        }
    }
    ctx->pc = 0x3A20CCu;
    // 0x3a20cc: 0x0  nop
    ctx->pc = 0x3a20ccu;
    // NOP
label_3a20d0:
    // 0x3a20d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3a20d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a20d4:
    // 0x3a20d4: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3a20d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3a20d8:
    // 0x3a20d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A20D8u;
    {
        const bool branch_taken_0x3a20d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A20DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A20D8u;
        // 0x3a20dc: 0x2081821  addu        $v1, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a20d8) {
            ctx->pc = 0x3A2108u;
            goto label_3a2108;
        }
    }
    ctx->pc = 0x3A20E0u;
label_3a20e0:
    // 0x3a20e0: 0x2081021  addu        $v0, $s0, $t0
    ctx->pc = 0x3a20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x3a20e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a20e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a20e8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A20E8u;
    SET_GPR_U32(ctx, 31, 0x3A20F0u);
    ctx->pc = 0x3A20ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20E8u;
    // 0x3a20ec: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A20E8u, 0x3A20F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A20F0u;
label_3a20f0:
    // 0x3a20f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a20f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a20f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a20f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a20f8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3A20F8u;
    SET_GPR_U32(ctx, 31, 0x3A2100u);
    ctx->pc = 0x3A20FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20F8u;
    // 0x3a20fc: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3A20F8u, 0x3A2100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2100u;
label_3a2100:
    // 0x3a2100: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3A2100u;
    {
        const bool branch_taken_0x3a2100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2100u;
        // 0x3a2104: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2100) {
            ctx->pc = 0x3A2188u;
            goto label_3a2188;
        }
    }
    ctx->pc = 0x3A2108u;
label_3a2108:
    // 0x3a2108: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3a2108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3a210c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a2110: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2110u;
    {
        const bool branch_taken_0x3a2110 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2110u;
        // 0x3a2114: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2110) {
            ctx->pc = 0x3A2120u;
            goto label_3a2120;
        }
    }
    ctx->pc = 0x3A2118u;
    // 0x3a2118: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3a2118u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a211c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a211cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2120:
    // 0x3a2120: 0x29020129  slti        $v0, $t0, 0x129
    ctx->pc = 0x3a2120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x3a2124: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A2124u;
    {
        const bool branch_taken_0x3a2124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2124u;
        // 0x3a2128: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2124) {
            ctx->pc = 0x3A2164u;
            goto label_3a2164;
        }
    }
    ctx->pc = 0x3A212Cu;
    // 0x3a212c: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x3a212cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x3a2130: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a2130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a2134: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A2134u;
    {
        const bool branch_taken_0x3a2134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2134u;
        // 0x3a2138: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2134) {
            ctx->pc = 0x3A2164u;
            goto label_3a2164;
        }
    }
    ctx->pc = 0x3A213Cu;
    // 0x3a213c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a213cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3a2140:
    // 0x3a2140: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a2140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a2144: 0x28a40129  slti        $a0, $a1, 0x129
    ctx->pc = 0x3a2144u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)297) ? 1 : 0);
    // 0x3a2148: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x3a2148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3a214c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3a214cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2150: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2150u;
    {
        const bool branch_taken_0x3a2150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2150u;
        // 0x3a2154: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2150) {
            ctx->pc = 0x3A2164u;
            goto label_3a2164;
        }
    }
    ctx->pc = 0x3A2158u;
    // 0x3a2158: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a2158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a215c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A215Cu;
    {
        const bool branch_taken_0x3a215c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a215c) {
            ctx->pc = 0x3A2160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A215Cu;
            // 0x3a2160: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2140;
        }
    }
    ctx->pc = 0x3A2164u;
label_3a2164:
    // 0x3a2164: 0xa81023  subu        $v0, $a1, $t0
    ctx->pc = 0x3a2164u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x3a2168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a2168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a216c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3a216cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3a2170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a2170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a2174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2178: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a2178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a217c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x3a217cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2180: 0x80e8714  j           func_3A1C50
    ctx->pc = 0x3A2180u;
    ctx->pc = 0x3A2184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2180u;
    // 0x3a2184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1C50u;
    sub_003A1C50_0x3a1c50(rdram, ctx, runtime); return;
    ctx->pc = 0x3A2188u;
label_3a2188:
    // 0x3a2188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a218c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a218cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a2190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a2190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2194: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2194u;
        // 0x3a2198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A219Cu;
    // 0x3a219c: 0x0  nop
    ctx->pc = 0x3a219cu;
    // NOP
    ctx->pc = 0x3a21a0u;
}
