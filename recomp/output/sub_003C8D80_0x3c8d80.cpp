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

// Function: sub_003C8D80
// Address: 0x3c8d80 - 0x3c9078
void sub_003C8D80_0x3c8d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8D80_0x3c8d80");
#endif

    switch (ctx->pc) {
        case 0x3c8da4u: goto label_3c8da4;
        case 0x3c8e3cu: goto label_3c8e3c;
        case 0x3c8e44u: goto label_3c8e44;
        case 0x3c9028u: goto label_3c9028;
        case 0x3c9060u: goto label_3c9060;
        default: break;
    }

    ctx->pc = 0x3c8d80u;

    // 0x3c8d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c8d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c8d84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c8d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c8d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c8d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c8d8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c8d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8d90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c8d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c8d94: 0x120000b2  beqz        $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x3C8D94u;
    {
        const bool branch_taken_0x3c8d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D94u;
        // 0x3c8d98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8d94) {
            ctx->pc = 0x3C9060u;
            goto label_3c9060;
        }
    }
    ctx->pc = 0x3C8D9Cu;
    // 0x3c8d9c: 0xc0f2538  jal         func_3C94E0
    ctx->pc = 0x3C8D9Cu;
    SET_GPR_U32(ctx, 31, 0x3C8DA4u);
    ctx->pc = 0x3C94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C94E0u, 0x3C8D9Cu, 0x3C8DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8DA4u;
label_3c8da4:
    // 0x3c8da4: 0x260afff8  addiu       $t2, $s0, -0x8
    ctx->pc = 0x3c8da4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x3c8da8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8dac: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x3c8dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x3c8db0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3c8db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x3c8db4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x3c8db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x3c8db8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c8db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8dbc: 0xc24824  and         $t1, $a2, $v0
    ctx->pc = 0x3c8dbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3c8dc0: 0x24abd180  addiu       $t3, $a1, -0x2E80
    ctx->pc = 0x3c8dc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955392));
    // 0x3c8dc4: 0x1493821  addu        $a3, $t2, $t1
    ctx->pc = 0x3c8dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3c8dc8: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3c8dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3c8dcc: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x3c8dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3c8dd0: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x3c8dd0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8dd4: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x3c8dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x3c8dd8: 0x14e2001c  bne         $a3, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3C8DD8u;
    {
        const bool branch_taken_0x3c8dd8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C8DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8DD8u;
        // 0x3c8ddc: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8dd8) {
            ctx->pc = 0x3C8E4Cu;
            goto label_3c8e4c;
        }
    }
    ctx->pc = 0x3C8DE0u;
    // 0x3c8de0: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3c8de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3c8de4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C8DE4u;
    {
        const bool branch_taken_0x3c8de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8DE4u;
        // 0x3c8de8: 0x1244821  addu        $t1, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8de4) {
            ctx->pc = 0x3C8E08u;
            goto label_3c8e08;
        }
    }
    ctx->pc = 0x3C8DECu;
    // 0x3c8dec: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x3c8decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x3c8df0: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x3c8df0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x3c8df4: 0x1254821  addu        $t1, $t1, $a1
    ctx->pc = 0x3c8df4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x3c8df8: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x3c8df8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3c8dfc: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x3c8dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3c8e00: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3c8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3c8e04: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3c8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_3c8e08:
    // 0x3c8e08: 0x35230001  ori         $v1, $t1, 0x1
    ctx->pc = 0x3c8e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x3c8e0c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x3c8e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x3c8e10: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x3c8e10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x3c8e14: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x3c8e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3c8e18: 0xad6a0008  sw          $t2, 0x8($t3)
    ctx->pc = 0x3c8e18u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 10));
    // 0x3c8e1c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c8e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c8e20: 0xdc83d588  ld          $v1, -0x2A78($a0)
    ctx->pc = 0x3c8e20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 4294956424)));
    // 0x3c8e24: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3c8e24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c8e28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C8E28u;
    {
        const bool branch_taken_0x3c8e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E28u;
        // 0x3c8e2c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e28) {
            ctx->pc = 0x3C8E3Cu;
            goto label_3c8e3c;
        }
    }
    ctx->pc = 0x3C8E30u;
    // 0x3c8e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c8e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8e34: 0xc0f241e  jal         func_3C9078
    ctx->pc = 0x3C8E34u;
    SET_GPR_U32(ctx, 31, 0x3C8E3Cu);
    ctx->pc = 0x3C8E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8E34u;
    // 0x3c8e38: 0x8c45d590  lw          $a1, -0x2A70($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9078u, 0x3C8E34u, 0x3C8E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8E3Cu;
