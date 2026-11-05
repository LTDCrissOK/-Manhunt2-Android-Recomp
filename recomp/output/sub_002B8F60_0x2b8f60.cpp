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

// Function: sub_002B8F60
// Address: 0x2b8f60 - 0x2b9088
void sub_002B8F60_0x2b8f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8F60_0x2b8f60");
#endif

    switch (ctx->pc) {
        case 0x2b8f60u: goto label_2b8f60;
        case 0x2b8f64u: goto label_2b8f64;
        case 0x2b8f68u: goto label_2b8f68;
        case 0x2b8f6cu: goto label_2b8f6c;
        case 0x2b8f70u: goto label_2b8f70;
        case 0x2b8f74u: goto label_2b8f74;
        case 0x2b8f78u: goto label_2b8f78;
        case 0x2b8f7cu: goto label_2b8f7c;
        case 0x2b8f80u: goto label_2b8f80;
        case 0x2b8f84u: goto label_2b8f84;
        case 0x2b8f88u: goto label_2b8f88;
        case 0x2b8f8cu: goto label_2b8f8c;
        case 0x2b8f90u: goto label_2b8f90;
        case 0x2b8f94u: goto label_2b8f94;
        case 0x2b8f98u: goto label_2b8f98;
        case 0x2b8f9cu: goto label_2b8f9c;
        case 0x2b8fa0u: goto label_2b8fa0;
        case 0x2b8fa4u: goto label_2b8fa4;
        case 0x2b8fa8u: goto label_2b8fa8;
        case 0x2b8facu: goto label_2b8fac;
        case 0x2b8fb0u: goto label_2b8fb0;
        case 0x2b8fb4u: goto label_2b8fb4;
        case 0x2b8fb8u: goto label_2b8fb8;
        case 0x2b8fbcu: goto label_2b8fbc;
        case 0x2b8fc0u: goto label_2b8fc0;
        case 0x2b8fc4u: goto label_2b8fc4;
        case 0x2b8fc8u: goto label_2b8fc8;
        case 0x2b8fccu: goto label_2b8fcc;
        case 0x2b8fd0u: goto label_2b8fd0;
        case 0x2b8fd4u: goto label_2b8fd4;
        case 0x2b8fd8u: goto label_2b8fd8;
        case 0x2b8fdcu: goto label_2b8fdc;
        case 0x2b8fe0u: goto label_2b8fe0;
        case 0x2b8fe4u: goto label_2b8fe4;
        case 0x2b8fe8u: goto label_2b8fe8;
        case 0x2b8fecu: goto label_2b8fec;
        case 0x2b8ff0u: goto label_2b8ff0;
        case 0x2b8ff4u: goto label_2b8ff4;
        case 0x2b8ff8u: goto label_2b8ff8;
        case 0x2b8ffcu: goto label_2b8ffc;
        case 0x2b9000u: goto label_2b9000;
        case 0x2b9004u: goto label_2b9004;
        case 0x2b9008u: goto label_2b9008;
        case 0x2b900cu: goto label_2b900c;
        case 0x2b9010u: goto label_2b9010;
        case 0x2b9014u: goto label_2b9014;
        case 0x2b9018u: goto label_2b9018;
        case 0x2b901cu: goto label_2b901c;
        case 0x2b9020u: goto label_2b9020;
        case 0x2b9024u: goto label_2b9024;
        case 0x2b9028u: goto label_2b9028;
        case 0x2b902cu: goto label_2b902c;
        case 0x2b9030u: goto label_2b9030;
        case 0x2b9034u: goto label_2b9034;
        case 0x2b9038u: goto label_2b9038;
        case 0x2b903cu: goto label_2b903c;
        case 0x2b9040u: goto label_2b9040;
        case 0x2b9044u: goto label_2b9044;
        case 0x2b9048u: goto label_2b9048;
        case 0x2b904cu: goto label_2b904c;
        case 0x2b9050u: goto label_2b9050;
        case 0x2b9054u: goto label_2b9054;
        case 0x2b9058u: goto label_2b9058;
        case 0x2b905cu: goto label_2b905c;
        case 0x2b9060u: goto label_2b9060;
        case 0x2b9064u: goto label_2b9064;
        case 0x2b9068u: goto label_2b9068;
        case 0x2b906cu: goto label_2b906c;
        case 0x2b9070u: goto label_2b9070;
        case 0x2b9074u: goto label_2b9074;
        case 0x2b9078u: goto label_2b9078;
        case 0x2b907cu: goto label_2b907c;
        case 0x2b9080u: goto label_2b9080;
        case 0x2b9084u: goto label_2b9084;
        default: break;
    }

    ctx->pc = 0x2b8f60u;

