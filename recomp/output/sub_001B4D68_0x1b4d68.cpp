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

// Function: sub_001B4D68
// Address: 0x1b4d68 - 0x1b5260
void sub_001B4D68_0x1b4d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4D68_0x1b4d68");
#endif

    switch (ctx->pc) {
        case 0x1b4e50u: goto label_1b4e50;
        case 0x1b4e60u: goto label_1b4e60;
        case 0x1b4eccu: goto label_1b4ecc;
        case 0x1b4edcu: goto label_1b4edc;
        case 0x1b4eecu: goto label_1b4eec;
        case 0x1b4f58u: goto label_1b4f58;
        case 0x1b4f68u: goto label_1b4f68;
        case 0x1b4f78u: goto label_1b4f78;
        case 0x1b5024u: goto label_1b5024;
        case 0x1b5034u: goto label_1b5034;
        case 0x1b5084u: goto label_1b5084;
        case 0x1b5094u: goto label_1b5094;
        case 0x1b50fcu: goto label_1b50fc;
        case 0x1b510cu: goto label_1b510c;
        case 0x1b511cu: goto label_1b511c;
        case 0x1b512cu: goto label_1b512c;
        case 0x1b51fcu: goto label_1b51fc;
        default: break;
    }

    ctx->pc = 0x1b4d68u;

    // 0x1b4d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4d6c: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x1b4d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1b4d70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4d74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b4d78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4d78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4d7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b4d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4d80: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1b4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1b4d84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b4d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b4d88: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x1b4d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
    // 0x1b4d8c: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x1b4d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b4d90: 0x8e06012c  lw          $a2, 0x12C($s0)
    ctx->pc = 0x1b4d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1b4d94: 0x8ca30ff4  lw          $v1, 0xFF4($a1)
    ctx->pc = 0x1b4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4084)));
    // 0x1b4d98: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1b4d9c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x1b4d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b4da0: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4DA0u;
    {
        const bool branch_taken_0x1b4da0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DA0u;
        // 0x1b4da4: 0x449021  addu        $s2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4da0) {
            ctx->pc = 0x1B4DB4u;
            goto label_1b4db4;
        }
    }
    ctx->pc = 0x1B4DA8u;
    // 0x1b4da8: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x1b4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b4dac: 0x50400125  beql        $v0, $zero, . + 4 + (0x125 << 2)
    ctx->pc = 0x1B4DACu;
    {
        const bool branch_taken_0x1b4dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4dac) {
            ctx->pc = 0x1B4DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4DACu;
            // 0x1b4db0: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5244u;
            goto label_1b5244;
        }
    }
    ctx->pc = 0x1B4DB4u;
label_1b4db4:
    // 0x1b4db4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b4db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4db8: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x1b4db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1b4dbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b4dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b4dc0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B4DC0u;
    {
        const bool branch_taken_0x1b4dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DC0u;
        // 0x1b4dc4: 0xae060114  sw          $a2, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4dc0) {
            ctx->pc = 0x1B4E10u;
            goto label_1b4e10;
        }
    }
    ctx->pc = 0x1B4DC8u;
    // 0x1b4dc8: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x1b4dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b4dcc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b4dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1b4dd0: 0x8ca30ff8  lw          $v1, 0xFF8($a1)
    ctx->pc = 0x1b4dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4088)));
    // 0x1b4dd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b4dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b4dd8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1b4dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1b4ddc: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B4DDCu;
    {
        const bool branch_taken_0x1b4ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1b4ddc) {
            ctx->pc = 0x1B4DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4DDCu;
            // 0x1b4de0: 0x8e11012c  lw          $s1, 0x12C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4E14u;
            goto label_1b4e14;
        }
    }
    ctx->pc = 0x1B4DE4u;
    // 0x1b4de4: 0x8ca50338  lw          $a1, 0x338($a1)
    ctx->pc = 0x1b4de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 824)));
    // 0x1b4de8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1b4de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1b4dec: 0x8ca20088  lw          $v0, 0x88($a1)
    ctx->pc = 0x1b4decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x1b4df0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4DF0u;
    {
        const bool branch_taken_0x1b4df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B4DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DF0u;
        // 0x1b4df4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4df0) {
            ctx->pc = 0x1B4E08u;
            goto label_1b4e08;
        }
    }
    ctx->pc = 0x1B4DF8u;
    // 0x1b4df8: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x1b4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1b4dfc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1b4dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4e00: 0x28420174  slti        $v0, $v0, 0x174
    ctx->pc = 0x1b4e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)372) ? 1 : 0);
    // 0x1b4e04: 0x2200b  movn        $a0, $zero, $v0
    ctx->pc = 0x1b4e04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1b4e08:
    // 0x1b4e08: 0x5080010f  beql        $a0, $zero, . + 4 + (0x10F << 2)
    ctx->pc = 0x1B4E08u;
    {
        const bool branch_taken_0x1b4e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e08) {
            ctx->pc = 0x1B4E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4E08u;
            // 0x1b4e0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5248u;
            goto label_1b5248;
        }
    }
    ctx->pc = 0x1B4E10u;