label_3c8e3c:
    // 0x3c8e3c: 0xc0f2550  jal         func_3C9540
    ctx->pc = 0x3C8E3Cu;
    SET_GPR_U32(ctx, 31, 0x3C8E44u);
    ctx->pc = 0x3C8E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8E3Cu;
    // 0x3c8e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9540u, 0x3C8E3Cu, 0x3C8E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8E44u;
label_3c8e44:
    // 0x3c8e44: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x3C8E44u;
    {
        const bool branch_taken_0x3c8e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E44u;
        // 0x3c8e48: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e44) {
            ctx->pc = 0x3C9064u;
            goto label_3c9064;
        }
    }
    ctx->pc = 0x3C8E4Cu;
label_3c8e4c:
    // 0x3c8e4c: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x3c8e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x3c8e50: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x3c8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x3c8e54: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C8E54u;
    {
        const bool branch_taken_0x3c8e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E54u;
        // 0x3c8e58: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e54) {
            ctx->pc = 0x3C8E8Cu;
            goto label_3c8e8c;
        }
    }
    ctx->pc = 0x3C8E5Cu;
    // 0x3c8e5c: 0x8e05fff8  lw          $a1, -0x8($s0)
    ctx->pc = 0x3c8e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
    // 0x3c8e60: 0x25620008  addiu       $v0, $t3, 0x8
    ctx->pc = 0x3c8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x3c8e64: 0x1455023  subu        $t2, $t2, $a1
    ctx->pc = 0x3c8e64u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x3c8e68: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x3c8e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3c8e6c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8E6Cu;
    {
        const bool branch_taken_0x3c8e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E6Cu;
        // 0x3c8e70: 0x1254821  addu        $t1, $t1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e6c) {
            ctx->pc = 0x3C8E7Cu;
            goto label_3c8e7c;
        }
    }
    ctx->pc = 0x3C8E74u;
    // 0x3c8e74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C8E74u;
    {
        const bool branch_taken_0x3c8e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E74u;
        // 0x3c8e78: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e74) {
            ctx->pc = 0x3C8E8Cu;
            goto label_3c8e8c;
        }
    }
    ctx->pc = 0x3C8E7Cu;
