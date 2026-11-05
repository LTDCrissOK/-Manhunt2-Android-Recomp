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

// Function: sub_003EB260
// Address: 0x3eb260 - 0x3eb398
void sub_003EB260_0x3eb260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB260_0x3eb260");
#endif

    switch (ctx->pc) {
        case 0x3eb260u: goto label_3eb260;
        case 0x3eb264u: goto label_3eb264;
        case 0x3eb268u: goto label_3eb268;
        case 0x3eb26cu: goto label_3eb26c;
        case 0x3eb270u: goto label_3eb270;
        case 0x3eb274u: goto label_3eb274;
        case 0x3eb278u: goto label_3eb278;
        case 0x3eb27cu: goto label_3eb27c;
        case 0x3eb280u: goto label_3eb280;
        case 0x3eb284u: goto label_3eb284;
        case 0x3eb288u: goto label_3eb288;
        case 0x3eb28cu: goto label_3eb28c;
        case 0x3eb290u: goto label_3eb290;
        case 0x3eb294u: goto label_3eb294;
        case 0x3eb298u: goto label_3eb298;
        case 0x3eb29cu: goto label_3eb29c;
        case 0x3eb2a0u: goto label_3eb2a0;
        case 0x3eb2a4u: goto label_3eb2a4;
        case 0x3eb2a8u: goto label_3eb2a8;
        case 0x3eb2acu: goto label_3eb2ac;
        case 0x3eb2b0u: goto label_3eb2b0;
        case 0x3eb2b4u: goto label_3eb2b4;
        case 0x3eb2b8u: goto label_3eb2b8;
        case 0x3eb2bcu: goto label_3eb2bc;
        case 0x3eb2c0u: goto label_3eb2c0;
        case 0x3eb2c4u: goto label_3eb2c4;
        case 0x3eb2c8u: goto label_3eb2c8;
        case 0x3eb2ccu: goto label_3eb2cc;
        case 0x3eb2d0u: goto label_3eb2d0;
        case 0x3eb2d4u: goto label_3eb2d4;
        case 0x3eb2d8u: goto label_3eb2d8;
        case 0x3eb2dcu: goto label_3eb2dc;
        case 0x3eb2e0u: goto label_3eb2e0;
        case 0x3eb2e4u: goto label_3eb2e4;
        case 0x3eb2e8u: goto label_3eb2e8;
        case 0x3eb2ecu: goto label_3eb2ec;
        case 0x3eb2f0u: goto label_3eb2f0;
        case 0x3eb2f4u: goto label_3eb2f4;
        case 0x3eb2f8u: goto label_3eb2f8;
        case 0x3eb2fcu: goto label_3eb2fc;
        case 0x3eb300u: goto label_3eb300;
        case 0x3eb304u: goto label_3eb304;
        case 0x3eb308u: goto label_3eb308;
        case 0x3eb30cu: goto label_3eb30c;
        case 0x3eb310u: goto label_3eb310;
        case 0x3eb314u: goto label_3eb314;
        case 0x3eb318u: goto label_3eb318;
        case 0x3eb31cu: goto label_3eb31c;
        case 0x3eb320u: goto label_3eb320;
        case 0x3eb324u: goto label_3eb324;
        case 0x3eb328u: goto label_3eb328;
        case 0x3eb32cu: goto label_3eb32c;
        case 0x3eb330u: goto label_3eb330;
        case 0x3eb334u: goto label_3eb334;
        case 0x3eb338u: goto label_3eb338;
        case 0x3eb33cu: goto label_3eb33c;
        case 0x3eb340u: goto label_3eb340;
        case 0x3eb344u: goto label_3eb344;
        case 0x3eb348u: goto label_3eb348;
        case 0x3eb34cu: goto label_3eb34c;
        case 0x3eb350u: goto label_3eb350;
        case 0x3eb354u: goto label_3eb354;
        case 0x3eb358u: goto label_3eb358;
        case 0x3eb35cu: goto label_3eb35c;
        case 0x3eb360u: goto label_3eb360;
        case 0x3eb364u: goto label_3eb364;
        case 0x3eb368u: goto label_3eb368;
        case 0x3eb36cu: goto label_3eb36c;
        case 0x3eb370u: goto label_3eb370;
        case 0x3eb374u: goto label_3eb374;
        case 0x3eb378u: goto label_3eb378;
        case 0x3eb37cu: goto label_3eb37c;
        case 0x3eb380u: goto label_3eb380;
        case 0x3eb384u: goto label_3eb384;
        case 0x3eb388u: goto label_3eb388;
        case 0x3eb38cu: goto label_3eb38c;
        case 0x3eb390u: goto label_3eb390;
        case 0x3eb394u: goto label_3eb394;
        default: break;
    }

    ctx->pc = 0x3eb260u;

