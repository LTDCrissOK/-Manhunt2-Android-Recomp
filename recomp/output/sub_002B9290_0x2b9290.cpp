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

// Function: sub_002B9290
// Address: 0x2b9290 - 0x2b93a0
void sub_002B9290_0x2b9290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9290_0x2b9290");
#endif

    switch (ctx->pc) {
        case 0x2b9290u: goto label_2b9290;
        case 0x2b9294u: goto label_2b9294;
        case 0x2b9298u: goto label_2b9298;
        case 0x2b929cu: goto label_2b929c;
        case 0x2b92a0u: goto label_2b92a0;
        case 0x2b92a4u: goto label_2b92a4;
        case 0x2b92a8u: goto label_2b92a8;
        case 0x2b92acu: goto label_2b92ac;
        case 0x2b92b0u: goto label_2b92b0;
        case 0x2b92b4u: goto label_2b92b4;
        case 0x2b92b8u: goto label_2b92b8;
        case 0x2b92bcu: goto label_2b92bc;
        case 0x2b92c0u: goto label_2b92c0;
        case 0x2b92c4u: goto label_2b92c4;
        case 0x2b92c8u: goto label_2b92c8;
        case 0x2b92ccu: goto label_2b92cc;
        case 0x2b92d0u: goto label_2b92d0;
        case 0x2b92d4u: goto label_2b92d4;
        case 0x2b92d8u: goto label_2b92d8;
        case 0x2b92dcu: goto label_2b92dc;
        case 0x2b92e0u: goto label_2b92e0;
        case 0x2b92e4u: goto label_2b92e4;
        case 0x2b92e8u: goto label_2b92e8;
        case 0x2b92ecu: goto label_2b92ec;
        case 0x2b92f0u: goto label_2b92f0;
        case 0x2b92f4u: goto label_2b92f4;
        case 0x2b92f8u: goto label_2b92f8;
        case 0x2b92fcu: goto label_2b92fc;
        case 0x2b9300u: goto label_2b9300;
        case 0x2b9304u: goto label_2b9304;
        case 0x2b9308u: goto label_2b9308;
        case 0x2b930cu: goto label_2b930c;
        case 0x2b9310u: goto label_2b9310;
        case 0x2b9314u: goto label_2b9314;
        case 0x2b9318u: goto label_2b9318;
        case 0x2b931cu: goto label_2b931c;
        case 0x2b9320u: goto label_2b9320;
        case 0x2b9324u: goto label_2b9324;
        case 0x2b9328u: goto label_2b9328;
        case 0x2b932cu: goto label_2b932c;
        case 0x2b9330u: goto label_2b9330;
        case 0x2b9334u: goto label_2b9334;
        case 0x2b9338u: goto label_2b9338;
        case 0x2b933cu: goto label_2b933c;
        case 0x2b9340u: goto label_2b9340;
        case 0x2b9344u: goto label_2b9344;
        case 0x2b9348u: goto label_2b9348;
        case 0x2b934cu: goto label_2b934c;
        case 0x2b9350u: goto label_2b9350;
        case 0x2b9354u: goto label_2b9354;
        case 0x2b9358u: goto label_2b9358;
        case 0x2b935cu: goto label_2b935c;
        case 0x2b9360u: goto label_2b9360;
        case 0x2b9364u: goto label_2b9364;
        case 0x2b9368u: goto label_2b9368;
        case 0x2b936cu: goto label_2b936c;
        case 0x2b9370u: goto label_2b9370;
        case 0x2b9374u: goto label_2b9374;
        case 0x2b9378u: goto label_2b9378;
        case 0x2b937cu: goto label_2b937c;
        case 0x2b9380u: goto label_2b9380;
        case 0x2b9384u: goto label_2b9384;
        case 0x2b9388u: goto label_2b9388;
        case 0x2b938cu: goto label_2b938c;
        case 0x2b9390u: goto label_2b9390;
        case 0x2b9394u: goto label_2b9394;
        case 0x2b9398u: goto label_2b9398;
        case 0x2b939cu: goto label_2b939c;
        default: break;
    }

    ctx->pc = 0x2b9290u;