label_1b4e10:
    // 0x1b4e10: 0x8e11012c  lw          $s1, 0x12C($s0)
    ctx->pc = 0x1b4e10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_1b4e14:
    // 0x1b4e14: 0x12200072  beqz        $s1, . + 4 + (0x72 << 2)
    ctx->pc = 0x1B4E14u;
    {
        const bool branch_taken_0x1b4e14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E14u;
        // 0x1b4e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e14) {
            ctx->pc = 0x1B4FE0u;
            goto label_1b4fe0;
        }
    }
    ctx->pc = 0x1B4E1Cu;
    // 0x1b4e1c: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B4E1Cu;
    {
        const bool branch_taken_0x1b4e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E1Cu;
        // 0x1b4e20: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e1c) {
            ctx->pc = 0x1B4E48u;
            goto label_1b4e48;
        }
    }
    ctx->pc = 0x1B4E24u;
    // 0x1b4e24: 0x54400108  bnel        $v0, $zero, . + 4 + (0x108 << 2)
    ctx->pc = 0x1B4E24u;
    {
        const bool branch_taken_0x1b4e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e24) {
            ctx->pc = 0x1B4E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4E24u;
            // 0x1b4e28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5248u;
            goto label_1b5248;
        }
    }
    ctx->pc = 0x1B4E2Cu;
    // 0x1b4e2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4e30: 0x12220028  beq         $s1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B4E30u;
    {
        const bool branch_taken_0x1b4e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E30u;
        // 0x1b4e34: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e30) {
            ctx->pc = 0x1B4ED4u;
            goto label_1b4ed4;
        }
    }
    ctx->pc = 0x1B4E38u;
    // 0x1b4e38: 0x12220049  beq         $s1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1B4E38u;
    {
        const bool branch_taken_0x1b4e38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4e38) {
            ctx->pc = 0x1B4F60u;
            goto label_1b4f60;
        }
    }
    ctx->pc = 0x1B4E40u;
    // 0x1b4e40: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x1B4E40u;
    {
        const bool branch_taken_0x1b4e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E40u;
        // 0x1b4e44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e40) {
            ctx->pc = 0x1B5248u;
            goto label_1b5248;
        }
    }
    ctx->pc = 0x1B4E48u;
label_1b4e48:
    // 0x1b4e48: 0xc06db94  jal         func_1B6E50
    ctx->pc = 0x1B4E48u;
    SET_GPR_U32(ctx, 31, 0x1B4E50u);
    ctx->pc = 0x1B4E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E48u;
    // 0x1b4e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E50u, 0x1B4E48u, 0x1B4E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E50u;
