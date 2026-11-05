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

// Function: sub_003152C8
// Address: 0x3152c8 - 0x315508
void sub_003152C8_0x3152c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003152C8_0x3152c8");
#endif

    switch (ctx->pc) {
        case 0x3152c8u: goto label_3152c8;
        case 0x3152ccu: goto label_3152cc;
        case 0x3152d0u: goto label_3152d0;
        case 0x3152d4u: goto label_3152d4;
        case 0x3152d8u: goto label_3152d8;
        case 0x3152dcu: goto label_3152dc;
        case 0x3152e0u: goto label_3152e0;
        case 0x3152e4u: goto label_3152e4;
        case 0x3152e8u: goto label_3152e8;
        case 0x3152ecu: goto label_3152ec;
        case 0x3152f0u: goto label_3152f0;
        case 0x3152f4u: goto label_3152f4;
        case 0x3152f8u: goto label_3152f8;
        case 0x3152fcu: goto label_3152fc;
        case 0x315300u: goto label_315300;
        case 0x315304u: goto label_315304;
        case 0x315308u: goto label_315308;
        case 0x31530cu: goto label_31530c;
        case 0x315310u: goto label_315310;
        case 0x315314u: goto label_315314;
        case 0x315318u: goto label_315318;
        case 0x31531cu: goto label_31531c;
        case 0x315320u: goto label_315320;
        case 0x315324u: goto label_315324;
        case 0x315328u: goto label_315328;
        case 0x31532cu: goto label_31532c;
        case 0x315330u: goto label_315330;
        case 0x315334u: goto label_315334;
        case 0x315338u: goto label_315338;
        case 0x31533cu: goto label_31533c;
        case 0x315340u: goto label_315340;
        case 0x315344u: goto label_315344;
        case 0x315348u: goto label_315348;
        case 0x31534cu: goto label_31534c;
        case 0x315350u: goto label_315350;
        case 0x315354u: goto label_315354;
        case 0x315358u: goto label_315358;
        case 0x31535cu: goto label_31535c;
        case 0x315360u: goto label_315360;
        case 0x315364u: goto label_315364;
        case 0x315368u: goto label_315368;
        case 0x31536cu: goto label_31536c;
        case 0x315370u: goto label_315370;
        case 0x315374u: goto label_315374;
        case 0x315378u: goto label_315378;
        case 0x31537cu: goto label_31537c;
        case 0x315380u: goto label_315380;
        case 0x315384u: goto label_315384;
        case 0x315388u: goto label_315388;
        case 0x31538cu: goto label_31538c;
        case 0x315390u: goto label_315390;
        case 0x315394u: goto label_315394;
        case 0x315398u: goto label_315398;
        case 0x31539cu: goto label_31539c;
        case 0x3153a0u: goto label_3153a0;
        case 0x3153a4u: goto label_3153a4;
        case 0x3153a8u: goto label_3153a8;
        case 0x3153acu: goto label_3153ac;
        case 0x3153b0u: goto label_3153b0;
        case 0x3153b4u: goto label_3153b4;
        case 0x3153b8u: goto label_3153b8;
        case 0x3153bcu: goto label_3153bc;
        case 0x3153c0u: goto label_3153c0;
        case 0x3153c4u: goto label_3153c4;
        case 0x3153c8u: goto label_3153c8;
        case 0x3153ccu: goto label_3153cc;
        case 0x3153d0u: goto label_3153d0;
        case 0x3153d4u: goto label_3153d4;
        case 0x3153d8u: goto label_3153d8;
        case 0x3153dcu: goto label_3153dc;
        case 0x3153e0u: goto label_3153e0;
        case 0x3153e4u: goto label_3153e4;
        case 0x3153e8u: goto label_3153e8;
        case 0x3153ecu: goto label_3153ec;
        case 0x3153f0u: goto label_3153f0;
        case 0x3153f4u: goto label_3153f4;
        case 0x3153f8u: goto label_3153f8;
        case 0x3153fcu: goto label_3153fc;
        case 0x315400u: goto label_315400;
        case 0x315404u: goto label_315404;
        case 0x315408u: goto label_315408;
        case 0x31540cu: goto label_31540c;
        case 0x315410u: goto label_315410;
        case 0x315414u: goto label_315414;
        case 0x315418u: goto label_315418;
        case 0x31541cu: goto label_31541c;
        case 0x315420u: goto label_315420;
        case 0x315424u: goto label_315424;
        case 0x315428u: goto label_315428;
        case 0x31542cu: goto label_31542c;
        case 0x315430u: goto label_315430;
        case 0x315434u: goto label_315434;
        case 0x315438u: goto label_315438;
        case 0x31543cu: goto label_31543c;
        case 0x315440u: goto label_315440;
        case 0x315444u: goto label_315444;
        case 0x315448u: goto label_315448;
        case 0x31544cu: goto label_31544c;
        case 0x315450u: goto label_315450;
        case 0x315454u: goto label_315454;
        case 0x315458u: goto label_315458;
        case 0x31545cu: goto label_31545c;
        case 0x315460u: goto label_315460;
        case 0x315464u: goto label_315464;
        case 0x315468u: goto label_315468;
        case 0x31546cu: goto label_31546c;
        case 0x315470u: goto label_315470;
        case 0x315474u: goto label_315474;
        case 0x315478u: goto label_315478;
        case 0x31547cu: goto label_31547c;
        case 0x315480u: goto label_315480;
        case 0x315484u: goto label_315484;
        case 0x315488u: goto label_315488;
        case 0x31548cu: goto label_31548c;
        case 0x315490u: goto label_315490;
        case 0x315494u: goto label_315494;
        case 0x315498u: goto label_315498;
        case 0x31549cu: goto label_31549c;
        case 0x3154a0u: goto label_3154a0;
        case 0x3154a4u: goto label_3154a4;
        case 0x3154a8u: goto label_3154a8;
        case 0x3154acu: goto label_3154ac;
        case 0x3154b0u: goto label_3154b0;
        case 0x3154b4u: goto label_3154b4;
        case 0x3154b8u: goto label_3154b8;
        case 0x3154bcu: goto label_3154bc;
        case 0x3154c0u: goto label_3154c0;
        case 0x3154c4u: goto label_3154c4;
        case 0x3154c8u: goto label_3154c8;
        case 0x3154ccu: goto label_3154cc;
        case 0x3154d0u: goto label_3154d0;
        case 0x3154d4u: goto label_3154d4;
        case 0x3154d8u: goto label_3154d8;
        case 0x3154dcu: goto label_3154dc;
        case 0x3154e0u: goto label_3154e0;
        case 0x3154e4u: goto label_3154e4;
        case 0x3154e8u: goto label_3154e8;
        case 0x3154ecu: goto label_3154ec;
        case 0x3154f0u: goto label_3154f0;
        case 0x3154f4u: goto label_3154f4;
        case 0x3154f8u: goto label_3154f8;
        case 0x3154fcu: goto label_3154fc;
        case 0x315500u: goto label_315500;
        case 0x315504u: goto label_315504;
        default: break;
    }

    ctx->pc = 0x3152c8u;