label_2b9290:
    // 0x2b9290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b9294:
    // 0x2b9294: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b9294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2b9298:
    // 0x2b9298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b929c:
    // 0x2b929c: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2b929cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945416)));
label_2b92a0:
    // 0x2b92a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b92a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b92a4:
    // 0x2b92a4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2b92a8:
    if (ctx->pc == 0x2B92A8u) {
        ctx->pc = 0x2B92A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92A4u;
        // 0x2b92a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92ACu;
        goto label_2b92ac;
    }
    ctx->pc = 0x2B92A4u;
    {
        const bool branch_taken_0x2b92a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92A4u;
        // 0x2b92a8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92a4) {
            ctx->pc = 0x2B9390u;
            goto label_2b9390;
        }
    }
    ctx->pc = 0x2B92ACu;
label_2b92ac:
    // 0x2b92ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b92acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b92b0:
    // 0x2b92b0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2b92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2b92b4:
    // 0x2b92b4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2b92b8:
    if (ctx->pc == 0x2B92B8u) {
        ctx->pc = 0x2B92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B4u;
        // 0x2b92b8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92BCu;
        goto label_2b92bc;
    }
    ctx->pc = 0x2B92B4u;
    {
        const bool branch_taken_0x2b92b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B92B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92B4u;
        // 0x2b92b8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92b4) {
            ctx->pc = 0x2B92D0u;
            goto label_2b92d0;
        }
    }
    ctx->pc = 0x2B92BCu;
label_2b92bc:
    // 0x2b92bc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b92bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2b92c0:
    // 0x2b92c0: 0xc0ae65e  jal         func_2B9978
label_2b92c4:
    if (ctx->pc == 0x2B92C4u) {
        ctx->pc = 0x2B92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92C0u;
        // 0x2b92c4: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92C8u;
        goto label_2b92c8;
    }
    ctx->pc = 0x2B92C0u;
    SET_GPR_U32(ctx, 31, 0x2B92C8u);
    ctx->pc = 0x2B92C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92C0u;
    // 0x2b92c4: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9978u, 0x2B92C0u, 0x2B92C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92C8u;
label_2b92c8:
    // 0x2b92c8: 0x10000032  b           . + 4 + (0x32 << 2)
label_2b92cc:
    if (ctx->pc == 0x2B92CCu) {
        ctx->pc = 0x2B92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92C8u;
        // 0x2b92cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92D0u;
        goto label_2b92d0;
    }
    ctx->pc = 0x2B92C8u;
    {
        const bool branch_taken_0x2b92c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92C8u;
        // 0x2b92cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92c8) {
            ctx->pc = 0x2B9394u;
            goto label_2b9394;
        }
    }
    ctx->pc = 0x2B92D0u;
label_2b92d0:
    // 0x2b92d0: 0x24444d40  addiu       $a0, $v0, 0x4D40
    ctx->pc = 0x2b92d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19776));
label_2b92d4:
    // 0x2b92d4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b92d8:
    // 0x2b92d8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2b92dc:
    if (ctx->pc == 0x2B92DCu) {
        ctx->pc = 0x2B92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92D8u;
        // 0x2b92dc: 0x38420008  xori        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B92E0u;
        goto label_2b92e0;
    }
    ctx->pc = 0x2B92D8u;
    {
        const bool branch_taken_0x2b92d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B92D8u;
        // 0x2b92dc: 0x38420008  xori        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92d8) {
            ctx->pc = 0x2B9328u;
            goto label_2b9328;
        }
    }
    ctx->pc = 0x2B92E0u;
label_2b92e0:
    // 0x2b92e0: 0xc0ae65e  jal         func_2B9978