label_1b4e50:
    // 0x1b4e50: 0x504000fc  beql        $v0, $zero, . + 4 + (0xFC << 2)
    ctx->pc = 0x1B4E50u;
    {
        const bool branch_taken_0x1b4e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e50) {
            ctx->pc = 0x1B4E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4E50u;
            // 0x1b4e54: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5244u;
            goto label_1b5244;
        }
    }
    ctx->pc = 0x1B4E58u;
    // 0x1b4e58: 0xc06d5a4  jal         func_1B5690
    ctx->pc = 0x1B4E58u;
    SET_GPR_U32(ctx, 31, 0x1B4E60u);
    ctx->pc = 0x1B4E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E58u;
    // 0x1b4e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5690u, 0x1B4E58u, 0x1B4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4E60u;
label_1b4e60:
    // 0x1b4e60: 0xae110130  sw          $s1, 0x130($s0)
    ctx->pc = 0x1b4e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 17));
    // 0x1b4e64: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b4e68: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1b4e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x1b4e6c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b4e70: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4E70u;
    {
        const bool branch_taken_0x1b4e70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B4E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E70u;
        // 0x1b4e74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e70) {
            ctx->pc = 0x1B4E8Cu;
            goto label_1b4e8c;
        }
    }
    ctx->pc = 0x1B4E78u;
    // 0x1b4e78: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4e7c: 0x0  nop
    ctx->pc = 0x1b4e7cu;
    // NOP
    // 0x1b4e80: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b4e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b4e84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4E84u;
    {
        const bool branch_taken_0x1b4e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e84) {
            ctx->pc = 0x1B4EA4u;
            goto label_1b4ea4;
        }
    }
    ctx->pc = 0x1B4E8Cu;
label_1b4e8c:
    // 0x1b4e8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b4e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b4e90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b4e94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4e98: 0x0  nop
    ctx->pc = 0x1b4e98u;
    // NOP
    // 0x1b4e9c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b4e9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b4ea0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b4ea0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b4ea4:
    // 0x1b4ea4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b4ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b4ea8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b4ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b4eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4eb4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1b4eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1b4eb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4ebc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b4ebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b4ec0: 0xe60100f0  swc1        $f1, 0xF0($s0)
    ctx->pc = 0x1b4ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x1b4ec4: 0xc06dc28  jal         func_1B70A0
    ctx->pc = 0x1B4EC4u;
    SET_GPR_U32(ctx, 31, 0x1B4ECCu);
    ctx->pc = 0x1B4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EC4u;
    // 0x1b4ec8: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70A0u, 0x1B4EC4u, 0x1B4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4ECCu;
label_1b4ecc:
    // 0x1b4ecc: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1B4ECCu;
    {
        const bool branch_taken_0x1b4ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4ECCu;
        // 0x1b4ed0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ecc) {
            ctx->pc = 0x1B5248u;
            goto label_1b5248;
        }
    }
    ctx->pc = 0x1B4ED4u;
label_1b4ed4:
    // 0x1b4ed4: 0xc06db94  jal         func_1B6E50
    ctx->pc = 0x1B4ED4u;
    SET_GPR_U32(ctx, 31, 0x1B4EDCu);
    ctx->pc = 0x1B4ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4ED4u;
    // 0x1b4ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E50u, 0x1B4ED4u, 0x1B4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EDCu;
label_1b4edc:
    // 0x1b4edc: 0x504000d9  beql        $v0, $zero, . + 4 + (0xD9 << 2)
    ctx->pc = 0x1B4EDCu;
    {
        const bool branch_taken_0x1b4edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4edc) {
            ctx->pc = 0x1B4EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4EDCu;
            // 0x1b4ee0: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5244u;
            goto label_1b5244;
        }
    }
    ctx->pc = 0x1B4EE4u;
    // 0x1b4ee4: 0xc06d5a4  jal         func_1B5690
    ctx->pc = 0x1B4EE4u;
    SET_GPR_U32(ctx, 31, 0x1B4EECu);
    ctx->pc = 0x1B4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4EE4u;
    // 0x1b4ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5690u, 0x1B4EE4u, 0x1B4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4EECu;
