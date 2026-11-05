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

// Function: sub_002C84F0
// Address: 0x2c84f0 - 0x2c86b8
void sub_002C84F0_0x2c84f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C84F0_0x2c84f0");
#endif

    switch (ctx->pc) {
        case 0x2c8580u: goto label_2c8580;
        case 0x2c85b8u: goto label_2c85b8;
        case 0x2c85d4u: goto label_2c85d4;
        case 0x2c85fcu: goto label_2c85fc;
        case 0x2c861cu: goto label_2c861c;
        case 0x2c8628u: goto label_2c8628;
        case 0x2c866cu: goto label_2c866c;
        case 0x2c8674u: goto label_2c8674;
        default: break;
    }

    ctx->pc = 0x2c84f0u;

    // 0x2c84f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c84f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c84f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c84f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c84f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c84f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2c84fc: 0x3442ffbf  ori         $v0, $v0, 0xFFBF
    ctx->pc = 0x2c84fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
    // 0x2c8500: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c8500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2c8504: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c8504u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c8508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c850c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2c850cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c8510: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c8510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c8514: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c8514u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8518: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c8518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2c851c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2c8520: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2C8520u;
    {
        const bool branch_taken_0x2c8520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8520u;
        // 0x2c8524: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8520) {
            ctx->pc = 0x2C868Cu;
            goto label_2c868c;
        }
    }
    ctx->pc = 0x2C8528u;
    // 0x2c8528: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x2c8528u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2c852c: 0x10c00057  beqz        $a2, . + 4 + (0x57 << 2)
    ctx->pc = 0x2C852Cu;
    {
        const bool branch_taken_0x2c852c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C852Cu;
        // 0x2c8530: 0x24a50038  addiu       $a1, $a1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c852c) {
            ctx->pc = 0x2C868Cu;
            goto label_2c868c;
        }
    }
    ctx->pc = 0x2C8534u;
    // 0x2c8534: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x2c8534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2c8538: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x2c8538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c853c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x2C853Cu;
    {
        const bool branch_taken_0x2c853c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C853Cu;
        // 0x2c8540: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c853c) {
            ctx->pc = 0x2C866Cu;
            goto label_2c866c;
        }
    }
    ctx->pc = 0x2C8544u;
    // 0x2c8544: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x2c8544u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c8548: 0x8c725b78  lw          $s2, 0x5B78($v1)
    ctx->pc = 0x2c8548u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23416)));
    // 0x2c854c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c854cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c8550: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c8550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8554: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c8554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8558: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2c8558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2c855c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C855Cu;
    {
        const bool branch_taken_0x2c855c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c855c) {
            ctx->pc = 0x2C8560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C855Cu;
            // 0x2c8560: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8564u;
            goto label_2c8564;
        }
    }
    ctx->pc = 0x2C8564u;
label_2c8564:
    // 0x2c8564: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x2c8564u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2c8568: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x2c8568u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x2c856c: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x2c856cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x2c8570: 0x1012  mflo        $v0
    ctx->pc = 0x2c8570u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2c8574: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c8574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c8578: 0xc0b1ba0  jal         func_2C6E80
    ctx->pc = 0x2C8578u;
    SET_GPR_U32(ctx, 31, 0x2C8580u);
    ctx->pc = 0x2C857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8578u;
    // 0x2c857c: 0x528018  mult        $s0, $v0, $s2 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6E80u, 0x2C8578u, 0x2C8580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8580u;
label_2c8580:
    // 0x2c8580: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c8580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8584: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2c8584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c8588: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2c8588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2c858c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C858Cu;
    {
        const bool branch_taken_0x2c858c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C858Cu;
        // 0x2c8590: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c858c) {
            ctx->pc = 0x2C863Cu;
            goto label_2c863c;
        }
    }
    ctx->pc = 0x2C8594u;
    // 0x2c8594: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C8594u;
    {
        const bool branch_taken_0x2c8594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8594u;
        // 0x2c8598: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8594) {
            ctx->pc = 0x2C85DCu;
            goto label_2c85dc;
        }
    }
    ctx->pc = 0x2C859Cu;
    // 0x2c859c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2c859cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c85a0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2c85a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c85a4: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C85A4u;
    {
        const bool branch_taken_0x2c85a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c85a4) {
            ctx->pc = 0x2C863Cu;
            goto label_2c863c;
        }
    }
    ctx->pc = 0x2C85ACu;
    // 0x2c85ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c85acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c85b0: 0xc0b1bb0  jal         func_2C6EC0
    ctx->pc = 0x2C85B0u;
    SET_GPR_U32(ctx, 31, 0x2C85B8u);
    ctx->pc = 0x2C85B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C85B0u;
    // 0x2c85b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6EC0u, 0x2C85B0u, 0x2C85B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C85B8u;
label_2c85b8:
    // 0x2c85b8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C85B8u;
    {
        const bool branch_taken_0x2c85b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C85BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85B8u;
        // 0x2c85bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85b8) {
            ctx->pc = 0x2C863Cu;
            goto label_2c863c;
        }
    }
    ctx->pc = 0x2C85C0u;
    // 0x2c85c0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c85c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c85c8: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x2c85c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2c85cc: 0xc0b2820  jal         func_2CA080
    ctx->pc = 0x2C85CCu;
    SET_GPR_U32(ctx, 31, 0x2C85D4u);
    ctx->pc = 0x2C85D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C85CCu;
    // 0x2c85d0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA080u, 0x2C85CCu, 0x2C85D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C85D4u;
