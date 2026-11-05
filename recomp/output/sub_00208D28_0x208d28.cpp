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

// Function: sub_00208D28
// Address: 0x208d28 - 0x208eb8
void sub_00208D28_0x208d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208D28_0x208d28");
#endif

    switch (ctx->pc) {
        case 0x208d90u: goto label_208d90;
        case 0x208dc0u: goto label_208dc0;
        case 0x208dd4u: goto label_208dd4;
        case 0x208de4u: goto label_208de4;
        case 0x208e08u: goto label_208e08;
        case 0x208e50u: goto label_208e50;
        case 0x208e58u: goto label_208e58;
        case 0x208e7cu: goto label_208e7c;
        case 0x208e84u: goto label_208e84;
        default: break;
    }

    ctx->pc = 0x208d28u;

    // 0x208d28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x208d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x208d2c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x208d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x208d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x208d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208d34: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x208d34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208d38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208d3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x208d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x208d40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x208d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x208d44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x208d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x208d48: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x208d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x208d4c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x208d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x208d50: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x208d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x208d54: 0x8ec533c4  lw          $a1, 0x33C4($s6)
    ctx->pc = 0x208d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 13252)));
    // 0x208d58: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x208D58u;
    {
        const bool branch_taken_0x208d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D58u;
        // 0x208d5c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d58) {
            ctx->pc = 0x208E88u;
            goto label_208e88;
        }
    }
    ctx->pc = 0x208D60u;
    // 0x208d60: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x208d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x208d64: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x208d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x208d68: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x208d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x208d6c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x208d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x208d70: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x208d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x208d74: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x208d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x208d78: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x208d78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x208d7c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x208D7Cu;
    {
        const bool branch_taken_0x208d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D7Cu;
        // 0x208d80: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d7c) {
            ctx->pc = 0x208E30u;
            goto label_208e30;
        }
    }
    ctx->pc = 0x208D84u;
    // 0x208d84: 0x3c15cccc  lui         $s5, 0xCCCC
    ctx->pc = 0x208d84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52428 << 16));
    // 0x208d88: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x208d88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x208d8c: 0x36b5cccd  ori         $s5, $s5, 0xCCCD
    ctx->pc = 0x208d8cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)52429);
label_208d90:
    // 0x208d90: 0x2771818  mult        $v1, $s3, $s7
    ctx->pc = 0x208d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x208d94: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x208d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208d98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208d9c: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x208d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x208da0: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x208DA0u;
    {
        const bool branch_taken_0x208da0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x208DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DA0u;
        // 0x208da4: 0x26740001  addiu       $s4, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208da0) {
            ctx->pc = 0x208DE4u;
            goto label_208de4;
        }
    }
    ctx->pc = 0x208DA8u;
    // 0x208da8: 0x8e22fff0  lw          $v0, -0x10($s1)
    ctx->pc = 0x208da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967280)));
    // 0x208dac: 0x571818  mult        $v1, $v0, $s7
    ctx->pc = 0x208dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x208db0: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x208db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x208db4: 0x12300009  beq         $s1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x208DB4u;
    {
        const bool branch_taken_0x208db4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x208DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208DB4u;
        // 0x208db8: 0x2632fff0  addiu       $s2, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208db4) {
            ctx->pc = 0x208DDCu;
            goto label_208ddc;
        }
    }
    ctx->pc = 0x208DBCu;
    // 0x208dbc: 0x2610ffec  addiu       $s0, $s0, -0x14
    ctx->pc = 0x208dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_208dc0:
    // 0x208dc0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x208dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x208dc4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208DC4u;
    {
        const bool branch_taken_0x208dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208dc4) {
            ctx->pc = 0x208DD4u;
            goto label_208dd4;
        }
    }
    ctx->pc = 0x208DCCu;
    // 0x208dcc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x208DCCu;
    SET_GPR_U32(ctx, 31, 0x208DD4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x208DCCu, 0x208DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DD4u;
label_208dd4:
    // 0x208dd4: 0x5630fffa  bnel        $s1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x208DD4u;
    {
        const bool branch_taken_0x208dd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x208dd4) {
            ctx->pc = 0x208DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208DD4u;
            // 0x208dd8: 0x2610ffec  addiu       $s0, $s0, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208dc0;
        }
    }
    ctx->pc = 0x208DDCu;