label_1b4eec:
    // 0x1b4eec: 0xae110130  sw          $s1, 0x130($s0)
    ctx->pc = 0x1b4eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 17));
    // 0x1b4ef0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b4ef4: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1b4ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x1b4ef8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b4efc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4EFCu;
    {
        const bool branch_taken_0x1b4efc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4EFCu;
        // 0x1b4f00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4efc) {
            ctx->pc = 0x1B4F18u;
            goto label_1b4f18;
        }
    }
    ctx->pc = 0x1B4F04u;
    // 0x1b4f04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4f08: 0x0  nop
    ctx->pc = 0x1b4f08u;
    // NOP
    // 0x1b4f0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b4f0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b4f10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4F10u;
    {
        const bool branch_taken_0x1b4f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4f10) {
            ctx->pc = 0x1B4F30u;
            goto label_1b4f30;
        }
    }
    ctx->pc = 0x1B4F18u;
label_1b4f18:
    // 0x1b4f18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b4f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b4f1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b4f20: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b4f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4f24: 0x0  nop
    ctx->pc = 0x1b4f24u;
    // NOP
    // 0x1b4f28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b4f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b4f2c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b4f2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b4f30:
    // 0x1b4f30: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b4f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b4f34: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b4f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b4f38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4f40: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1b4f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1b4f44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b4f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4f48: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b4f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b4f4c: 0xe60100f4  swc1        $f1, 0xF4($s0)
    ctx->pc = 0x1b4f4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x1b4f50: 0xc06dc28  jal         func_1B70A0
    ctx->pc = 0x1B4F50u;
    SET_GPR_U32(ctx, 31, 0x1B4F58u);
    ctx->pc = 0x1B4F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F50u;
    // 0x1b4f54: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70A0u, 0x1B4F50u, 0x1B4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F58u;
label_1b4f58:
    // 0x1b4f58: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1B4F58u;
    {
        const bool branch_taken_0x1b4f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F58u;
        // 0x1b4f5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f58) {
            ctx->pc = 0x1B5248u;
            goto label_1b5248;
        }
    }
    ctx->pc = 0x1B4F60u;
label_1b4f60:
    // 0x1b4f60: 0xc06da92  jal         func_1B6A48
    ctx->pc = 0x1B4F60u;
    SET_GPR_U32(ctx, 31, 0x1B4F68u);
    ctx->pc = 0x1B4F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F60u;
    // 0x1b4f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6A48u, 0x1B4F60u, 0x1B4F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F68u;
label_1b4f68:
    // 0x1b4f68: 0x504000b6  beql        $v0, $zero, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1B4F68u;
    {
        const bool branch_taken_0x1b4f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4f68) {
            ctx->pc = 0x1B4F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4F68u;
            // 0x1b4f6c: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5244u;
            goto label_1b5244;
        }
    }
    ctx->pc = 0x1B4F70u;
    // 0x1b4f70: 0xc06d5a4  jal         func_1B5690
    ctx->pc = 0x1B4F70u;
    SET_GPR_U32(ctx, 31, 0x1B4F78u);
    ctx->pc = 0x1B4F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4F70u;
    // 0x1b4f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5690u, 0x1B4F70u, 0x1B4F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4F78u;
label_1b4f78:
    // 0x1b4f78: 0xae110130  sw          $s1, 0x130($s0)
    ctx->pc = 0x1b4f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 17));
    // 0x1b4f7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b4f80: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1b4f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x1b4f84: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b4f88: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4F88u;
    {
        const bool branch_taken_0x1b4f88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F88u;
        // 0x1b4f8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f88) {
            ctx->pc = 0x1B4FA4u;
            goto label_1b4fa4;
        }
    }
    ctx->pc = 0x1B4F90u;
    // 0x1b4f90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b4f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4f94: 0x0  nop
    ctx->pc = 0x1b4f94u;
    // NOP
    // 0x1b4f98: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b4f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b4f9c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B4F9Cu;
    {
        const bool branch_taken_0x1b4f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4f9c) {
            ctx->pc = 0x1B4FBCu;
            goto label_1b4fbc;
        }
    }
    ctx->pc = 0x1B4FA4u;