label_3152c8:
    // 0x3152c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3152c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3152cc:
    // 0x3152cc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3152ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_3152d0:
    // 0x3152d0: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3152d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_3152d4:
    // 0x3152d4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3152d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_3152d8:
    // 0x3152d8: 0x8e44bd48  lw          $a0, -0x42B8($s2)
    ctx->pc = 0x3152d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950216)));
label_3152dc:
    // 0x3152dc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3152dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3152e0:
    // 0x3152e0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3152e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_3152e4:
    // 0x3152e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3152e8:
    if (ctx->pc == 0x3152E8u) {
        ctx->pc = 0x3152E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152E4u;
        // 0x3152e8: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3152ECu;
        goto label_3152ec;
    }
    ctx->pc = 0x3152E4u;
    {
        const bool branch_taken_0x3152e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3152E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3152E4u;
        // 0x3152e8: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3152e4) {
            ctx->pc = 0x3152F8u;
            goto label_3152f8;
        }
    }
    ctx->pc = 0x3152ECu;
label_3152ec:
    // 0x3152ec: 0xc0c293e  jal         func_30A4F8
label_3152f0:
    if (ctx->pc == 0x3152F0u) {
        ctx->pc = 0x3152F4u;
        goto label_3152f4;
    }
    ctx->pc = 0x3152ECu;
    SET_GPR_U32(ctx, 31, 0x3152F4u);
    ctx->pc = 0x30A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4F8u, 0x3152ECu, 0x3152F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3152F4u;