label_208ddc:
    // 0x208ddc: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x208DDCu;
    SET_GPR_U32(ctx, 31, 0x208DE4u);
    ctx->pc = 0x208DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208DDCu;
    // 0x208de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x208DDCu, 0x208DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208DE4u;
label_208de4:
    // 0x208de4: 0x2772018  mult        $a0, $s3, $s7
    ctx->pc = 0x208de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x208de8: 0x8ec333c4  lw          $v1, 0x33C4($s6)
    ctx->pc = 0x208de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 13252)));
    // 0x208dec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x208decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208df0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x208df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x208df4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x208df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x208df8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x208DF8u;
    {
        const bool branch_taken_0x208df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208df8) {
            ctx->pc = 0x208DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208DF8u;
            // 0x208dfc: 0x8ec233c4  lw          $v0, 0x33C4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 13252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208E0Cu;
            goto label_208e0c;
        }
    }
    ctx->pc = 0x208E00u;
    // 0x208e00: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x208E00u;
    SET_GPR_U32(ctx, 31, 0x208E08u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x208E00u, 0x208E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E08u;
label_208e08:
    // 0x208e08: 0x8ec233c4  lw          $v0, 0x33C4($s6)
    ctx->pc = 0x208e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 13252)));
label_208e0c:
    // 0x208e0c: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x208e0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x208e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x208e14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x208e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208e18: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x208e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208e1c: 0x751818  mult        $v1, $v1, $s5
    ctx->pc = 0x208e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x208e20: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x208e20u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x208e24: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x208e24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x208e28: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x208E28u;
    {
        const bool branch_taken_0x208e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x208E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E28u;
        // 0x208e2c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e28) {
            ctx->pc = 0x208D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208d90;
        }
    }
    ctx->pc = 0x208E30u;
label_208e30:
    // 0x208e30: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x208e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208e34: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x208E34u;
    {
        const bool branch_taken_0x208e34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E34u;
        // 0x208e38: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e34) {
            ctx->pc = 0x208E84u;
            goto label_208e84;
        }
    }
    ctx->pc = 0x208E3Cu;
    // 0x208e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e40: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x208E40u;
    {
        const bool branch_taken_0x208e40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x208e40) {
            ctx->pc = 0x208E6Cu;
            goto label_208e6c;
        }
    }
    ctx->pc = 0x208E48u;
    // 0x208e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e4c: 0x0  nop
    ctx->pc = 0x208e4cu;
    // NOP
label_208e50:
    // 0x208e50: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x208E50u;
    SET_GPR_U32(ctx, 31, 0x208E58u);
    ctx->pc = 0x208E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E50u;
    // 0x208e54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x208E50u, 0x208E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E58u;
label_208e58:
    // 0x208e58: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x208e58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x208e5c: 0x0  nop
    ctx->pc = 0x208e5cu;
    // NOP
    // 0x208e60: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x208E60u;
    {
        const bool branch_taken_0x208e60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x208E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E60u;
        // 0x208e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e60) {
            ctx->pc = 0x208E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208e50;
        }
    }
    ctx->pc = 0x208E68u;
    // 0x208e68: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x208e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_208e6c:
    // 0x208e6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208E6Cu;
    {
        const bool branch_taken_0x208e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x208e6c) {
            ctx->pc = 0x208E7Cu;
            goto label_208e7c;
        }
    }
    ctx->pc = 0x208E74u;
    // 0x208e74: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x208E74u;
    SET_GPR_U32(ctx, 31, 0x208E7Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x208E74u, 0x208E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E7Cu;
label_208e7c:
    // 0x208e7c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x208E7Cu;
    SET_GPR_U32(ctx, 31, 0x208E84u);
    ctx->pc = 0x208E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E7Cu;
    // 0x208e80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x208E7Cu, 0x208E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E84u;
label_208e84:
    // 0x208e84: 0xaec033c4  sw          $zero, 0x33C4($s6)
    ctx->pc = 0x208e84u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 13252), GPR_U32(ctx, 0));
label_208e88:
    // 0x208e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x208e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208e90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x208e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208e94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x208e94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208e98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x208e98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208e9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x208e9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x208ea0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x208ea0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x208ea4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x208ea4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x208ea8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x208ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208eac: 0x3e00008  jr          $ra
    ctx->pc = 0x208EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EACu;
        // 0x208eb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208EB4u;
    // 0x208eb4: 0x0  nop
    ctx->pc = 0x208eb4u;
    // NOP
    ctx->pc = 0x208eb8u;
}