label_1b4fa4:
    // 0x1b4fa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b4fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b4fa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b4fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b4fac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b4facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b4fb0: 0x0  nop
    ctx->pc = 0x1b4fb0u;
    // NOP
    // 0x1b4fb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b4fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b4fb8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b4fb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b4fbc:
    // 0x1b4fbc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b4fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b4fc0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b4fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b4fc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4fc8: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x1b4fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x1b4fcc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b4fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4fd0: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x1b4fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x1b4fd4: 0xc6410160  lwc1        $f1, 0x160($s2)
    ctx->pc = 0x1b4fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4fd8: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1B4FD8u;
    {
        const bool branch_taken_0x1b4fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FD8u;
        // 0x1b4fdc: 0xe60100fc  swc1        $f1, 0xFC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fd8) {
            ctx->pc = 0x1B5244u;
            goto label_1b5244;
        }
    }
    ctx->pc = 0x1B4FE0u;
label_1b4fe0:
    // 0x1b4fe0: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x1b4fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1b4fe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4fe8: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1B4FE8u;
    {
        const bool branch_taken_0x1b4fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FE8u;
        // 0x1b4fec: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fe8) {
            ctx->pc = 0x1B50F4u;
            goto label_1b50f4;
        }
    }
    ctx->pc = 0x1B4FF0u;
    // 0x1b4ff0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4FF0u;
    {
        const bool branch_taken_0x1b4ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FF0u;
        // 0x1b4ff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4ff0) {
            ctx->pc = 0x1B5008u;
            goto label_1b5008;
        }
    }
    ctx->pc = 0x1B4FF8u;
    // 0x1b4ff8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B4FF8u;
    {
        const bool branch_taken_0x1b4ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4ff8) {
            ctx->pc = 0x1B501Cu;
            goto label_1b501c;
        }
    }
    ctx->pc = 0x1B5000u;
    // 0x1b5000: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1B5000u;
    {
        const bool branch_taken_0x1b5000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5000u;
        // 0x1b5004: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5000) {
            ctx->pc = 0x1B5248u;
            goto label_1b5248;
        }
    }
    ctx->pc = 0x1B5008u;
label_1b5008:
    // 0x1b5008: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b5008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b500c: 0x5062005f  beql        $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1B500Cu;
    {
        const bool branch_taken_0x1b500c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b500c) {
            ctx->pc = 0x1B5010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B500Cu;
            // 0x1b5010: 0xc60000fc  lwc1        $f0, 0xFC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B518Cu;
            goto label_1b518c;
        }
    }
    ctx->pc = 0x1B5014u;
    // 0x1b5014: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x1B5014u;
    {
        const bool branch_taken_0x1b5014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5014u;
        // 0x1b5018: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5014) {
            ctx->pc = 0x1B5248u;
            goto label_1b5248;
        }
    }
    ctx->pc = 0x1B501Cu;
label_1b501c:
    // 0x1b501c: 0xc06d34c  jal         func_1B4D30
    ctx->pc = 0x1B501Cu;
    SET_GPR_U32(ctx, 31, 0x1B5024u);
    ctx->pc = 0x1B5020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B501Cu;
    // 0x1b5020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D30u, 0x1B501Cu, 0x1B5024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5024u;
label_1b5024:
    // 0x1b5024: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B5024u;
    {
        const bool branch_taken_0x1b5024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5024) {
            ctx->pc = 0x1B508Cu;
            goto label_1b508c;
        }
    }
    ctx->pc = 0x1B502Cu;
    // 0x1b502c: 0xc06db94  jal         func_1B6E50
    ctx->pc = 0x1B502Cu;
    SET_GPR_U32(ctx, 31, 0x1B5034u);
    ctx->pc = 0x1B5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B502Cu;
    // 0x1b5030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E50u, 0x1B502Cu, 0x1B5034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5034u;