label_3152f4:
    // 0x3152f4: 0xae00bd48  sw          $zero, -0x42B8($s0)
    ctx->pc = 0x3152f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950216), GPR_U32(ctx, 0));
label_3152f8:
    // 0x3152f8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3152f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_3152fc:
    // 0x3152fc: 0x8e04bd2c  lw          $a0, -0x42D4($s0)
    ctx->pc = 0x3152fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950188)));
label_315300:
    // 0x315300: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_315304:
    if (ctx->pc == 0x315304u) {
        ctx->pc = 0x315304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315300u;
        // 0x315304: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315308u;
        goto label_315308;
    }
    ctx->pc = 0x315300u;
    {
        const bool branch_taken_0x315300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x315300) {
            ctx->pc = 0x315304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315300u;
            // 0x315304: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315320u;
            goto label_315320;
        }
    }
    ctx->pc = 0x315308u;
label_315308:
    // 0x315308: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x315308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_31530c:
    // 0x31530c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_315310:
    // 0x315310: 0x40f809  jalr        $v0
label_315314:
    if (ctx->pc == 0x315314u) {
        ctx->pc = 0x315314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315310u;
        // 0x315314: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315318u;
        goto label_315318;
    }
    ctx->pc = 0x315310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315318u);
        ctx->pc = 0x315314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315310u;
        // 0x315314: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315310u, 0x315318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315318u;
label_315318:
    // 0x315318: 0xae00bd2c  sw          $zero, -0x42D4($s0)
    ctx->pc = 0x315318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950188), GPR_U32(ctx, 0));
label_31531c:
    // 0x31531c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x31531cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_315320:
    // 0x315320: 0x8e04bd20  lw          $a0, -0x42E0($s0)
    ctx->pc = 0x315320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950176)));
label_315324:
    // 0x315324: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_315328:
    if (ctx->pc == 0x315328u) {
        ctx->pc = 0x315328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315324u;
        // 0x315328: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31532Cu;
        goto label_31532c;
    }
    ctx->pc = 0x315324u;
    {
        const bool branch_taken_0x315324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x315324) {
            ctx->pc = 0x315328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315324u;
            // 0x315328: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315344u;
            goto label_315344;
        }
    }
    ctx->pc = 0x31532Cu;
label_31532c:
    // 0x31532c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x31532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_315330:
    // 0x315330: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x315330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_315334:
    // 0x315334: 0x40f809  jalr        $v0
label_315338:
    if (ctx->pc == 0x315338u) {
        ctx->pc = 0x315338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315334u;
        // 0x315338: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31533Cu;
        goto label_31533c;
    }
    ctx->pc = 0x315334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31533Cu);
        ctx->pc = 0x315338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315334u;
        // 0x315338: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315334u, 0x31533Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31533Cu;
label_31533c:
    // 0x31533c: 0xae00bd20  sw          $zero, -0x42E0($s0)
    ctx->pc = 0x31533cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950176), GPR_U32(ctx, 0));