label_2b8f60:
    // 0x2b8f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b8f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b8f64:
    // 0x2b8f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b8f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b8f68:
    // 0x2b8f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b8f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b8f6c:
    // 0x2b8f6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b8f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2b8f70:
    // 0x2b8f70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b8f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b8f74:
    // 0x2b8f74: 0xc0a2306  jal         func_288C18
label_2b8f78:
    if (ctx->pc == 0x2B8F78u) {
        ctx->pc = 0x2B8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F74u;
        // 0x2b8f78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F7Cu;
        goto label_2b8f7c;
    }
    ctx->pc = 0x2B8F74u;
    SET_GPR_U32(ctx, 31, 0x2B8F7Cu);
    ctx->pc = 0x2B8F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8F74u;
    // 0x2b8f78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x2B8F74u, 0x2B8F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8F7Cu;
label_2b8f7c:
    // 0x2b8f7c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2b8f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2b8f80:
    // 0x2b8f80: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x2b8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2b8f84:
    // 0x2b8f84: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_2b8f88:
    if (ctx->pc == 0x2B8F88u) {
        ctx->pc = 0x2B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F84u;
        // 0x2b8f88: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F8Cu;
        goto label_2b8f8c;
    }
    ctx->pc = 0x2B8F84u;
    {
        const bool branch_taken_0x2b8f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F84u;
        // 0x2b8f88: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f84) {
            ctx->pc = 0x2B8FB4u;
            goto label_2b8fb4;
        }
    }
    ctx->pc = 0x2B8F8Cu;
label_2b8f8c:
    // 0x2b8f8c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2b8f90:
    if (ctx->pc == 0x2B8F90u) {
        ctx->pc = 0x2B8F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F8Cu;
        // 0x2b8f90: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F94u;
        goto label_2b8f94;
    }
    ctx->pc = 0x2B8F8Cu;
    {
        const bool branch_taken_0x2b8f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F8Cu;
        // 0x2b8f90: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f8c) {
            ctx->pc = 0x2B8FB4u;
            goto label_2b8fb4;
        }
    }
    ctx->pc = 0x2B8F94u;
label_2b8f94:
    // 0x2b8f94: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2b8f98:
    if (ctx->pc == 0x2B8F98u) {
        ctx->pc = 0x2B8F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F94u;
        // 0x2b8f98: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8F9Cu;
        goto label_2b8f9c;
    }
    ctx->pc = 0x2B8F94u;
    {
        const bool branch_taken_0x2b8f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B8F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F94u;
        // 0x2b8f98: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8f94) {
            ctx->pc = 0x2B8FB4u;
            goto label_2b8fb4;
        }
    }
    ctx->pc = 0x2B8F9Cu;
label_2b8f9c:
    // 0x2b8f9c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_2b8fa0:
    if (ctx->pc == 0x2B8FA0u) {
        ctx->pc = 0x2B8FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8F9Cu;
        // 0x2b8fa0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FA4u;
        goto label_2b8fa4;
    }
    ctx->pc = 0x2B8F9Cu;
    {
        const bool branch_taken_0x2b8f9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b8f9c) {
            ctx->pc = 0x2B8FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8F9Cu;
            // 0x2b8fa0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8FBCu;
            goto label_2b8fbc;
        }
    }
    ctx->pc = 0x2B8FA4u;
label_2b8fa4:
    // 0x2b8fa4: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x2b8fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
label_2b8fa8:
    // 0x2b8fa8: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x2b8fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
label_2b8fac:
    // 0x2b8fac: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_2b8fb0:
    if (ctx->pc == 0x2B8FB0u) {
        ctx->pc = 0x2B8FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FACu;
        // 0x2b8fb0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FB4u;
        goto label_2b8fb4;
    }
    ctx->pc = 0x2B8FACu;
    {
        const bool branch_taken_0x2b8fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8fac) {
            ctx->pc = 0x2B8FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8FACu;
            // 0x2b8fb0: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8FBCu;
            goto label_2b8fbc;
        }
    }
    ctx->pc = 0x2B8FB4u;
label_2b8fb4:
    // 0x2b8fb4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2b8fb8:
    // 0x2b8fb8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2b8fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2b8fbc:
    // 0x2b8fbc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2b8fc0:
    if (ctx->pc == 0x2B8FC0u) {
        ctx->pc = 0x2B8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FBCu;
        // 0x2b8fc0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FC4u;
        goto label_2b8fc4;
    }
    ctx->pc = 0x2B8FBCu;
    {
        const bool branch_taken_0x2b8fbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FBCu;
        // 0x2b8fc0: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8fbc) {
            ctx->pc = 0x2B8FD8u;
            goto label_2b8fd8;
        }
    }
    ctx->pc = 0x2B8FC4u;