label_1b5034:
    // 0x1b5034: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B5034u;
    {
        const bool branch_taken_0x1b5034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5034) {
            ctx->pc = 0x1B508Cu;
            goto label_1b508c;
        }
    }
    ctx->pc = 0x1B503Cu;
    // 0x1b503c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b5040: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B5040u;
    {
        const bool branch_taken_0x1b5040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5040u;
        // 0x1b5044: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5040) {
            ctx->pc = 0x1B507Cu;
            goto label_1b507c;
        }
    }
    ctx->pc = 0x1B5048u;
    // 0x1b5048: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b5048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b504c: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x1b504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1b5050: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x1b5050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x1b5054: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5054u;
    {
        const bool branch_taken_0x1b5054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5054u;
        // 0x1b5058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5054) {
            ctx->pc = 0x1B5070u;
            goto label_1b5070;
        }
    }
    ctx->pc = 0x1B505Cu;
    // 0x1b505c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1b505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1b5060: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5060u;
    {
        const bool branch_taken_0x1b5060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5060u;
        // 0x1b5064: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5060) {
            ctx->pc = 0x1B5070u;
            goto label_1b5070;
        }
    }
    ctx->pc = 0x1B5068u;
    // 0x1b5068: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B5068u;
    {
        const bool branch_taken_0x1b5068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5068) {
            ctx->pc = 0x1B5074u;
            goto label_1b5074;
        }
    }
    ctx->pc = 0x1B5070u;
label_1b5070:
    // 0x1b5070: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b5070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5074:
    // 0x1b5074: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5074u;
    {
        const bool branch_taken_0x1b5074 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5074) {
            ctx->pc = 0x1B508Cu;
            goto label_1b508c;
        }
    }
    ctx->pc = 0x1B507Cu;
label_1b507c:
    // 0x1b507c: 0xc06dc28  jal         func_1B70A0
    ctx->pc = 0x1B507Cu;
    SET_GPR_U32(ctx, 31, 0x1B5084u);
    ctx->pc = 0x1B5080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B507Cu;
    // 0x1b5080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70A0u, 0x1B507Cu, 0x1B5084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5084u;
label_1b5084:
    // 0x1b5084: 0x54400070  bnel        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x1B5084u;
    {
        const bool branch_taken_0x1b5084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5084) {
            ctx->pc = 0x1B5088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5084u;
            // 0x1b5088: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5248u;
            goto label_1b5248;
        }
    }
    ctx->pc = 0x1B508Cu;
label_1b508c:
    // 0x1b508c: 0xc06d5a4  jal         func_1B5690
    ctx->pc = 0x1B508Cu;
    SET_GPR_U32(ctx, 31, 0x1B5094u);
    ctx->pc = 0x1B5090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B508Cu;
    // 0x1b5090: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5690u, 0x1B508Cu, 0x1B5094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5094u;
label_1b5094:
    // 0x1b5094: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b5094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b5098: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b5098u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b509c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B509Cu;
    {
        const bool branch_taken_0x1b509c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B509Cu;
        // 0x1b50a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b509c) {
            ctx->pc = 0x1B50B8u;
            goto label_1b50b8;
        }
    }
    ctx->pc = 0x1B50A4u;
    // 0x1b50a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b50a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b50a8: 0x0  nop
    ctx->pc = 0x1b50a8u;
    // NOP
    // 0x1b50ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b50acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b50b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B50B0u;
    {
        const bool branch_taken_0x1b50b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b50b0) {
            ctx->pc = 0x1B50D0u;
            goto label_1b50d0;
        }
    }
    ctx->pc = 0x1B50B8u;
label_1b50b8:
    // 0x1b50b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b50b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b50bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b50bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b50c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b50c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b50c4: 0x0  nop
    ctx->pc = 0x1b50c4u;
    // NOP
    // 0x1b50c8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b50c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b50cc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b50ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b50d0:
    // 0x1b50d0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b50d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b50d4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b50d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b50d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b50d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b50dc: 0xc6410158  lwc1        $f1, 0x158($s2)
    ctx->pc = 0x1b50dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b50e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b50e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b50e4: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x1b50e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x1b50e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b50e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b50ec: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1B50ECu;
    {
        const bool branch_taken_0x1b50ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50ECu;
        // 0x1b50f0: 0xe6000108  swc1        $f0, 0x108($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50ec) {
            ctx->pc = 0x1B5244u;
            goto label_1b5244;
        }
    }
    ctx->pc = 0x1B50F4u;