label_3c8e7c:
    // 0x3c8e7c: 0x8d48000c  lw          $t0, 0xC($t2)
    ctx->pc = 0x3c8e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3c8e80: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3c8e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8e84: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3c8e84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3c8e88: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3c8e88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_3c8e8c:
    // 0x3c8e8c: 0xe41821  addu        $v1, $a3, $a0
    ctx->pc = 0x3c8e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3c8e90: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3c8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3c8e94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3c8e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3c8e98: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C8E98u;
    {
        const bool branch_taken_0x3c8e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8E98u;
        // 0x3c8e9c: 0x35220001  ori         $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8e98) {
            ctx->pc = 0x3C8EE8u;
            goto label_3c8ee8;
        }
    }
    ctx->pc = 0x3C8EA0u;
    // 0x3c8ea0: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x3c8ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x3c8ea4: 0x1580000b  bnez        $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x3C8EA4u;
    {
        const bool branch_taken_0x3c8ea4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EA4u;
        // 0x3c8ea8: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ea4) {
            ctx->pc = 0x3C8ED4u;
            goto label_3c8ed4;
        }
    }
    ctx->pc = 0x3C8EACu;
    // 0x3c8eac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c8eb0: 0x2442d188  addiu       $v0, $v0, -0x2E78
    ctx->pc = 0x3c8eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955400));
    // 0x3c8eb4: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C8EB4u;
    {
        const bool branch_taken_0x3c8eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3c8eb4) {
            ctx->pc = 0x3C8EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8EB4u;
            // 0x3c8eb8: 0x8ce8000c  lw          $t0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8ED8u;
            goto label_3c8ed8;
        }
    }
    ctx->pc = 0x3C8EBCu;
    // 0x3c8ebc: 0xac6a000c  sw          $t2, 0xC($v1)
    ctx->pc = 0x3c8ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 10));
    // 0x3c8ec0: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x3c8ec0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c8ec4: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x3c8ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x3c8ec8: 0xad430008  sw          $v1, 0x8($t2)
    ctx->pc = 0x3c8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 3));
    // 0x3c8ecc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C8ECCu;
    {
        const bool branch_taken_0x3c8ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8ECCu;
        // 0x3c8ed0: 0xad43000c  sw          $v1, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ecc) {
            ctx->pc = 0x3C8EE4u;
            goto label_3c8ee4;
        }
    }
    ctx->pc = 0x3C8ED4u;
label_3c8ed4:
    // 0x3c8ed4: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x3c8ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_3c8ed8:
    // 0x3c8ed8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3c8ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8edc: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3c8edcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3c8ee0: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3c8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
label_3c8ee4:
    // 0x3c8ee4: 0x35220001  ori         $v0, $t1, 0x1
    ctx->pc = 0x3c8ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
label_3c8ee8:
    // 0x3c8ee8: 0x1491821  addu        $v1, $t2, $t1
    ctx->pc = 0x3c8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x3c8eec: 0xad420004  sw          $v0, 0x4($t2)
    ctx->pc = 0x3c8eecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 2));
    // 0x3c8ef0: 0x15800059  bnez        $t4, . + 4 + (0x59 << 2)
    ctx->pc = 0x3C8EF0u;
    {
        const bool branch_taken_0x3c8ef0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EF0u;
        // 0x3c8ef4: 0xac690000  sw          $t1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ef0) {
            ctx->pc = 0x3C9058u;
            goto label_3c9058;
        }
    }
    ctx->pc = 0x3C8EF8u;
    // 0x3c8ef8: 0x2d220200  sltiu       $v0, $t1, 0x200
    ctx->pc = 0x3c8ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x3c8efc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C8EFCu;
    {
        const bool branch_taken_0x3c8efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8EFCu;
        // 0x3c8f00: 0x938c2  srl         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8efc) {
            ctx->pc = 0x3C8F48u;
            goto label_3c8f48;
        }
    }
    ctx->pc = 0x3C8F04u;
    // 0x3c8f04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c8f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c8f08: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3c8f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c8f0c: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3c8f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3c8f10: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x3c8f10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x3c8f14: 0x25a5d180  addiu       $a1, $t5, -0x2E80
    ctx->pc = 0x3c8f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4294955392));
    // 0x3c8f18: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3c8f18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3c8f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c8f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c8f20: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3c8f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3c8f24: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x3c8f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3c8f28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c8f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8f2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c8f2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c8f30: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x3c8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3c8f34: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3c8f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3c8f38: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x3c8f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3c8f3c: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x3c8f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x3c8f40: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3C8F40u;
    {
        const bool branch_taken_0x3c8f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F40u;
        // 0x3c8f44: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f40) {
            ctx->pc = 0x3C9048u;
            goto label_3c9048;
        }
    }
    ctx->pc = 0x3C8F48u;