label_3eb260:
    // 0x3eb260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eb260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eb264:
    // 0x3eb264: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eb264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eb268:
    // 0x3eb268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eb268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eb26c:
    // 0x3eb26c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eb26cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb270:
    // 0x3eb270: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eb270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eb274:
    // 0x3eb274: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eb274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eb278:
    // 0x3eb278: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb27c:
    // 0x3eb27c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eb280:
    if (ctx->pc == 0x3EB280u) {
        ctx->pc = 0x3EB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB27Cu;
        // 0x3eb280: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB284u;
        goto label_3eb284;
    }
    ctx->pc = 0x3EB27Cu;
    {
        const bool branch_taken_0x3eb27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB27Cu;
        // 0x3eb280: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb27c) {
            ctx->pc = 0x3EB2FCu;
            goto label_3eb2fc;
        }
    }
    ctx->pc = 0x3EB284u;
label_3eb284:
    // 0x3eb284: 0x0  nop
    ctx->pc = 0x3eb284u;
    // NOP
label_3eb288:
    // 0x3eb288: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb28c:
    // 0x3eb28c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb290:
    // 0x3eb290: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb294:
    if (ctx->pc == 0x3EB294u) {
        ctx->pc = 0x3EB294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB290u;
        // 0x3eb294: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB298u;
        goto label_3eb298;
    }
    ctx->pc = 0x3EB290u;
    {
        const bool branch_taken_0x3eb290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb290) {
            ctx->pc = 0x3EB294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB290u;
            // 0x3eb294: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB2ECu;
            goto label_3eb2ec;
        }
    }
    ctx->pc = 0x3EB298u;
label_3eb298:
    // 0x3eb298: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb29c:
    // 0x3eb29c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb29cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb2a0:
    // 0x3eb2a0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb2a4:
    // 0x3eb2a4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb2a8:
    if (ctx->pc == 0x3EB2A8u) {
        ctx->pc = 0x3EB2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2A4u;
        // 0x3eb2a8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB2ACu;
        goto label_3eb2ac;
    }
    ctx->pc = 0x3EB2A4u;
    {
        const bool branch_taken_0x3eb2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb2a4) {
            ctx->pc = 0x3EB2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB2A4u;
            // 0x3eb2a8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB2D8u;
            goto label_3eb2d8;
        }
    }
    ctx->pc = 0x3EB2ACu;
label_3eb2ac:
    // 0x3eb2ac: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb2acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb2b0:
    // 0x3eb2b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb2b4:
    // 0x3eb2b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb2b8:
    // 0x3eb2b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb2bc:
    // 0x3eb2bc: 0x40f809  jalr        $v0
label_3eb2c0:
    if (ctx->pc == 0x3EB2C0u) {
        ctx->pc = 0x3EB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2BCu;
        // 0x3eb2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB2C4u;
        goto label_3eb2c4;
    }
    ctx->pc = 0x3EB2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB2C4u);
        ctx->pc = 0x3EB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2BCu;
        // 0x3eb2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB2BCu, 0x3EB2C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB2C4u;
