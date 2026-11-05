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

// Function: sub_001B6D08
// Address: 0x1b6d08 - 0x1b6e40
void sub_001B6D08_0x1b6d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6D08_0x1b6d08");
#endif

    switch (ctx->pc) {
        case 0x1b6d80u: goto label_1b6d80;
        case 0x1b6d90u: goto label_1b6d90;
        default: break;
    }

    ctx->pc = 0x1b6d08u;

    // 0x1b6d08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6d0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6d10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6d14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b6d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6d18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6d1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b6d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b6d20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b6d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b6d24: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b6d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b6d28: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b6d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b6d2c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b6d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b6d30: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x1b6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x1b6d34: 0x8c830fe8  lw          $v1, 0xFE8($a0)
    ctx->pc = 0x1b6d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x1b6d38: 0x8c6204b0  lw          $v0, 0x4B0($v1)
    ctx->pc = 0x1b6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1200)));
    // 0x1b6d3c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1b6d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1b6d40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6D40u;
    {
        const bool branch_taken_0x1b6d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D40u;
        // 0x1b6d44: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d40) {
            ctx->pc = 0x1B6D60u;
            goto label_1b6d60;
        }
    }
    ctx->pc = 0x1B6D48u;
    // 0x1b6d48: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x1b6d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1b6d4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b6d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6d50: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b6d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b6d54: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B6D54u;
    {
        const bool branch_taken_0x1b6d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D54u;
        // 0x1b6d58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d54) {
            ctx->pc = 0x1B6E0Cu;
            goto label_1b6e0c;
        }
    }
    ctx->pc = 0x1B6D5Cu;
    // 0x1b6d5c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1b6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_1b6d60:
    // 0x1b6d60: 0x24160009  addiu       $s6, $zero, 0x9
    ctx->pc = 0x1b6d60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b6d64: 0x2451f010  addiu       $s1, $v0, -0xFF0
    ctx->pc = 0x1b6d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
    // 0x1b6d68: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x1b6d68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b6d6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b6d70: 0x24140007  addiu       $s4, $zero, 0x7
    ctx->pc = 0x1b6d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6d74: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x1b6d74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b6d78: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B6D78u;
    {
        const bool branch_taken_0x1b6d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D78u;
        // 0x1b6d7c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d78) {
            ctx->pc = 0x1B6DDCu;
            goto label_1b6ddc;
        }
    }
    ctx->pc = 0x1B6D80u;
label_1b6d80:
    // 0x1b6d80: 0x52020017  beql        $s0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B6D80u;
    {
        const bool branch_taken_0x1b6d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b6d80) {
            ctx->pc = 0x1B6D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6D80u;
            // 0x1b6d84: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6DE0u;
            goto label_1b6de0;
        }
    }
    ctx->pc = 0x1B6D88u;
    // 0x1b6d88: 0xc061f74  jal         func_187DD0
    ctx->pc = 0x1B6D88u;
    SET_GPR_U32(ctx, 31, 0x1B6D90u);
    ctx->pc = 0x1B6D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D88u;
    // 0x1b6d8c: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187DD0u, 0x1B6D88u, 0x1B6D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D90u;
label_1b6d90:
    // 0x1b6d90: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x1b6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x1b6d94: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x1b6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x1b6d98: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x1b6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
    // 0x1b6d9c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b6d9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b6da0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B6DA0u;
    {
        const bool branch_taken_0x1b6da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DA0u;
        // 0x1b6da4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6da0) {
            ctx->pc = 0x1B6E0Cu;
            goto label_1b6e0c;
        }
    }
    ctx->pc = 0x1B6DA8u;
    // 0x1b6da8: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x1b6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x1b6dac: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1b6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1b6db0: 0x10560007  beq         $v0, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6DB0u;
    {
        const bool branch_taken_0x1b6db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1B6DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DB0u;
        // 0x1b6db4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6db0) {
            ctx->pc = 0x1B6DD0u;
            goto label_1b6dd0;
        }
    }
    ctx->pc = 0x1B6DB8u;
    // 0x1b6db8: 0x50550006  beql        $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6DB8u;
    {
        const bool branch_taken_0x1b6db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x1b6db8) {
            ctx->pc = 0x1B6DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6DB8u;
            // 0x1b6dbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6DD4u;
            goto label_1b6dd4;
        }
    }
    ctx->pc = 0x1B6DC0u;
    // 0x1b6dc0: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6DC0u;
    {
        const bool branch_taken_0x1b6dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1b6dc0) {
            ctx->pc = 0x1B6DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6DC0u;
            // 0x1b6dc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6DD4u;
            goto label_1b6dd4;
        }
    }
    ctx->pc = 0x1B6DC8u;
    // 0x1b6dc8: 0x14530002  bne         $v0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6DC8u;
    {
        const bool branch_taken_0x1b6dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1b6dc8) {
            ctx->pc = 0x1B6DD4u;
            goto label_1b6dd4;
        }
    }
    ctx->pc = 0x1B6DD0u;
label_1b6dd0:
    // 0x1b6dd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b6dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6dd4:
    // 0x1b6dd4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1B6DD4u;
    {
        const bool branch_taken_0x1b6dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DD4u;
        // 0x1b6dd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6dd4) {
            ctx->pc = 0x1B6E0Cu;
            goto label_1b6e0c;
        }
    }
    ctx->pc = 0x1B6DDCu;
label_1b6ddc:
    // 0x1b6ddc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1b6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1b6de0:
    // 0x1b6de0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b6de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6de4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6DE4u;
    {
        const bool branch_taken_0x1b6de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6DE4u;
        // 0x1b6de8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6de4) {
            ctx->pc = 0x1B6DF0u;
            goto label_1b6df0;
        }
    }
    ctx->pc = 0x1B6DECu;
    // 0x1b6dec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b6decu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b6df0:
    // 0x1b6df0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6DF0u;
    {
        const bool branch_taken_0x1b6df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6df0) {
            ctx->pc = 0x1B6E00u;
            goto label_1b6e00;
        }
    }
    ctx->pc = 0x1B6DF8u;
    // 0x1b6df8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b6dfc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1b6dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1b6e00:
    // 0x1b6e00: 0x5600ffdf  bnel        $s0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1B6E00u;
    {
        const bool branch_taken_0x1b6e00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6e00) {
            ctx->pc = 0x1B6E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6E00u;
            // 0x1b6e04: 0x8e420084  lw          $v0, 0x84($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6d80;
        }
    }
    ctx->pc = 0x1B6E08u;
    // 0x1b6e08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6e0c:
    // 0x1b6e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6e10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6e10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6e14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b6e14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6e18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b6e18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b6e1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b6e1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6e20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b6e20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b6e24: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b6e24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6e28: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b6e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b6e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6E2Cu;
        // 0x1b6e30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6E34u;
    // 0x1b6e34: 0x0  nop
    ctx->pc = 0x1b6e34u;
    // NOP
    // 0x1b6e38: 0x0  nop
    ctx->pc = 0x1b6e38u;
    // NOP
    // 0x1b6e3c: 0x0  nop
    ctx->pc = 0x1b6e3cu;
    // NOP
    ctx->pc = 0x1b6e40u;
}