label_1b50f4:
    // 0x1b50f4: 0xc06d34c  jal         func_1B4D30
    ctx->pc = 0x1B50F4u;
    SET_GPR_U32(ctx, 31, 0x1B50FCu);
    ctx->pc = 0x1B50F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B50F4u;
    // 0x1b50f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D30u, 0x1B50F4u, 0x1B50FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B50FCu;
label_1b50fc:
    // 0x1b50fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B50FCu;
    {
        const bool branch_taken_0x1b50fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b50fc) {
            ctx->pc = 0x1B5124u;
            goto label_1b5124;
        }
    }
    ctx->pc = 0x1B5104u;
    // 0x1b5104: 0xc06db94  jal         func_1B6E50
    ctx->pc = 0x1B5104u;
    SET_GPR_U32(ctx, 31, 0x1B510Cu);
    ctx->pc = 0x1B5108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5104u;
    // 0x1b5108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E50u, 0x1B5104u, 0x1B510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B510Cu;
label_1b510c:
    // 0x1b510c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B510Cu;
    {
        const bool branch_taken_0x1b510c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b510c) {
            ctx->pc = 0x1B5124u;
            goto label_1b5124;
        }
    }
    ctx->pc = 0x1B5114u;
    // 0x1b5114: 0xc06dc28  jal         func_1B70A0
    ctx->pc = 0x1B5114u;
    SET_GPR_U32(ctx, 31, 0x1B511Cu);
    ctx->pc = 0x1B5118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5114u;
    // 0x1b5118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B70A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B70A0u, 0x1B5114u, 0x1B511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B511Cu;
label_1b511c:
    // 0x1b511c: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x1B511Cu;
    {
        const bool branch_taken_0x1b511c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b511c) {
            ctx->pc = 0x1B5120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B511Cu;
            // 0x1b5120: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5248u;
            goto label_1b5248;
        }
    }
    ctx->pc = 0x1B5124u;
label_1b5124:
    // 0x1b5124: 0xc06d5a4  jal         func_1B5690
    ctx->pc = 0x1B5124u;
    SET_GPR_U32(ctx, 31, 0x1B512Cu);
    ctx->pc = 0x1B5128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5124u;
    // 0x1b5128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5690u, 0x1B5124u, 0x1B512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B512Cu;
label_1b512c:
    // 0x1b512c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b5130: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b5130u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b5134: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5134u;
    {
        const bool branch_taken_0x1b5134 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B5138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5134u;
        // 0x1b5138: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5134) {
            ctx->pc = 0x1B5150u;
            goto label_1b5150;
        }
    }
    ctx->pc = 0x1B513Cu;
    // 0x1b513c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b513cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b5140: 0x0  nop
    ctx->pc = 0x1b5140u;
    // NOP
    // 0x1b5144: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5148: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5148u;
    {
        const bool branch_taken_0x1b5148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5148) {
            ctx->pc = 0x1B5168u;
            goto label_1b5168;
        }
    }
    ctx->pc = 0x1B5150u;
label_1b5150:
    // 0x1b5150: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b5150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b5154: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5158: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b5158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b515c: 0x0  nop
    ctx->pc = 0x1b515cu;
    // NOP
    // 0x1b5160: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b5160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b5164: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b5164u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b5168:
    // 0x1b5168: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b5168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b516c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b516cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b5170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5174: 0xc641015c  lwc1        $f1, 0x15C($s2)
    ctx->pc = 0x1b5174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5178: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b5178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b517c: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x1b517cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x1b5180: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b5180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b5184: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1B5184u;
    {
        const bool branch_taken_0x1b5184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5184u;
        // 0x1b5188: 0xe600010c  swc1        $f0, 0x10C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5184) {
            ctx->pc = 0x1B5244u;
            goto label_1b5244;
        }
    }
    ctx->pc = 0x1B518Cu;
