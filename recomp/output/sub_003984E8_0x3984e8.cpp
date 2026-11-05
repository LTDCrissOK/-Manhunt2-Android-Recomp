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

// Function: sub_003984E8
// Address: 0x3984e8 - 0x398608
void sub_003984E8_0x3984e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003984E8_0x3984e8");
#endif

    switch (ctx->pc) {
        case 0x3984e8u: goto label_3984e8;
        case 0x3984ecu: goto label_3984ec;
        case 0x3984f0u: goto label_3984f0;
        case 0x3984f4u: goto label_3984f4;
        case 0x3984f8u: goto label_3984f8;
        case 0x3984fcu: goto label_3984fc;
        case 0x398500u: goto label_398500;
        case 0x398504u: goto label_398504;
        case 0x398508u: goto label_398508;
        case 0x39850cu: goto label_39850c;
        case 0x398510u: goto label_398510;
        case 0x398514u: goto label_398514;
        case 0x398518u: goto label_398518;
        case 0x39851cu: goto label_39851c;
        case 0x398520u: goto label_398520;
        case 0x398524u: goto label_398524;
        case 0x398528u: goto label_398528;
        case 0x39852cu: goto label_39852c;
        case 0x398530u: goto label_398530;
        case 0x398534u: goto label_398534;
        case 0x398538u: goto label_398538;
        case 0x39853cu: goto label_39853c;
        case 0x398540u: goto label_398540;
        case 0x398544u: goto label_398544;
        case 0x398548u: goto label_398548;
        case 0x39854cu: goto label_39854c;
        case 0x398550u: goto label_398550;
        case 0x398554u: goto label_398554;
        case 0x398558u: goto label_398558;
        case 0x39855cu: goto label_39855c;
        case 0x398560u: goto label_398560;
        case 0x398564u: goto label_398564;
        case 0x398568u: goto label_398568;
        case 0x39856cu: goto label_39856c;
        case 0x398570u: goto label_398570;
        case 0x398574u: goto label_398574;
        case 0x398578u: goto label_398578;
        case 0x39857cu: goto label_39857c;
        case 0x398580u: goto label_398580;
        case 0x398584u: goto label_398584;
        case 0x398588u: goto label_398588;
        case 0x39858cu: goto label_39858c;
        case 0x398590u: goto label_398590;
        case 0x398594u: goto label_398594;
        case 0x398598u: goto label_398598;
        case 0x39859cu: goto label_39859c;
        case 0x3985a0u: goto label_3985a0;
        case 0x3985a4u: goto label_3985a4;
        case 0x3985a8u: goto label_3985a8;
        case 0x3985acu: goto label_3985ac;
        case 0x3985b0u: goto label_3985b0;
        case 0x3985b4u: goto label_3985b4;
        case 0x3985b8u: goto label_3985b8;
        case 0x3985bcu: goto label_3985bc;
        case 0x3985c0u: goto label_3985c0;
        case 0x3985c4u: goto label_3985c4;
        case 0x3985c8u: goto label_3985c8;
        case 0x3985ccu: goto label_3985cc;
        case 0x3985d0u: goto label_3985d0;
        case 0x3985d4u: goto label_3985d4;
        case 0x3985d8u: goto label_3985d8;
        case 0x3985dcu: goto label_3985dc;
        case 0x3985e0u: goto label_3985e0;
        case 0x3985e4u: goto label_3985e4;
        case 0x3985e8u: goto label_3985e8;
        case 0x3985ecu: goto label_3985ec;
        case 0x3985f0u: goto label_3985f0;
        case 0x3985f4u: goto label_3985f4;
        case 0x3985f8u: goto label_3985f8;
        case 0x3985fcu: goto label_3985fc;
        case 0x398600u: goto label_398600;
        case 0x398604u: goto label_398604;
        default: break;
    }

    ctx->pc = 0x3984e8u;

label_3984e8:
    // 0x3984e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3984e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3984ec:
    // 0x3984ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3984ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3984f0:
    // 0x3984f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3984f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3984f4:
    // 0x3984f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3984f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3984f8:
    // 0x3984f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3984f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3984fc:
    // 0x3984fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3984fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_398500:
    // 0x398500: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x398500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_398504:
    // 0x398504: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x398504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_398508:
    // 0x398508: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x398508u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_39850c:
    // 0x39850c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x39850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_398510:
    // 0x398510: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x398510u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_398514:
    // 0x398514: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x398514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_398518:
    // 0x398518: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x398518u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_39851c:
    // 0x39851c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x39851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_398520:
    // 0x398520: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x398520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_398524:
    // 0x398524: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x398524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_398528:
    // 0x398528: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x398528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_39852c:
    // 0x39852c: 0x10000008  b           . + 4 + (0x8 << 2)
label_398530:
    if (ctx->pc == 0x398530u) {
        ctx->pc = 0x398530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39852Cu;
        // 0x398530: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398534u;
        goto label_398534;
    }
    ctx->pc = 0x39852Cu;
    {
        const bool branch_taken_0x39852c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39852Cu;
        // 0x398530: 0x8e54000c  lw          $s4, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39852c) {
            ctx->pc = 0x398550u;
            goto label_398550;
        }
    }
    ctx->pc = 0x398534u;
label_398534:
    // 0x398534: 0x0  nop
    ctx->pc = 0x398534u;
    // NOP