label_2b92e4:
    if (ctx->pc == 0x2B92E4u) {
        ctx->pc = 0x2B92E8u;
        goto label_2b92e8;
    }
    ctx->pc = 0x2B92E0u;
    SET_GPR_U32(ctx, 31, 0x2B92E8u);
    ctx->pc = 0x2B9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9978u, 0x2B92E0u, 0x2B92E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92E8u;
label_2b92e8:
    // 0x2b92e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2b92ec:
    // 0x2b92ec: 0x8c43cba8  lw          $v1, -0x3458($v0)
    ctx->pc = 0x2b92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953896)));
label_2b92f0:
    // 0x2b92f0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2b92f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b92f4:
    // 0x2b92f4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b92f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b92f8:
    // 0x2b92f8: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2b92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_2b92fc:
    // 0x2b92fc: 0x40f809  jalr        $v0
label_2b9300:
    if (ctx->pc == 0x2B9300u) {
        ctx->pc = 0x2B9304u;
        goto label_2b9304;
    }
    ctx->pc = 0x2B92FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B9304u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B92FCu, 0x2B9304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9304u;
label_2b9304:
    // 0x2b9304: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b9304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9308:
    // 0x2b9308: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b930c:
    // 0x2b930c: 0x10640020  beq         $v1, $a0, . + 4 + (0x20 << 2)
label_2b9310:
    if (ctx->pc == 0x2B9310u) {
        ctx->pc = 0x2B9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B930Cu;
        // 0x2b9310: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9314u;
        goto label_2b9314;
    }
    ctx->pc = 0x2B930Cu;
    {
        const bool branch_taken_0x2b930c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B930Cu;
        // 0x2b9310: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b930c) {
            ctx->pc = 0x2B9390u;
            goto label_2b9390;
        }
    }
    ctx->pc = 0x2B9314u;
label_2b9314:
    // 0x2b9314: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
label_2b9318:
    if (ctx->pc == 0x2B9318u) {
        ctx->pc = 0x2B9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9314u;
        // 0x2b9318: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B931Cu;
        goto label_2b931c;
    }
    ctx->pc = 0x2B9314u;
    {
        const bool branch_taken_0x2b9314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9314) {
            ctx->pc = 0x2B9318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9314u;
            // 0x2b9318: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9394u;
            goto label_2b9394;
        }
    }
    ctx->pc = 0x2B931Cu;
label_2b931c:
    // 0x2b931c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2b931cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2b9320:
    // 0x2b9320: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2b9324:
    if (ctx->pc == 0x2B9324u) {
        ctx->pc = 0x2B9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9320u;
        // 0x2b9324: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9328u;
        goto label_2b9328;
    }
    ctx->pc = 0x2B9320u;
    {
        const bool branch_taken_0x2b9320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9320u;
        // 0x2b9324: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9320) {
            ctx->pc = 0x2B9390u;
            goto label_2b9390;
        }
    }
    ctx->pc = 0x2B9328u;
label_2b9328:
    // 0x2b9328: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2b932c:
    if (ctx->pc == 0x2B932Cu) {
        ctx->pc = 0x2B932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9328u;
        // 0x2b932c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9330u;
        goto label_2b9330;
    }
    ctx->pc = 0x2B9328u;
    {
        const bool branch_taken_0x2b9328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9328u;
        // 0x2b932c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9328) {
            ctx->pc = 0x2B9378u;
            goto label_2b9378;
        }
    }
    ctx->pc = 0x2B9330u;
label_2b9330:
    // 0x2b9330: 0xc0ae65e  jal         func_2B9978
label_2b9334:
    if (ctx->pc == 0x2B9334u) {
        ctx->pc = 0x2B9338u;
        goto label_2b9338;
    }
    ctx->pc = 0x2B9330u;
    SET_GPR_U32(ctx, 31, 0x2B9338u);
    ctx->pc = 0x2B9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9978u, 0x2B9330u, 0x2B9338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9338u;
label_2b9338:
    // 0x2b9338: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b9338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2b933c:
    // 0x2b933c: 0x8c43cba8  lw          $v1, -0x3458($v0)
    ctx->pc = 0x2b933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953896)));