label_3c8f48:
    // 0x3c8f48: 0x91a42  srl         $v1, $t1, 9
    ctx->pc = 0x3c8f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 9));
    // 0x3c8f4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8F4Cu;
    {
        const bool branch_taken_0x3c8f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F4Cu;
        // 0x3c8f50: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f4c) {
            ctx->pc = 0x3C8F5Cu;
            goto label_3c8f5c;
        }
    }
    ctx->pc = 0x3C8F54u;
    // 0x3c8f54: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3C8F54u;
    {
        const bool branch_taken_0x3c8f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F54u;
        // 0x3c8f58: 0x938c2  srl         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f54) {
            ctx->pc = 0x3C8FB8u;
            goto label_3c8fb8;
        }
    }
    ctx->pc = 0x3C8F5Cu;
label_3c8f5c:
    // 0x3c8f5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8F5Cu;
    {
        const bool branch_taken_0x3c8f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F5Cu;
        // 0x3c8f60: 0x91182  srl         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f5c) {
            ctx->pc = 0x3C8F6Cu;
            goto label_3c8f6c;
        }
    }
    ctx->pc = 0x3C8F64u;
    // 0x3c8f64: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C8F64u;
    {
        const bool branch_taken_0x3c8f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F64u;
        // 0x3c8f68: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f64) {
            ctx->pc = 0x3C8FB8u;
            goto label_3c8fb8;
        }
    }
    ctx->pc = 0x3C8F6Cu;
label_3c8f6c:
    // 0x3c8f6c: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x3c8f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x3c8f70: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C8F70u;
    {
        const bool branch_taken_0x3c8f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F70u;
        // 0x3c8f74: 0x2467005b  addiu       $a3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f70) {
            ctx->pc = 0x3C8FB8u;
            goto label_3c8fb8;
        }
    }
    ctx->pc = 0x3C8F78u;
    // 0x3c8f78: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x3c8f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x3c8f7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8F7Cu;
    {
        const bool branch_taken_0x3c8f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F7Cu;
        // 0x3c8f80: 0x91302  srl         $v0, $t1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f7c) {
            ctx->pc = 0x3C8F8Cu;
            goto label_3c8f8c;
        }
    }
    ctx->pc = 0x3C8F84u;
    // 0x3c8f84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C8F84u;
    {
        const bool branch_taken_0x3c8f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F84u;
        // 0x3c8f88: 0x2447006e  addiu       $a3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f84) {
            ctx->pc = 0x3C8FB8u;
            goto label_3c8fb8;
        }
    }
    ctx->pc = 0x3C8F8Cu;
label_3c8f8c:
    // 0x3c8f8c: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x3c8f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x3c8f90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8F90u;
    {
        const bool branch_taken_0x3c8f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F90u;
        // 0x3c8f94: 0x913c2  srl         $v0, $t1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f90) {
            ctx->pc = 0x3C8FA0u;
            goto label_3c8fa0;
        }
    }
    ctx->pc = 0x3C8F98u;
    // 0x3c8f98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C8F98u;
    {
        const bool branch_taken_0x3c8f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8F98u;
        // 0x3c8f9c: 0x24470077  addiu       $a3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8f98) {
            ctx->pc = 0x3C8FB8u;
            goto label_3c8fb8;
        }
    }
    ctx->pc = 0x3C8FA0u;
label_3c8fa0:
    // 0x3c8fa0: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x3c8fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x3c8fa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8FA4u;
    {
        const bool branch_taken_0x3c8fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8FA4u;
        // 0x3c8fa8: 0x91482  srl         $v0, $t1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8fa4) {
            ctx->pc = 0x3C8FB4u;
            goto label_3c8fb4;
        }
    }
    ctx->pc = 0x3C8FACu;
    // 0x3c8fac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C8FACu;
    {
        const bool branch_taken_0x3c8fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8FACu;
        // 0x3c8fb0: 0x2447007c  addiu       $a3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8fac) {
            ctx->pc = 0x3C8FB8u;
            goto label_3c8fb8;
        }
    }
    ctx->pc = 0x3C8FB4u;