label_2b8fc4:
    // 0x2b8fc4: 0xc0ae5ec  jal         func_2B97B0
label_2b8fc8:
    if (ctx->pc == 0x2B8FC8u) {
        ctx->pc = 0x2B8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FC4u;
        // 0x2b8fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FCCu;
        goto label_2b8fcc;
    }
    ctx->pc = 0x2B8FC4u;
    SET_GPR_U32(ctx, 31, 0x2B8FCCu);
    ctx->pc = 0x2B8FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FC4u;
    // 0x2b8fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B97B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B97B0u, 0x2B8FC4u, 0x2B8FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FCCu;
label_2b8fcc:
    // 0x2b8fcc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2b8fd0:
    if (ctx->pc == 0x2B8FD0u) {
        ctx->pc = 0x2B8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FCCu;
        // 0x2b8fd0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FD4u;
        goto label_2b8fd4;
    }
    ctx->pc = 0x2B8FCCu;
    {
        const bool branch_taken_0x2b8fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8fcc) {
            ctx->pc = 0x2B8FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8FCCu;
            // 0x2b8fd0: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8FF0u;
            goto label_2b8ff0;
        }
    }
    ctx->pc = 0x2B8FD4u;
label_2b8fd4:
    // 0x2b8fd4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2b8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_2b8fd8:
    // 0x2b8fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b8fdc:
    // 0x2b8fdc: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x2b8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_2b8fe0:
    // 0x2b8fe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b8fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b8fe4:
    // 0x2b8fe4: 0xc0b7082  jal         func_2DC208
label_2b8fe8:
    if (ctx->pc == 0x2B8FE8u) {
        ctx->pc = 0x2B8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FE4u;
        // 0x2b8fe8: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FECu;
        goto label_2b8fec;
    }
    ctx->pc = 0x2B8FE4u;
    SET_GPR_U32(ctx, 31, 0x2B8FECu);
    ctx->pc = 0x2B8FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FE4u;
    // 0x2b8fe8: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2B8FE4u, 0x2B8FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FECu;
label_2b8fec:
    // 0x2b8fec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2b8fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2b8ff0:
    // 0x2b8ff0: 0xc0a2306  jal         func_288C18
label_2b8ff4:
    if (ctx->pc == 0x2B8FF4u) {
        ctx->pc = 0x2B8FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8FF0u;
        // 0x2b8ff4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B8FF8u;
        goto label_2b8ff8;
    }
    ctx->pc = 0x2B8FF0u;
    SET_GPR_U32(ctx, 31, 0x2B8FF8u);
    ctx->pc = 0x2B8FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8FF0u;
    // 0x2b8ff4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x2B8FF0u, 0x2B8FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8FF8u;
label_2b8ff8:
    // 0x2b8ff8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b8ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2b8ffc:
    // 0x2b8ffc: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x2b8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953896)));
label_2b9000:
    // 0x2b9000: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2b9000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2b9004:
    // 0x2b9004: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b9004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9008:
    // 0x2b9008: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2b9008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2b900c:
    // 0x2b900c: 0x40f809  jalr        $v0
label_2b9010:
    if (ctx->pc == 0x2B9010u) {
        ctx->pc = 0x2B9014u;
        goto label_2b9014;
    }
    ctx->pc = 0x2B900Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B9014u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B900Cu, 0x2B9014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9014u;
label_2b9014:
    // 0x2b9014: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2b9014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2b9018:
    // 0x2b9018: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_2b901c:
    if (ctx->pc == 0x2B901Cu) {
        ctx->pc = 0x2B901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9018u;
        // 0x2b901c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9020u;
        goto label_2b9020;
    }
    ctx->pc = 0x2B9018u;
    {
        const bool branch_taken_0x2b9018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9018u;
        // 0x2b901c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9018) {
            ctx->pc = 0x2B9078u;
            goto label_2b9078;
        }
    }
    ctx->pc = 0x2B9020u;
label_2b9020:
    // 0x2b9020: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b9020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2b9024:
    // 0x2b9024: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b9024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b9028:
    // 0x2b9028: 0x8c438ec8  lw          $v1, -0x7138($v0)
    ctx->pc = 0x2b9028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938312)));
label_2b902c:
    // 0x2b902c: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
label_2b9030:
    if (ctx->pc == 0x2B9030u) {
        ctx->pc = 0x2B9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B902Cu;
        // 0x2b9030: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9034u;
        goto label_2b9034;
    }
    ctx->pc = 0x2B902Cu;
    {
        const bool branch_taken_0x2b902c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B9030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B902Cu;
        // 0x2b9030: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b902c) {
            ctx->pc = 0x2B9064u;
            goto label_2b9064;
        }
    }
    ctx->pc = 0x2B9034u;