label_398538:
    // 0x398538: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x398538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39853c:
    // 0x39853c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x39853cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_398540:
    // 0x398540: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x398540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_398544:
    // 0x398544: 0x8c680018  lw          $t0, 0x18($v1)
    ctx->pc = 0x398544u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_398548:
    // 0x398548: 0x100f809  jalr        $t0
label_39854c:
    if (ctx->pc == 0x39854Cu) {
        ctx->pc = 0x39854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398548u;
        // 0x39854c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398550u;
        goto label_398550;
    }
    ctx->pc = 0x398548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x398550u);
        ctx->pc = 0x39854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398548u;
        // 0x39854c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398548u, 0x398550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x398550u;
label_398550:
    // 0x398550: 0xc0eb860  jal         func_3AE180
label_398554:
    if (ctx->pc == 0x398554u) {
        ctx->pc = 0x398554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398550u;
        // 0x398554: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398558u;
        goto label_398558;
    }
    ctx->pc = 0x398550u;
    SET_GPR_U32(ctx, 31, 0x398558u);
    ctx->pc = 0x398554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398550u;
    // 0x398554: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE180u, 0x398550u, 0x398558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398558u;
label_398558:
    // 0x398558: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x398558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39855c:
    // 0x39855c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x39855cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_398560:
    // 0x398560: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x398560u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_398564:
    // 0x398564: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x398564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_398568:
    // 0x398568: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x398568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_39856c:
    // 0x39856c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_398570:
    if (ctx->pc == 0x398570u) {
        ctx->pc = 0x398570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39856Cu;
        // 0x398570: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398574u;
        goto label_398574;
    }
    ctx->pc = 0x39856Cu;
    {
        const bool branch_taken_0x39856c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x398570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39856Cu;
        // 0x398570: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39856c) {
            ctx->pc = 0x398538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_398538;
        }
    }
    ctx->pc = 0x398574u;
label_398574:
    // 0x398574: 0xc0ead5a  jal         func_3AB568
label_398578:
    if (ctx->pc == 0x398578u) {
        ctx->pc = 0x398578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398574u;
        // 0x398578: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39857Cu;
        goto label_39857c;
    }
    ctx->pc = 0x398574u;
    SET_GPR_U32(ctx, 31, 0x39857Cu);
    ctx->pc = 0x398578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398574u;
    // 0x398578: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB568u, 0x398574u, 0x39857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39857Cu;
label_39857c:
    // 0x39857c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x39857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_398580:
    // 0x398580: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x398580u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_398584:
    // 0x398584: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x398584u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_398588:
    // 0x398588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x398588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39858c:
    // 0x39858c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x39858cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_398590:
    // 0x398590: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x398590u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_398594:
    // 0x398594: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x398594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_398598:
    // 0x398598: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x398598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_39859c:
    // 0x39859c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x39859cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_3985a0:
    // 0x3985a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3985a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3985a4:
    // 0x3985a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3985a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_3985a8:
    // 0x3985a8: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x3985a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3985ac:
    // 0x3985ac: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x3985acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3985b0:
    // 0x3985b0: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x3985b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
label_3985b4:
    // 0x3985b4: 0x8e43003c  lw          $v1, 0x3C($s2)
    ctx->pc = 0x3985b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_3985b8:
    // 0x3985b8: 0x4620005  bltzl       $v1, . + 4 + (0x5 << 2)
label_3985bc:
    if (ctx->pc == 0x3985BCu) {
        ctx->pc = 0x3985BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985B8u;
        // 0x3985bc: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3985C0u;
        goto label_3985c0;
    }
    ctx->pc = 0x3985B8u;
    {
        const bool branch_taken_0x3985b8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3985b8) {
            ctx->pc = 0x3985BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3985B8u;
            // 0x3985bc: 0x3c021fff  lui         $v0, 0x1FFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3985D0u;
            goto label_3985d0;
        }
    }
    ctx->pc = 0x3985C0u;
label_3985c0:
    // 0x3985c0: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x3985c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3985c4:
    // 0x3985c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3985c8:
    if (ctx->pc == 0x3985C8u) {
        ctx->pc = 0x3985C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985C4u;
        // 0x3985c8: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3985CCu;
        goto label_3985cc;
    }
    ctx->pc = 0x3985C4u;
    {
        const bool branch_taken_0x3985c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3985C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3985C4u;
        // 0x3985c8: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3985c4) {
            ctx->pc = 0x3985D4u;
            goto label_3985d4;
        }
    }
    ctx->pc = 0x3985CCu;
label_3985cc:
    // 0x3985cc: 0x0  nop
    ctx->pc = 0x3985ccu;
    // NOP
label_3985d0:
    // 0x3985d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3985d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3985d4:
    // 0x3985d4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3985d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3985d8:
    // 0x3985d8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3985d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3985dc:
    // 0x3985dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3985dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3985e0:
    // 0x3985e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3985e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3985e4:
    // 0x3985e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3985e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3985e8:
    // 0x3985e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3985e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3985ec:
    // 0x3985ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3985ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3985f0:
    // 0x3985f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3985f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3985f4:
    // 0x3985f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3985f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3985f8:
    // 0x3985f8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3985f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3985fc:
    // 0x3985fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3985fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_398600:
    // 0x398600: 0x80eb85a  j           func_3AE168
label_398604:
    if (ctx->pc == 0x398604u) {
        ctx->pc = 0x398604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398600u;
        // 0x398604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x398608u;
        goto label_fallthrough_0x398600;
    }
    ctx->pc = 0x398600u;
    ctx->pc = 0x398604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398600u;
    // 0x398604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x398600u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x398600:
    ctx->pc = 0x398608u;
}