label_1b518c:
    // 0x1b518c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b518cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b5190: 0xc60100ec  lwc1        $f1, 0xEC($s0)
    ctx->pc = 0x1b5190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5194: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b5194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b5198: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5198u;
    {
        const bool branch_taken_0x1b5198 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5198u;
        // 0x1b519c: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5198) {
            ctx->pc = 0x1B51B4u;
            goto label_1b51b4;
        }
    }
    ctx->pc = 0x1B51A0u;
    // 0x1b51a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b51a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b51a4: 0x0  nop
    ctx->pc = 0x1b51a4u;
    // NOP
    // 0x1b51a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b51a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b51ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B51ACu;
    {
        const bool branch_taken_0x1b51ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b51ac) {
            ctx->pc = 0x1B51D0u;
            goto label_1b51d0;
        }
    }
    ctx->pc = 0x1B51B4u;
label_1b51b4:
    // 0x1b51b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b51b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b51b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b51b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b51bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b51bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b51c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b51c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b51c4: 0x0  nop
    ctx->pc = 0x1b51c4u;
    // NOP
    // 0x1b51c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b51c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b51cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b51ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b51d0:
    // 0x1b51d0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b51d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b51d4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b51d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b51d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b51d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b51dc: 0x0  nop
    ctx->pc = 0x1b51dcu;
    // NOP
    // 0x1b51e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b51e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b51e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b51e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b51e8: 0x0  nop
    ctx->pc = 0x1b51e8u;
    // NOP
    // 0x1b51ec: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1B51ECu;
    {
        const bool branch_taken_0x1b51ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b51ec) {
            ctx->pc = 0x1B51F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B51ECu;
            // 0x1b51f0: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5200u;
            goto label_1b5200;
        }
    }
    ctx->pc = 0x1B51F4u;
    // 0x1b51f4: 0xc06d5a4  jal         func_1B5690
    ctx->pc = 0x1B51F4u;
    SET_GPR_U32(ctx, 31, 0x1B51FCu);
    ctx->pc = 0x1B51F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51F4u;
    // 0x1b51f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5690u, 0x1B51F4u, 0x1B51FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B51FCu;
label_1b51fc:
    // 0x1b51fc: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1b51fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b5200:
    // 0x1b5200: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x1b5200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x1b5204: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x1b5204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1b5208: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x1b5208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x1b520c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1b520cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1b5210: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x1b5210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1b5214: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5214u;
    {
        const bool branch_taken_0x1b5214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5214u;
        // 0x1b5218: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5214) {
            ctx->pc = 0x1B5238u;
            goto label_1b5238;
        }
    }
    ctx->pc = 0x1B521Cu;
    // 0x1b521c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1b521cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1b5220: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1b5220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b5224: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5224u;
    {
        const bool branch_taken_0x1b5224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B5228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5224u;
        // 0x1b5228: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5224) {
            ctx->pc = 0x1B5238u;
            goto label_1b5238;
        }
    }
    ctx->pc = 0x1B522Cu;
    // 0x1b522c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1b522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b5230: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b5230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b5234: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1b5234u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b5238:
    // 0x1b5238: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5238u;
    {
        const bool branch_taken_0x1b5238 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5238) {
            ctx->pc = 0x1B523Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5238u;
            // 0x1b523c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5248u;
            goto label_1b5248;
        }
    }
    ctx->pc = 0x1B5240u;
    // 0x1b5240: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x1b5240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
label_1b5244:
    // 0x1b5244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5248:
    // 0x1b5248: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b524c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b524cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5250: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b5250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5254: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5254u;
        // 0x1b5258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B525Cu;
    // 0x1b525c: 0x0  nop
    ctx->pc = 0x1b525cu;
    // NOP
    ctx->pc = 0x1b5260u;
}