label_3eb2c4:
    // 0x3eb2c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb2c8:
    // 0x3eb2c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb2cc:
    // 0x3eb2cc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb2d0:
    if (ctx->pc == 0x3EB2D0u) {
        ctx->pc = 0x3EB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2CCu;
        // 0x3eb2d0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB2D4u;
        goto label_3eb2d4;
    }
    ctx->pc = 0x3EB2CCu;
    {
        const bool branch_taken_0x3eb2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2CCu;
        // 0x3eb2d0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb2cc) {
            ctx->pc = 0x3EB2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb2b0;
        }
    }
    ctx->pc = 0x3EB2D4u;
label_3eb2d4:
    // 0x3eb2d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb2d8:
    // 0x3eb2d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb2dc:
    // 0x3eb2dc: 0xc0f528a  jal         func_3D4A28
label_3eb2e0:
    if (ctx->pc == 0x3EB2E0u) {
        ctx->pc = 0x3EB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2DCu;
        // 0x3eb2e0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB2E4u;
        goto label_3eb2e4;
    }
    ctx->pc = 0x3EB2DCu;
    SET_GPR_U32(ctx, 31, 0x3EB2E4u);
    ctx->pc = 0x3EB2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB2DCu;
    // 0x3eb2e0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB2DCu, 0x3EB2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB2E4u;
label_3eb2e4:
    // 0x3eb2e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb2e8:
    // 0x3eb2e8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb2e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb2ec:
    // 0x3eb2ec: 0xc0f5222  jal         func_3D4888
label_3eb2f0:
    if (ctx->pc == 0x3EB2F0u) {
        ctx->pc = 0x3EB2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2ECu;
        // 0x3eb2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB2F4u;
        goto label_3eb2f4;
    }
    ctx->pc = 0x3EB2ECu;
    SET_GPR_U32(ctx, 31, 0x3EB2F4u);
    ctx->pc = 0x3EB2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB2ECu;
    // 0x3eb2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB2ECu, 0x3EB2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB2F4u;
label_3eb2f4:
    // 0x3eb2f4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb2f8:
    if (ctx->pc == 0x3EB2F8u) {
        ctx->pc = 0x3EB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2F4u;
        // 0x3eb2f8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB2FCu;
        goto label_3eb2fc;
    }
    ctx->pc = 0x3EB2F4u;
    {
        const bool branch_taken_0x3eb2f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB2F4u;
        // 0x3eb2f8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb2f4) {
            ctx->pc = 0x3EB288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb288;
        }
    }
    ctx->pc = 0x3EB2FCu;
label_3eb2fc:
    // 0x3eb2fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb300:
    // 0x3eb300: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eb304:
    if (ctx->pc == 0x3EB304u) {
        ctx->pc = 0x3EB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB300u;
        // 0x3eb304: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB308u;
        goto label_3eb308;
    }
    ctx->pc = 0x3EB300u;
    {
        const bool branch_taken_0x3eb300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB300u;
        // 0x3eb304: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb300) {
            ctx->pc = 0x3EB37Cu;
            goto label_3eb37c;
        }
    }
    ctx->pc = 0x3EB308u;
label_3eb308:
    // 0x3eb308: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb30c:
    // 0x3eb30c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb310:
    // 0x3eb310: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb314:
    if (ctx->pc == 0x3EB314u) {
        ctx->pc = 0x3EB314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB310u;
        // 0x3eb314: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB318u;
        goto label_3eb318;
    }
    ctx->pc = 0x3EB310u;
    {
        const bool branch_taken_0x3eb310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb310) {
            ctx->pc = 0x3EB314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB310u;
            // 0x3eb314: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB36Cu;
            goto label_3eb36c;
        }
    }
    ctx->pc = 0x3EB318u;
label_3eb318:
    // 0x3eb318: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb31c:
    // 0x3eb31c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb31cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb320:
    // 0x3eb320: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb324:
    // 0x3eb324: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb328:
    if (ctx->pc == 0x3EB328u) {
        ctx->pc = 0x3EB328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB324u;
        // 0x3eb328: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB32Cu;
        goto label_3eb32c;
    }
    ctx->pc = 0x3EB324u;
    {
        const bool branch_taken_0x3eb324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb324) {
            ctx->pc = 0x3EB328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB324u;
            // 0x3eb328: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB358u;
            goto label_3eb358;
        }
    }
    ctx->pc = 0x3EB32Cu;
