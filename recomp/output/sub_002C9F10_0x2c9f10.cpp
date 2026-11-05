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

// Function: sub_002C9F10
// Address: 0x2c9f10 - 0x2ca080
void sub_002C9F10_0x2c9f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9F10_0x2c9f10");
#endif

    switch (ctx->pc) {
        case 0x2c9f40u: goto label_2c9f40;
        case 0x2c9f60u: goto label_2c9f60;
        case 0x2c9f80u: goto label_2c9f80;
        case 0x2ca00cu: goto label_2ca00c;
        case 0x2ca040u: goto label_2ca040;
        case 0x2ca060u: goto label_2ca060;
        default: break;
    }

    ctx->pc = 0x2c9f10u;

    // 0x2c9f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c9f14: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2c9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2c9f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9f1c: 0x8c62b420  lw          $v0, -0x4BE0($v1)
    ctx->pc = 0x2c9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB420u));
    // 0x2c9f20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c9f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c9f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c9f28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c9f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c9f2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c9f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c9f30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9F30u;
    {
        const bool branch_taken_0x2c9f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F30u;
        // 0x2c9f34: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f30) {
            ctx->pc = 0x2C9F40u;
            goto label_2c9f40;
        }
    }
    ctx->pc = 0x2C9F38u;
    // 0x2c9f38: 0xc0b277a  jal         func_2C9DE8
    ctx->pc = 0x2C9F38u;
    SET_GPR_U32(ctx, 31, 0x2C9F40u);
    ctx->pc = 0x2C9DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9DE8u, 0x2C9F38u, 0x2C9F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9F40u;
label_2c9f40:
    // 0x2c9f40: 0x109302  srl         $s2, $s0, 12
    ctx->pc = 0x2c9f40u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 16), 12));
    // 0x2c9f44: 0x24021800  addiu       $v0, $zero, 0x1800
    ctx->pc = 0x2c9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x2c9f48: 0x528823  subu        $s1, $v0, $s2
    ctx->pc = 0x2c9f48u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c9f4c: 0x6200017  bltz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C9F4Cu;
    {
        const bool branch_taken_0x2c9f4c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2C9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F4Cu;
        // 0x2c9f50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f4c) {
            ctx->pc = 0x2C9FACu;
            goto label_2c9fac;
        }
    }
    ctx->pc = 0x2C9F54u;
    // 0x2c9f54: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c9f58: 0x24455d50  addiu       $a1, $v0, 0x5D50
    ctx->pc = 0x2c9f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23888));
    // 0x2c9f5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c9f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c9f60:
    // 0x2c9f60: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2C9F60u;
    {
        const bool branch_taken_0x2c9f60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F60u;
        // 0x2c9f64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f60) {
            ctx->pc = 0x2C9F98u;
            goto label_2c9f98;
        }
    }
    ctx->pc = 0x2C9F68u;
    // 0x2c9f68: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x2c9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2c9f6c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2c9f6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c9f70: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C9F70u;
    {
        const bool branch_taken_0x2c9f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f70) {
            ctx->pc = 0x2C9F98u;
            goto label_2c9f98;
        }
    }
    ctx->pc = 0x2C9F78u;
    // 0x2c9f78: 0x2261821  addu        $v1, $s1, $a2
    ctx->pc = 0x2c9f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2c9f7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c9f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2c9f80:
    // 0x2c9f80: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x2c9f80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2c9f84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9F84u;
    {
        const bool branch_taken_0x2c9f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9F84u;
        // 0x2c9f88: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f84) {
            ctx->pc = 0x2C9F98u;
            goto label_2c9f98;
        }
    }
    ctx->pc = 0x2C9F8Cu;
    // 0x2c9f8c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2c9f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c9f90: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C9F90u;
    {
        const bool branch_taken_0x2c9f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f90) {
            ctx->pc = 0x2C9F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9F90u;
            // 0x2c9f94: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9f80;
        }
    }
    ctx->pc = 0x2C9F98u;
label_2c9f98:
    // 0x2c9f98: 0x50920004  beql        $a0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9F98u;
    {
        const bool branch_taken_0x2c9f98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x2c9f98) {
            ctx->pc = 0x2C9F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9F98u;
            // 0x2c9f9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9FACu;
            goto label_2c9fac;
        }
    }
    ctx->pc = 0x2C9FA0u;
    // 0x2c9fa0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2c9fa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2c9fa4: 0x621ffee  bgez        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C9FA4u;
    {
        const bool branch_taken_0x2c9fa4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2c9fa4) {
            ctx->pc = 0x2C9F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9f60;
        }
    }
    ctx->pc = 0x2C9FACu;