label_315340:
    // 0x315340: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x315340u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_315344:
    // 0x315344: 0x8e04bd30  lw          $a0, -0x42D0($s0)
    ctx->pc = 0x315344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950192)));
label_315348:
    // 0x315348: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_31534c:
    if (ctx->pc == 0x31534Cu) {
        ctx->pc = 0x31534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315348u;
        // 0x31534c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315350u;
        goto label_315350;
    }
    ctx->pc = 0x315348u;
    {
        const bool branch_taken_0x315348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x315348) {
            ctx->pc = 0x31534Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315348u;
            // 0x31534c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315368u;
            goto label_315368;
        }
    }
    ctx->pc = 0x315350u;
label_315350:
    // 0x315350: 0x8c830af0  lw          $v1, 0xAF0($a0)
    ctx->pc = 0x315350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2800)));
label_315354:
    // 0x315354: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x315354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_315358:
    // 0x315358: 0x40f809  jalr        $v0
label_31535c:
    if (ctx->pc == 0x31535Cu) {
        ctx->pc = 0x31535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315358u;
        // 0x31535c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315360u;
        goto label_315360;
    }
    ctx->pc = 0x315358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x315360u);
        ctx->pc = 0x31535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315358u;
        // 0x31535c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315358u, 0x315360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315360u;
label_315360:
    // 0x315360: 0xae00bd30  sw          $zero, -0x42D0($s0)
    ctx->pc = 0x315360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950192), GPR_U32(ctx, 0));
label_315364:
    // 0x315364: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x315364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_315368:
    // 0x315368: 0x27b00008  addiu       $s0, $sp, 0x8
    ctx->pc = 0x315368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_31536c:
    // 0x31536c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x31536cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_315370:
    // 0x315370: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x315370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_315374:
    // 0x315374: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x315374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_315378:
    // 0x315378: 0x244322c0  addiu       $v1, $v0, 0x22C0
    ctx->pc = 0x315378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8896));
label_31537c:
    // 0x31537c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x31537cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_315380:
    // 0x315380: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x315380u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
label_315384:
    // 0x315384: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x315384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_315388:
    // 0x315388: 0x3c0c0040  lui         $t4, 0x40
    ctx->pc = 0x315388u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)64 << 16));
label_31538c:
    // 0x31538c: 0x8c4422c0  lw          $a0, 0x22C0($v0)
    ctx->pc = 0x31538cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8896)));
label_315390:
    // 0x315390: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x315390u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
label_315394:
    // 0x315394: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x315394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_315398:
    // 0x315398: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x315398u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_31539c:
    // 0x31539c: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x31539cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3153a0:
    // 0x3153a0: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x3153a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
label_3153a4:
    // 0x3153a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3153a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3153a8:
    // 0x3153a8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3153a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_3153ac:
    // 0x3153ac: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3153acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_3153b0:
    // 0x3153b0: 0xac4622c0  sw          $a2, 0x22C0($v0)
    ctx->pc = 0x3153b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8896), GPR_U32(ctx, 6));
label_3153b4:
    // 0x3153b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3153b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3153b8:
    // 0x3153b8: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x3153b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_3153bc:
    // 0x3153bc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3153bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3153c0:
    // 0x3153c0: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x3153c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3153c4:
    // 0x3153c4: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x3153c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3153c8:
    // 0x3153c8: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x3153c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3153cc:
    // 0x3153cc: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x3153ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3153d0:
    // 0x3153d0: 0xa160bd24  sb          $zero, -0x42DC($t3)
    ctx->pc = 0x3153d0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 4294950180), (uint8_t)GPR_U32(ctx, 0));
label_3153d4:
    // 0x3153d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3153d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3153d8:
    // 0x3153d8: 0xad80bd3c  sw          $zero, -0x42C4($t4)
    ctx->pc = 0x3153d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294950204), GPR_U32(ctx, 0));