label_2c85d4:
    // 0x2c85d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C85D4u;
    {
        const bool branch_taken_0x2c85d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C85D4u;
        // 0x2c85d8: 0x202a80a  movz        $s5, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c85d4) {
            ctx->pc = 0x2C863Cu;
            goto label_2c863c;
        }
    }
    ctx->pc = 0x2C85DCu;
label_2c85dc:
    // 0x2c85dc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2c85dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2c85e0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2c85e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c85e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C85E4u;
    {
        const bool branch_taken_0x2c85e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c85e4) {
            ctx->pc = 0x2C85F4u;
            goto label_2c85f4;
        }
    }
    ctx->pc = 0x2C85ECu;
    // 0x2c85ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c85f0: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x2c85f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2c85f4:
    // 0x2c85f4: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C85F4u;
    SET_GPR_U32(ctx, 31, 0x2C85FCu);
    ctx->pc = 0x2C85F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C85F4u;
    // 0x2c85f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C85F4u, 0x2C85FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C85FCu;
label_2c85fc:
    // 0x2c85fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c85fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8600: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2c8600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c8604: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c8604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c8608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c860c: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C860Cu;
    {
        const bool branch_taken_0x2c860c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c860c) {
            ctx->pc = 0x2C863Cu;
            goto label_2c863c;
        }
    }
    ctx->pc = 0x2C8614u;
    // 0x2c8614: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C8614u;
    SET_GPR_U32(ctx, 31, 0x2C861Cu);
    ctx->pc = 0x2C8618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8614u;
    // 0x2c8618: 0x102023  negu        $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C8614u, 0x2C861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C861Cu;
label_2c861c:
    // 0x2c861c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c861cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8620: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C8620u;
    SET_GPR_U32(ctx, 31, 0x2C8628u);
    ctx->pc = 0x2C8624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8620u;
    // 0x2c8624: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C8620u, 0x2C8628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8628u;
label_2c8628:
    // 0x2c8628: 0x12140004  beq         $s0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8628u;
    {
        const bool branch_taken_0x2c8628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x2c8628) {
            ctx->pc = 0x2C863Cu;
            goto label_2c863c;
        }
    }
    ctx->pc = 0x2C8630u;
    // 0x2c8630: 0x242a823  subu        $s5, $s2, $v0
    ctx->pc = 0x2c8630u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c8634: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2c8634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2c8638: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x2c8638u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_2c863c:
    // 0x2c863c: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x2C863Cu;
    {
        const bool branch_taken_0x2c863c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C863Cu;
        // 0x2c8640: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c863c) {
            ctx->pc = 0x2C866Cu;
            goto label_2c866c;
        }
    }
    ctx->pc = 0x2C8644u;
    // 0x2c8644: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2c8644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c8648: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x2c8648u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2c864c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2c864cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2c8650: 0x8e6301ac  lw          $v1, 0x1AC($s3)
    ctx->pc = 0x2c8650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
    // 0x2c8654: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x2c8654u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2c8658: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x2c8658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x2c865c: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x2c865cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2c8660: 0xae6301ac  sw          $v1, 0x1AC($s3)
    ctx->pc = 0x2c8660u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 428), GPR_U32(ctx, 3));
    // 0x2c8664: 0xc0b1c82  jal         func_2C7208
    ctx->pc = 0x2C8664u;
    SET_GPR_U32(ctx, 31, 0x2C866Cu);
    ctx->pc = 0x2C8668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8664u;
    // 0x2c8668: 0xd53023  subu        $a2, $a2, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7208u, 0x2C8664u, 0x2C866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C866Cu;
label_2c866c:
    // 0x2c866c: 0xc0b202a  jal         func_2C80A8
    ctx->pc = 0x2C866Cu;
    SET_GPR_U32(ctx, 31, 0x2C8674u);
    ctx->pc = 0x2C8670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C866Cu;
    // 0x2c8670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C80A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C80A8u, 0x2C866Cu, 0x2C8674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8674u;
label_2c8674:
    // 0x2c8674: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x2c8674u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2c8678: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8678u;
    {
        const bool branch_taken_0x2c8678 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8678u;
        // 0x2c867c: 0x15102b  sltu        $v0, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8678) {
            ctx->pc = 0x2C8690u;
            goto label_2c8690;
        }
    }
    ctx->pc = 0x2C8680u;
    // 0x2c8680: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c8680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c8684: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c8684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c8688: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x2c8688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_2c868c:
    // 0x2c868c: 0x15102b  sltu        $v0, $zero, $s5
    ctx->pc = 0x2c868cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2c8690:
    // 0x2c8690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8694: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c8694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c8698: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c8698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c869c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c869cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c86a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c86a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c86a4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c86a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c86a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c86a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c86ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C86ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C86B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86ACu;
        // 0x2c86b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C86ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C86B4u;
    // 0x2c86b4: 0x0  nop
    ctx->pc = 0x2c86b4u;
    // NOP
    ctx->pc = 0x2c86b8u;
}