label_2c9fac:
    // 0x2c9fac: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9FACu;
    {
        const bool branch_taken_0x2c9fac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9fac) {
            ctx->pc = 0x2C9FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9FACu;
            // 0x2c9fb0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9FBCu;
            goto label_2c9fbc;
        }
    }
    ctx->pc = 0x2C9FB4u;
    // 0x2c9fb4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2C9FB4u;
    {
        const bool branch_taken_0x2c9fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9fb4) {
            ctx->pc = 0x2C9FECu;
            goto label_2c9fec;
        }
    }
    ctx->pc = 0x2C9FBCu;
label_2c9fbc:
    // 0x2c9fbc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2c9fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2c9fc0: 0x8c44b430  lw          $a0, -0x4BD0($v0)
    ctx->pc = 0x2c9fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947888)));
    // 0x2c9fc4: 0x111b00  sll         $v1, $s1, 12
    ctx->pc = 0x2c9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 12));
    // 0x2c9fc8: 0x8ca2b434  lw          $v0, -0x4BCC($a1)
    ctx->pc = 0x2c9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294947892)));
    // 0x2c9fcc: 0x839821  addu        $s3, $a0, $v1
    ctx->pc = 0x2c9fccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c9fd0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2c9fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9fd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9FD4u;
    {
        const bool branch_taken_0x2c9fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FD4u;
        // 0x2c9fd8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9fd4) {
            ctx->pc = 0x2C9FF8u;
            goto label_2c9ff8;
        }
    }
    ctx->pc = 0x2C9FDCu;
    // 0x2c9fdc: 0x8c62b41c  lw          $v0, -0x4BE4($v1)
    ctx->pc = 0x2c9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947868)));
    // 0x2c9fe0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2c9fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9fe4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9FE4u;
    {
        const bool branch_taken_0x2c9fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9fe4) {
            ctx->pc = 0x2C9FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9FE4u;
            // 0x2c9fe8: 0xacb3b434  sw          $s3, -0x4BCC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4294947892), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9FF8u;
            goto label_2c9ff8;
        }
    }
    ctx->pc = 0x2C9FECu;
label_2c9fec:
    // 0x2c9fec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c9fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9ff0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C9FF0u;
    {
        const bool branch_taken_0x2c9ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9FF0u;
        // 0x2c9ff4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9ff0) {
            ctx->pc = 0x2CA064u;
            goto label_2ca064;
        }
    }
    ctx->pc = 0x2C9FF8u;
label_2c9ff8:
    // 0x2c9ff8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2c9ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2c9ffc: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2c9ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2ca000: 0xde04b428  ld          $a0, -0x4BD8($s0)
    ctx->pc = 0x2ca000u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x3FB428u));
    // 0x2ca004: 0xc0f49ea  jal         func_3D27A8
    ctx->pc = 0x2CA004u;
    SET_GPR_U32(ctx, 31, 0x2CA00Cu);
    ctx->pc = 0x2CA008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA004u;
    // 0x2ca008: 0x64840001  daddiu      $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D27A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D27A8u, 0x2CA004u, 0x2CA00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA00Cu;
label_2ca00c:
    // 0x2ca00c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ca00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca010: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CA010u;
    {
        const bool branch_taken_0x2ca010 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA010u;
        // 0x2ca014: 0xfe04b428  sd          $a0, -0x4BD8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4294947880), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca010) {
            ctx->pc = 0x2CA058u;
            goto label_2ca058;
        }
    }
    ctx->pc = 0x2CA018u;
    // 0x2ca018: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2ca018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2ca01c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2ca01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2ca020: 0x24425d50  addiu       $v0, $v0, 0x5D50
    ctx->pc = 0x2ca020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23888));
    // 0x2ca024: 0x24637550  addiu       $v1, $v1, 0x7550
    ctx->pc = 0x2ca024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30032));
    // 0x2ca028: 0x2223021  addu        $a2, $s1, $v0
    ctx->pc = 0x2ca028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2ca02c: 0x64840061  daddiu      $a0, $a0, 0x61
    ctx->pc = 0x2ca02cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)97);
    // 0x2ca030: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x2ca030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ca034: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2ca034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2ca038: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ca038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ca03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ca040:
    // 0x2ca040: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2ca040u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ca044: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2ca044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ca048: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2ca048u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ca04c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ca04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ca050: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CA050u;
    {
        const bool branch_taken_0x2ca050 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA050u;
        // 0x2ca054: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca050) {
            ctx->pc = 0x2CA040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca040;
        }
    }
    ctx->pc = 0x2CA058u;
label_2ca058:
    // 0x2ca058: 0xc0b2858  jal         func_2CA160
    ctx->pc = 0x2CA058u;
    SET_GPR_U32(ctx, 31, 0x2CA060u);
    ctx->pc = 0x2CA05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA058u;
    // 0x2ca05c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA160u, 0x2CA058u, 0x2CA060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA060u;
label_2ca060:
    // 0x2ca060: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ca060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ca064:
    // 0x2ca064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca06c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ca06cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca070: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ca070u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ca074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ca074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ca078: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA078u;
        // 0x2ca07c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA080u;
}