label_3c8fb4:
    // 0x3c8fb4: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x3c8fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_3c8fb8:
    // 0x3c8fb8: 0x25abd180  addiu       $t3, $t5, -0x2E80
    ctx->pc = 0x3c8fb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 4294955392));
    // 0x3c8fbc: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3c8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3c8fc0: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x3c8fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x3c8fc4: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x3c8fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3c8fc8: 0x54c8000e  bnel        $a2, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C8FC8u;
    {
        const bool branch_taken_0x3c8fc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x3c8fc8) {
            ctx->pc = 0x3C8FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8FC8u;
            // 0x3c8fcc: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9004u;
            goto label_3c9004;
        }
    }
    ctx->pc = 0x3C8FD0u;
    // 0x3c8fd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c8fd4: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3c8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3c8fd8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3c8fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c8fdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c8fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c8fe0: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x3c8fe0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x3c8fe4: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x3c8fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x3c8fe8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3c8fe8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3c8fec: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x3c8fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3c8ff0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3c8ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c8ff4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3c8ff4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3c8ff8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3c8ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3c8ffc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C8FFCu;
    {
        const bool branch_taken_0x3c8ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8FFCu;
        // 0x3c9000: 0xad650004  sw          $a1, 0x4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ffc) {
            ctx->pc = 0x3C9048u;
            goto label_3c9048;
        }
    }
    ctx->pc = 0x3C9004u;
label_3c9004:
    // 0x3c9004: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c9004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c9008: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3c9008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3c900c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c900cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3c9010: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x3c9010u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c9014: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3C9014u;
    {
        const bool branch_taken_0x3c9014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c9014) {
            ctx->pc = 0x3C9018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9014u;
            // 0x3c9018: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9048u;
            goto label_3c9048;
        }
    }
    ctx->pc = 0x3C901Cu;
    // 0x3c901c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c901cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3c9020: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3c9020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3c9024: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3c9024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3c9028:
    // 0x3c9028: 0x50c80007  beql        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C9028u;
    {
        const bool branch_taken_0x3c9028 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x3c9028) {
            ctx->pc = 0x3C902Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C9028u;
            // 0x3c902c: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9048u;
            goto label_3c9048;
        }
    }
    ctx->pc = 0x3C9030u;
    // 0x3c9030: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3c9030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3c9034: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c9034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3c9038: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x3c9038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c903c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C903Cu;
    {
        const bool branch_taken_0x3c903c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c903c) {
            ctx->pc = 0x3C9040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C903Cu;
            // 0x3c9040: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C9028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c9028;
        }
    }
    ctx->pc = 0x3C9044u;
    // 0x3c9044: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x3c9044u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3c9048:
    // 0x3c9048: 0xad48000c  sw          $t0, 0xC($t2)
    ctx->pc = 0x3c9048u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 8));
    // 0x3c904c: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x3c904cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x3c9050: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x3c9050u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x3c9054: 0xacca000c  sw          $t2, 0xC($a2)
    ctx->pc = 0x3c9054u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 10));
label_3c9058:
    // 0x3c9058: 0xc0f2550  jal         func_3C9540
    ctx->pc = 0x3C9058u;
    SET_GPR_U32(ctx, 31, 0x3C9060u);
    ctx->pc = 0x3C905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9058u;
    // 0x3c905c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9540u, 0x3C9058u, 0x3C9060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9060u;
label_3c9060:
    // 0x3c9060: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c9060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c9064:
    // 0x3c9064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c9064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c9068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c906c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C906Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C906Cu;
        // 0x3c9070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C906Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9074u;
    // 0x3c9074: 0x0  nop
    ctx->pc = 0x3c9074u;
    // NOP
    ctx->pc = 0x3c9078u;
}