label_2b9034:
    // 0x2b9034: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2b9034u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2b9038:
    // 0x2b9038: 0x8e04bd50  lw          $a0, -0x42B0($s0)
    ctx->pc = 0x2b9038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
label_2b903c:
    // 0x2b903c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_2b9040:
    if (ctx->pc == 0x2B9040u) {
        ctx->pc = 0x2B9040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B903Cu;
        // 0x2b9040: 0x8e248ec8  lw          $a0, -0x7138($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9044u;
        goto label_2b9044;
    }
    ctx->pc = 0x2B903Cu;
    {
        const bool branch_taken_0x2b903c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b903c) {
            ctx->pc = 0x2B9040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B903Cu;
            // 0x2b9040: 0x8e248ec8  lw          $a0, -0x7138($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9068u;
            goto label_2b9068;
        }
    }
    ctx->pc = 0x2B9044u;
label_2b9044:
    // 0x2b9044: 0xc0b9400  jal         func_2E5000
label_2b9048:
    if (ctx->pc == 0x2B9048u) {
        ctx->pc = 0x2B904Cu;
        goto label_2b904c;
    }
    ctx->pc = 0x2B9044u;
    SET_GPR_U32(ctx, 31, 0x2B904Cu);
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2B9044u, 0x2B904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B904Cu;
label_2b904c:
    // 0x2b904c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2b9050:
    if (ctx->pc == 0x2B9050u) {
        ctx->pc = 0x2B9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B904Cu;
        // 0x2b9050: 0x8e248ec8  lw          $a0, -0x7138($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9054u;
        goto label_2b9054;
    }
    ctx->pc = 0x2B904Cu;
    {
        const bool branch_taken_0x2b904c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b904c) {
            ctx->pc = 0x2B9050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B904Cu;
            // 0x2b9050: 0x8e248ec8  lw          $a0, -0x7138($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9068u;
            goto label_2b9068;
        }
    }
    ctx->pc = 0x2B9054u;
label_2b9054:
    // 0x2b9054: 0xc0c67d6  jal         func_319F58
label_2b9058:
    if (ctx->pc == 0x2B9058u) {
        ctx->pc = 0x2B9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9054u;
        // 0x2b9058: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B905Cu;
        goto label_2b905c;
    }
    ctx->pc = 0x2B9054u;
    SET_GPR_U32(ctx, 31, 0x2B905Cu);
    ctx->pc = 0x2B9058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9054u;
    // 0x2b9058: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x2B9054u, 0x2B905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B905Cu;
label_2b905c:
    // 0x2b905c: 0xc0bb53a  jal         func_2ED4E8
label_2b9060:
    if (ctx->pc == 0x2B9060u) {
        ctx->pc = 0x2B9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B905Cu;
        // 0x2b9060: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9064u;
        goto label_2b9064;
    }
    ctx->pc = 0x2B905Cu;
    SET_GPR_U32(ctx, 31, 0x2B9064u);
    ctx->pc = 0x2B9060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B905Cu;
    // 0x2b9060: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED4E8u, 0x2B905Cu, 0x2B9064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9064u;
label_2b9064:
    // 0x2b9064: 0x8e248ec8  lw          $a0, -0x7138($s1)
    ctx->pc = 0x2b9064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938312)));
label_2b9068:
    // 0x2b9068: 0x38840004  xori        $a0, $a0, 0x4
    ctx->pc = 0x2b9068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
label_2b906c:
    // 0x2b906c: 0xc0c67d6  jal         func_319F58
label_2b9070:
    if (ctx->pc == 0x2B9070u) {
        ctx->pc = 0x2B9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B906Cu;
        // 0x2b9070: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9074u;
        goto label_2b9074;
    }
    ctx->pc = 0x2B906Cu;
    SET_GPR_U32(ctx, 31, 0x2B9074u);
    ctx->pc = 0x2B9070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B906Cu;
    // 0x2b9070: 0x2c840001  sltiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x2B906Cu, 0x2B9074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9074u;
label_2b9074:
    // 0x2b9074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9078:
    // 0x2b9078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b9078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2b907c:
    // 0x2b907c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b907cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9080:
    // 0x2b9080: 0x3e00008  jr          $ra
label_2b9084:
    if (ctx->pc == 0x2B9084u) {
        ctx->pc = 0x2B9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9080u;
        // 0x2b9084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9088u;
        goto label_fallthrough_0x2b9080;
    }
    ctx->pc = 0x2B9080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9080u;
        // 0x2b9084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b9080:
    ctx->pc = 0x2B9088u;
}