label_2b9340:
    // 0x2b9340: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2b9340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b9344:
    // 0x2b9344: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b9344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9348:
    // 0x2b9348: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x2b9348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_2b934c:
    // 0x2b934c: 0x40f809  jalr        $v0
label_2b9350:
    if (ctx->pc == 0x2B9350u) {
        ctx->pc = 0x2B9354u;
        goto label_2b9354;
    }
    ctx->pc = 0x2B934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B9354u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B934Cu, 0x2B9354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9354u;
label_2b9354:
    // 0x2b9354: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b9354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9358:
    // 0x2b9358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b935c:
    // 0x2b935c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_2b9360:
    if (ctx->pc == 0x2B9360u) {
        ctx->pc = 0x2B9360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B935Cu;
        // 0x2b9360: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9364u;
        goto label_2b9364;
    }
    ctx->pc = 0x2B935Cu;
    {
        const bool branch_taken_0x2b935c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B9360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B935Cu;
        // 0x2b9360: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b935c) {
            ctx->pc = 0x2B9390u;
            goto label_2b9390;
        }
    }
    ctx->pc = 0x2B9364u;
label_2b9364:
    // 0x2b9364: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_2b9368:
    if (ctx->pc == 0x2B9368u) {
        ctx->pc = 0x2B9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9364u;
        // 0x2b9368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B936Cu;
        goto label_2b936c;
    }
    ctx->pc = 0x2B9364u;
    {
        const bool branch_taken_0x2b9364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9364) {
            ctx->pc = 0x2B9368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9364u;
            // 0x2b9368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9394u;
            goto label_2b9394;
        }
    }
    ctx->pc = 0x2B936Cu;
label_2b936c:
    // 0x2b936c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b936cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2b9370:
    // 0x2b9370: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b9374:
    if (ctx->pc == 0x2B9374u) {
        ctx->pc = 0x2B9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9370u;
        // 0x2b9374: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9378u;
        goto label_2b9378;
    }
    ctx->pc = 0x2B9370u;
    {
        const bool branch_taken_0x2b9370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9370u;
        // 0x2b9374: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9370) {
            ctx->pc = 0x2B9390u;
            goto label_2b9390;
        }
    }
    ctx->pc = 0x2B9378u;
label_2b9378:
    // 0x2b9378: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b937c:
    if (ctx->pc == 0x2B937Cu) {
        ctx->pc = 0x2B937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9378u;
        // 0x2b937c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9380u;
        goto label_2b9380;
    }
    ctx->pc = 0x2B9378u;
    {
        const bool branch_taken_0x2b9378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9378u;
        // 0x2b937c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9378) {
            ctx->pc = 0x2B9388u;
            goto label_2b9388;
        }
    }
    ctx->pc = 0x2B9380u;
label_2b9380:
    // 0x2b9380: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_2b9384:
    if (ctx->pc == 0x2B9384u) {
        ctx->pc = 0x2B9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9380u;
        // 0x2b9384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9388u;
        goto label_2b9388;
    }
    ctx->pc = 0x2B9380u;
    {
        const bool branch_taken_0x2b9380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9380) {
            ctx->pc = 0x2B9384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9380u;
            // 0x2b9384: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9394u;
            goto label_2b9394;
        }
    }
    ctx->pc = 0x2B9388u;
label_2b9388:
    // 0x2b9388: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b9388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b938c:
    // 0x2b938c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b938cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2b9390:
    // 0x2b9390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9394:
    // 0x2b9394: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b9394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2b9398:
    // 0x2b9398: 0x3e00008  jr          $ra
label_2b939c:
    if (ctx->pc == 0x2B939Cu) {
        ctx->pc = 0x2B939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9398u;
        // 0x2b939c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B93A0u;
        goto label_fallthrough_0x2b9398;
    }
    ctx->pc = 0x2B9398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9398u;
        // 0x2b939c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b9398:
    ctx->pc = 0x2B93A0u;
}