label_3153dc:
    // 0x3153dc: 0xad40bd44  sw          $zero, -0x42BC($t2)
    ctx->pc = 0x3153dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294950212), GPR_U32(ctx, 0));
label_3153e0:
    // 0x3153e0: 0xad00bd40  sw          $zero, -0x42C0($t0)
    ctx->pc = 0x3153e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294950208), GPR_U32(ctx, 0));
label_3153e4:
    // 0x3153e4: 0xae40bd48  sw          $zero, -0x42B8($s2)
    ctx->pc = 0x3153e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294950216), GPR_U32(ctx, 0));
label_3153e8:
    // 0x3153e8: 0xad20bd5c  sw          $zero, -0x42A4($t1)
    ctx->pc = 0x3153e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294950236), GPR_U32(ctx, 0));
label_3153ec:
    // 0x3153ec: 0xac80bd50  sw          $zero, -0x42B0($a0)
    ctx->pc = 0x3153ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950224), GPR_U32(ctx, 0));
label_3153f0:
    // 0x3153f0: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x3153f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3153f4:
    // 0x3153f4: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x3153f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3153f8:
    // 0x3153f8: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x3153f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3153fc:
    // 0x3153fc: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x3153fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_315400:
    // 0x315400: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_315404:
    if (ctx->pc == 0x315404u) {
        ctx->pc = 0x315404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315400u;
        // 0x315404: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315408u;
        goto label_315408;
    }
    ctx->pc = 0x315400u;
    {
        const bool branch_taken_0x315400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315400) {
            ctx->pc = 0x315404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315400u;
            // 0x315404: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315414u;
            goto label_315414;
        }
    }
    ctx->pc = 0x315408u;
label_315408:
    // 0x315408: 0xc0f5222  jal         func_3D4888
label_31540c:
    if (ctx->pc == 0x31540Cu) {
        ctx->pc = 0x31540Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315408u;
        // 0x31540c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315410u;
        goto label_315410;
    }
    ctx->pc = 0x315408u;
    SET_GPR_U32(ctx, 31, 0x315410u);
    ctx->pc = 0x31540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315408u;
    // 0x31540c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x315408u, 0x315410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315410u;
label_315410:
    // 0x315410: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x315410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_315414:
    // 0x315414: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x315414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_315418:
    // 0x315418: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x315418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_31541c:
    // 0x31541c: 0x246422d8  addiu       $a0, $v1, 0x22D8
    ctx->pc = 0x31541cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8920));
label_315420:
    // 0x315420: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x315420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_315424:
    // 0x315424: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x315424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_315428:
    // 0x315428: 0x8c6222d8  lw          $v0, 0x22D8($v1)
    ctx->pc = 0x315428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8920)));
label_31542c:
    // 0x31542c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x31542cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_315430:
    // 0x315430: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x315430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_315434:
    // 0x315434: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x315434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_315438:
    // 0x315438: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x315438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_31543c:
    // 0x31543c: 0xac6622d8  sw          $a2, 0x22D8($v1)
    ctx->pc = 0x31543cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8920), GPR_U32(ctx, 6));
label_315440:
    // 0x315440: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x315440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_315444:
    // 0x315444: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x315444u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_315448:
    // 0x315448: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x315448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_31544c:
    // 0x31544c: 0x6882000f  ldl         $v0, 0xF($a0)
    ctx->pc = 0x31544cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_315450:
    // 0x315450: 0x6c820008  ldr         $v0, 0x8($a0)
    ctx->pc = 0x315450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_315454:
    // 0x315454: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x315454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_315458:
    // 0x315458: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x315458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31545c:
    // 0x31545c: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x31545cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_315460:
    // 0x315460: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x315460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_315464:
    // 0x315464: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x315464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_315468:
    // 0x315468: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x315468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31546c:
    // 0x31546c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x31546cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_315470:
    // 0x315470: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_315474:
    if (ctx->pc == 0x315474u) {
        ctx->pc = 0x315474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315470u;
        // 0x315474: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315478u;
        goto label_315478;
    }
    ctx->pc = 0x315470u;
    {
        const bool branch_taken_0x315470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x315470) {
            ctx->pc = 0x315474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315470u;
            // 0x315474: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315484u;
            goto label_315484;
        }
    }
    ctx->pc = 0x315478u;