label_3eb32c:
    // 0x3eb32c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb330:
    // 0x3eb330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb334:
    // 0x3eb334: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb338:
    // 0x3eb338: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb33c:
    // 0x3eb33c: 0x40f809  jalr        $v0
label_3eb340:
    if (ctx->pc == 0x3EB340u) {
        ctx->pc = 0x3EB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB33Cu;
        // 0x3eb340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB344u;
        goto label_3eb344;
    }
    ctx->pc = 0x3EB33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB344u);
        ctx->pc = 0x3EB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB33Cu;
        // 0x3eb340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB33Cu, 0x3EB344u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB344u;
label_3eb344:
    // 0x3eb344: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eb344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb348:
    // 0x3eb348: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb34c:
    // 0x3eb34c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb350:
    if (ctx->pc == 0x3EB350u) {
        ctx->pc = 0x3EB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB34Cu;
        // 0x3eb350: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB354u;
        goto label_3eb354;
    }
    ctx->pc = 0x3EB34Cu;
    {
        const bool branch_taken_0x3eb34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB34Cu;
        // 0x3eb350: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb34c) {
            ctx->pc = 0x3EB330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb330;
        }
    }
    ctx->pc = 0x3EB354u;
label_3eb354:
    // 0x3eb354: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb358:
    // 0x3eb358: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb35c:
    // 0x3eb35c: 0xc0f528a  jal         func_3D4A28
label_3eb360:
    if (ctx->pc == 0x3EB360u) {
        ctx->pc = 0x3EB360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB35Cu;
        // 0x3eb360: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB364u;
        goto label_3eb364;
    }
    ctx->pc = 0x3EB35Cu;
    SET_GPR_U32(ctx, 31, 0x3EB364u);
    ctx->pc = 0x3EB360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB35Cu;
    // 0x3eb360: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB35Cu, 0x3EB364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB364u;
label_3eb364:
    // 0x3eb364: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb368:
    // 0x3eb368: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb36c:
    // 0x3eb36c: 0xc0f5222  jal         func_3D4888
label_3eb370:
    if (ctx->pc == 0x3EB370u) {
        ctx->pc = 0x3EB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB36Cu;
        // 0x3eb370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB374u;
        goto label_3eb374;
    }
    ctx->pc = 0x3EB36Cu;
    SET_GPR_U32(ctx, 31, 0x3EB374u);
    ctx->pc = 0x3EB370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB36Cu;
    // 0x3eb370: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB36Cu, 0x3EB374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB374u;
label_3eb374:
    // 0x3eb374: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb378:
    if (ctx->pc == 0x3EB378u) {
        ctx->pc = 0x3EB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB374u;
        // 0x3eb378: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB37Cu;
        goto label_3eb37c;
    }
    ctx->pc = 0x3EB374u;
    {
        const bool branch_taken_0x3eb374 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB374u;
        // 0x3eb378: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb374) {
            ctx->pc = 0x3EB308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb308;
        }
    }
    ctx->pc = 0x3EB37Cu;
label_3eb37c:
    // 0x3eb37c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eb37cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eb380:
    // 0x3eb380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eb380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb384:
    // 0x3eb384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eb384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eb388:
    // 0x3eb388: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eb388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb38c:
    // 0x3eb38c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eb38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb390:
    // 0x3eb390: 0x3e00008  jr          $ra
label_3eb394:
    if (ctx->pc == 0x3EB394u) {
        ctx->pc = 0x3EB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB390u;
        // 0x3eb394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB398u;
        goto label_fallthrough_0x3eb390;
    }
    ctx->pc = 0x3EB390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB390u;
        // 0x3eb394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eb390:
    ctx->pc = 0x3EB398u;
}