label_315478:
    // 0x315478: 0xc0f5222  jal         func_3D4888
label_31547c:
    if (ctx->pc == 0x31547Cu) {
        ctx->pc = 0x315480u;
        goto label_315480;
    }
    ctx->pc = 0x315478u;
    SET_GPR_U32(ctx, 31, 0x315480u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x315478u, 0x315480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315480u;
label_315480:
    // 0x315480: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x315480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_315484:
    // 0x315484: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x315484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_315488:
    // 0x315488: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x315488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_31548c:
    // 0x31548c: 0x246422f0  addiu       $a0, $v1, 0x22F0
    ctx->pc = 0x31548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8944));
label_315490:
    // 0x315490: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x315490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_315494:
    // 0x315494: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x315494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_315498:
    // 0x315498: 0x8c6222f0  lw          $v0, 0x22F0($v1)
    ctx->pc = 0x315498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8944)));
label_31549c:
    // 0x31549c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x31549cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3154a0:
    // 0x3154a0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x3154a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3154a4:
    // 0x3154a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3154a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3154a8:
    // 0x3154a8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3154a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_3154ac:
    // 0x3154ac: 0xac6622f0  sw          $a2, 0x22F0($v1)
    ctx->pc = 0x3154acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8944), GPR_U32(ctx, 6));
label_3154b0:
    // 0x3154b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3154b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3154b4:
    // 0x3154b4: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x3154b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_3154b8:
    // 0x3154b8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3154b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3154bc:
    // 0x3154bc: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x3154bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3154c0:
    // 0x3154c0: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x3154c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3154c4:
    // 0x3154c4: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x3154c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3154c8:
    // 0x3154c8: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x3154c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3154cc:
    // 0x3154cc: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x3154ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3154d0:
    // 0x3154d0: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x3154d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3154d4:
    // 0x3154d4: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x3154d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3154d8:
    // 0x3154d8: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x3154d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3154dc:
    // 0x3154dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3154dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3154e0:
    // 0x3154e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3154e4:
    if (ctx->pc == 0x3154E4u) {
        ctx->pc = 0x3154E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154E0u;
        // 0x3154e4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3154E8u;
        goto label_3154e8;
    }
    ctx->pc = 0x3154E0u;
    {
        const bool branch_taken_0x3154e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3154E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3154E0u;
        // 0x3154e4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3154e0) {
            ctx->pc = 0x3154F4u;
            goto label_3154f4;
        }
    }
    ctx->pc = 0x3154E8u;
label_3154e8:
    // 0x3154e8: 0xc0f5222  jal         func_3D4888
label_3154ec:
    if (ctx->pc == 0x3154ECu) {
        ctx->pc = 0x3154F0u;
        goto label_3154f0;
    }
    ctx->pc = 0x3154E8u;
    SET_GPR_U32(ctx, 31, 0x3154F0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3154E8u, 0x3154F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3154F0u;
label_3154f0:
    // 0x3154f0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3154f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3154f4:
    // 0x3154f4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3154f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3154f8:
    // 0x3154f8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3154f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3154fc:
    // 0x3154fc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x3154fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_315500:
    // 0x315500: 0x3e00008  jr          $ra
label_315504:
    if (ctx->pc == 0x315504u) {
        ctx->pc = 0x315504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315500u;
        // 0x315504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315508u;
        goto label_fallthrough_0x315500;
    }
    ctx->pc = 0x315500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315500u;
        // 0x315504: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x315500:
    ctx->pc = 0x315508u;
}
