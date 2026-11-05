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

// Function: sub_00317508
// Address: 0x317508 - 0x317698
void sub_00317508_0x317508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317508_0x317508");
#endif

    switch (ctx->pc) {
        case 0x317508u: goto label_317508;
        case 0x31750cu: goto label_31750c;
        case 0x317510u: goto label_317510;
        case 0x317514u: goto label_317514;
        case 0x317518u: goto label_317518;
        case 0x31751cu: goto label_31751c;
        case 0x317520u: goto label_317520;
        case 0x317524u: goto label_317524;
        case 0x317528u: goto label_317528;
        case 0x31752cu: goto label_31752c;
        case 0x317530u: goto label_317530;
        case 0x317534u: goto label_317534;
        case 0x317538u: goto label_317538;
        case 0x31753cu: goto label_31753c;
        case 0x317540u: goto label_317540;
        case 0x317544u: goto label_317544;
        case 0x317548u: goto label_317548;
        case 0x31754cu: goto label_31754c;
        case 0x317550u: goto label_317550;
        case 0x317554u: goto label_317554;
        case 0x317558u: goto label_317558;
        case 0x31755cu: goto label_31755c;
        case 0x317560u: goto label_317560;
        case 0x317564u: goto label_317564;
        case 0x317568u: goto label_317568;
        case 0x31756cu: goto label_31756c;
        case 0x317570u: goto label_317570;
        case 0x317574u: goto label_317574;
        case 0x317578u: goto label_317578;
        case 0x31757cu: goto label_31757c;
        case 0x317580u: goto label_317580;
        case 0x317584u: goto label_317584;
        case 0x317588u: goto label_317588;
        case 0x31758cu: goto label_31758c;
        case 0x317590u: goto label_317590;
        case 0x317594u: goto label_317594;
        case 0x317598u: goto label_317598;
        case 0x31759cu: goto label_31759c;
        case 0x3175a0u: goto label_3175a0;
        case 0x3175a4u: goto label_3175a4;
        case 0x3175a8u: goto label_3175a8;
        case 0x3175acu: goto label_3175ac;
        case 0x3175b0u: goto label_3175b0;
        case 0x3175b4u: goto label_3175b4;
        case 0x3175b8u: goto label_3175b8;
        case 0x3175bcu: goto label_3175bc;
        case 0x3175c0u: goto label_3175c0;
        case 0x3175c4u: goto label_3175c4;
        case 0x3175c8u: goto label_3175c8;
        case 0x3175ccu: goto label_3175cc;
        case 0x3175d0u: goto label_3175d0;
        case 0x3175d4u: goto label_3175d4;
        case 0x3175d8u: goto label_3175d8;
        case 0x3175dcu: goto label_3175dc;
        case 0x3175e0u: goto label_3175e0;
        case 0x3175e4u: goto label_3175e4;
        case 0x3175e8u: goto label_3175e8;
        case 0x3175ecu: goto label_3175ec;
        case 0x3175f0u: goto label_3175f0;
        case 0x3175f4u: goto label_3175f4;
        case 0x3175f8u: goto label_3175f8;
        case 0x3175fcu: goto label_3175fc;
        case 0x317600u: goto label_317600;
        case 0x317604u: goto label_317604;
        case 0x317608u: goto label_317608;
        case 0x31760cu: goto label_31760c;
        case 0x317610u: goto label_317610;
        case 0x317614u: goto label_317614;
        case 0x317618u: goto label_317618;
        case 0x31761cu: goto label_31761c;
        case 0x317620u: goto label_317620;
        case 0x317624u: goto label_317624;
        case 0x317628u: goto label_317628;
        case 0x31762cu: goto label_31762c;
        case 0x317630u: goto label_317630;
        case 0x317634u: goto label_317634;
        case 0x317638u: goto label_317638;
        case 0x31763cu: goto label_31763c;
        case 0x317640u: goto label_317640;
        case 0x317644u: goto label_317644;
        case 0x317648u: goto label_317648;
        case 0x31764cu: goto label_31764c;
        case 0x317650u: goto label_317650;
        case 0x317654u: goto label_317654;
        case 0x317658u: goto label_317658;
        case 0x31765cu: goto label_31765c;
        case 0x317660u: goto label_317660;
        case 0x317664u: goto label_317664;
        case 0x317668u: goto label_317668;
        case 0x31766cu: goto label_31766c;
        case 0x317670u: goto label_317670;
        case 0x317674u: goto label_317674;
        case 0x317678u: goto label_317678;
        case 0x31767cu: goto label_31767c;
        case 0x317680u: goto label_317680;
        case 0x317684u: goto label_317684;
        case 0x317688u: goto label_317688;
        case 0x31768cu: goto label_31768c;
        case 0x317690u: goto label_317690;
        case 0x317694u: goto label_317694;
        default: break;
    }

    ctx->pc = 0x317508u;

label_317508:
    // 0x317508: 0x27bdf7a0  addiu       $sp, $sp, -0x860
    ctx->pc = 0x317508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965152));
label_31750c:
    // 0x31750c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x31750cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
label_317510:
    // 0x317510: 0xffb10818  sd          $s1, 0x818($sp)
    ctx->pc = 0x317510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2072), GPR_U64(ctx, 17));
label_317514:
    // 0x317514: 0x244522b0  addiu       $a1, $v0, 0x22B0
    ctx->pc = 0x317514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8880));
label_317518:
    // 0x317518: 0xffb20820  sd          $s2, 0x820($sp)
    ctx->pc = 0x317518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2080), GPR_U64(ctx, 18));
label_31751c:
    // 0x31751c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31751cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317520:
    // 0x317520: 0xffb30828  sd          $s3, 0x828($sp)
    ctx->pc = 0x317520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2088), GPR_U64(ctx, 19));
label_317524:
    // 0x317524: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x317524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317528:
    // 0x317528: 0xffb00810  sd          $s0, 0x810($sp)
    ctx->pc = 0x317528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2064), GPR_U64(ctx, 16));
label_31752c:
    // 0x31752c: 0xffb40830  sd          $s4, 0x830($sp)
    ctx->pc = 0x31752cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2096), GPR_U64(ctx, 20));
label_317530:
    // 0x317530: 0xffb50838  sd          $s5, 0x838($sp)
    ctx->pc = 0x317530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2104), GPR_U64(ctx, 21));
label_317534:
    // 0x317534: 0xffb60840  sd          $s6, 0x840($sp)
    ctx->pc = 0x317534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2112), GPR_U64(ctx, 22));
label_317538:
    // 0x317538: 0xffb70848  sd          $s7, 0x848($sp)
    ctx->pc = 0x317538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2120), GPR_U64(ctx, 23));
label_31753c:
    // 0x31753c: 0xffbe0850  sd          $fp, 0x850($sp)
    ctx->pc = 0x31753cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2128), GPR_U64(ctx, 30));
label_317540:
    // 0x317540: 0xffbf0858  sd          $ra, 0x858($sp)
    ctx->pc = 0x317540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2136), GPR_U64(ctx, 31));
label_317544:
    // 0x317544: 0x8c4422b0  lw          $a0, 0x22B0($v0)
    ctx->pc = 0x317544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8880)));
label_317548:
    // 0x317548: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x317548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_31754c:
    // 0x31754c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x31754cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_317550:
    // 0x317550: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x317550u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_317554:
    // 0x317554: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x317554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_317558:
    // 0x317558: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_31755c:
    if (ctx->pc == 0x31755Cu) {
        ctx->pc = 0x31755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317558u;
        // 0x31755c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317560u;
        goto label_317560;
    }
    ctx->pc = 0x317558u;
    {
        const bool branch_taken_0x317558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317558u;
        // 0x31755c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317558) {
            ctx->pc = 0x317608u;
            goto label_317608;
        }
    }
    ctx->pc = 0x317560u;
label_317560:
    // 0x317560: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x317560u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_317564:
    // 0x317564: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x317564u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_317568:
    // 0x317568: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x317568u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
label_31756c:
    // 0x31756c: 0x27b50800  addiu       $s5, $sp, 0x800
    ctx->pc = 0x31756cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
label_317570:
    // 0x317570: 0x24140100  addiu       $s4, $zero, 0x100
    ctx->pc = 0x317570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_317574:
    // 0x317574: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x317574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_317578:
    // 0x317578: 0x8ee322b0  lw          $v1, 0x22B0($s7)
    ctx->pc = 0x317578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8880)));
label_31757c:
    // 0x31757c: 0x0  nop
    ctx->pc = 0x31757cu;
    // NOP
label_317580:
    // 0x317580: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x317580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_317584:
    // 0x317584: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x317584u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_317588:
    // 0x317588: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31758c:
    // 0x31758c: 0x8ec5bd48  lw          $a1, -0x42B8($s6)
    ctx->pc = 0x31758cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294950216)));
label_317590:
    // 0x317590: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x317590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_317594:
    // 0x317594: 0x27a40800  addiu       $a0, $sp, 0x800
    ctx->pc = 0x317594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
label_317598:
    // 0x317598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x317598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31759c:
    // 0x31759c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31759cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3175a0:
    // 0x3175a0: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x3175a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_3175a4:
    // 0x3175a4: 0x8ca60100  lw          $a2, 0x100($a1)
    ctx->pc = 0x3175a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
label_3175a8:
    // 0x3175a8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3175a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3175ac:
    // 0x3175ac: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x3175acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_3175b0:
    // 0x3175b0: 0xc0f6a9a  jal         func_3DAA68
label_3175b4:
    if (ctx->pc == 0x3175B4u) {
        ctx->pc = 0x3175B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175B0u;
        // 0x3175b4: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3175B8u;
        goto label_3175b8;
    }
    ctx->pc = 0x3175B0u;
    SET_GPR_U32(ctx, 31, 0x3175B8u);
    ctx->pc = 0x3175B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3175B0u;
    // 0x3175b4: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x3175B0u, 0x3175B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3175B8u;
label_3175b8:
    // 0x3175b8: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x3175b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3175bc:
    // 0x3175bc: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x3175bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3175c0:
    // 0x3175c0: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x3175c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3175c4:
    // 0x3175c4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3175c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_3175c8:
    // 0x3175c8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3175c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_3175cc:
    // 0x3175cc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3175ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_3175d0:
    // 0x3175d0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3175d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_3175d4:
    // 0x3175d4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3175d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3175d8:
    // 0x3175d8: 0x1254000b  beq         $s2, $s4, . + 4 + (0xB << 2)
label_3175dc:
    if (ctx->pc == 0x3175DCu) {
        ctx->pc = 0x3175DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175D8u;
        // 0x3175dc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3175E0u;
        goto label_3175e0;
    }
    ctx->pc = 0x3175D8u;
    {
        const bool branch_taken_0x3175d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x3175DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3175D8u;
        // 0x3175dc: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175d8) {
            ctx->pc = 0x317608u;
            goto label_317608;
        }
    }
    ctx->pc = 0x3175E0u;
label_3175e0:
    // 0x3175e0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3175e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_3175e4:
    // 0x3175e4: 0x66310001  daddiu      $s1, $s1, 0x1
    ctx->pc = 0x3175e4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)1);
label_3175e8:
    // 0x3175e8: 0x8e6322b0  lw          $v1, 0x22B0($s3)
    ctx->pc = 0x3175e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8880)));
label_3175ec:
    // 0x3175ec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3175ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3175f0:
    // 0x3175f0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3175f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_3175f4:
    // 0x3175f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3175f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3175f8:
    // 0x3175f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3175f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3175fc:
    // 0x3175fc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3175fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_317600:
    // 0x317600: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_317604:
    if (ctx->pc == 0x317604u) {
        ctx->pc = 0x317604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317600u;
        // 0x317604: 0x8ee322b0  lw          $v1, 0x22B0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317608u;
        goto label_317608;
    }
    ctx->pc = 0x317600u;
    {
        const bool branch_taken_0x317600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x317604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317600u;
        // 0x317604: 0x8ee322b0  lw          $v1, 0x22B0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317600) {
            ctx->pc = 0x317580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317580;
        }
    }
    ctx->pc = 0x317608u;
label_317608:
    // 0x317608: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x317608u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
label_31760c:
    // 0x31760c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_317610:
    // 0x317610: 0x24e774d0  addiu       $a3, $a3, 0x74D0
    ctx->pc = 0x317610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29904));
label_317614:
    // 0x317614: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x317614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_317618:
    // 0x317618: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x317618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_31761c:
    // 0x31761c: 0xc0f03a8  jal         func_3C0EA0
label_317620:
    if (ctx->pc == 0x317620u) {
        ctx->pc = 0x317620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31761Cu;
        // 0x317620: 0x2651ffff  addiu       $s1, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317624u;
        goto label_317624;
    }
    ctx->pc = 0x31761Cu;
    SET_GPR_U32(ctx, 31, 0x317624u);
    ctx->pc = 0x317620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31761Cu;
    // 0x317620: 0x2651ffff  addiu       $s1, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0EA0u, 0x31761Cu, 0x317624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317624u;
label_317624:
    // 0x317624: 0x620000f  bltz        $s1, . + 4 + (0xF << 2)
label_317628:
    if (ctx->pc == 0x317628u) {
        ctx->pc = 0x317628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317624u;
        // 0x317628: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31762Cu;
        goto label_31762c;
    }
    ctx->pc = 0x317624u;
    {
        const bool branch_taken_0x317624 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x317628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317624u;
        // 0x317628: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317624) {
            ctx->pc = 0x317664u;
            goto label_317664;
        }
    }
    ctx->pc = 0x31762Cu;
label_31762c:
    // 0x31762c: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x31762cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_317630:
    // 0x317630: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x317630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_317634:
    // 0x317634: 0x0  nop
    ctx->pc = 0x317634u;
    // NOP
label_317638:
    // 0x317638: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x317638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_31763c:
    // 0x31763c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x31763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_317640:
    // 0x317640: 0x40f809  jalr        $v0
label_317644:
    if (ctx->pc == 0x317644u) {
        ctx->pc = 0x317644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317640u;
        // 0x317644: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317648u;
        goto label_317648;
    }
    ctx->pc = 0x317640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x317648u);
        ctx->pc = 0x317644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317640u;
        // 0x317644: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317640u, 0x317648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x317648u;
label_317648:
    // 0x317648: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x317648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31764c:
    // 0x31764c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x31764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_317650:
    // 0x317650: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x317650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_317654:
    // 0x317654: 0x40f809  jalr        $v0
label_317658:
    if (ctx->pc == 0x317658u) {
        ctx->pc = 0x317658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317654u;
        // 0x317658: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31765Cu;
        goto label_31765c;
    }
    ctx->pc = 0x317654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31765Cu);
        ctx->pc = 0x317658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317654u;
        // 0x317658: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317654u, 0x31765Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31765Cu;
label_31765c:
    // 0x31765c: 0x623fff6  bgezl       $s1, . + 4 + (-0xA << 2)
label_317660:
    if (ctx->pc == 0x317660u) {
        ctx->pc = 0x317660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31765Cu;
        // 0x317660: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317664u;
        goto label_317664;
    }
    ctx->pc = 0x31765Cu;
    {
        const bool branch_taken_0x31765c = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x31765c) {
            ctx->pc = 0x317660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31765Cu;
            // 0x317660: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317638;
        }
    }
    ctx->pc = 0x317664u;
label_317664:
    // 0x317664: 0xdfb00810  ld          $s0, 0x810($sp)
    ctx->pc = 0x317664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 2064)));
label_317668:
    // 0x317668: 0xdfb10818  ld          $s1, 0x818($sp)
    ctx->pc = 0x317668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 2072)));
label_31766c:
    // 0x31766c: 0xdfb20820  ld          $s2, 0x820($sp)
    ctx->pc = 0x31766cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 2080)));
label_317670:
    // 0x317670: 0xdfb30828  ld          $s3, 0x828($sp)
    ctx->pc = 0x317670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 2088)));
label_317674:
    // 0x317674: 0xdfb40830  ld          $s4, 0x830($sp)
    ctx->pc = 0x317674u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 2096)));
label_317678:
    // 0x317678: 0xdfb50838  ld          $s5, 0x838($sp)
    ctx->pc = 0x317678u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 2104)));
label_31767c:
    // 0x31767c: 0xdfb60840  ld          $s6, 0x840($sp)
    ctx->pc = 0x31767cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 2112)));
label_317680:
    // 0x317680: 0xdfb70848  ld          $s7, 0x848($sp)
    ctx->pc = 0x317680u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 2120)));
label_317684:
    // 0x317684: 0xdfbe0850  ld          $fp, 0x850($sp)
    ctx->pc = 0x317684u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 2128)));
label_317688:
    // 0x317688: 0xdfbf0858  ld          $ra, 0x858($sp)
    ctx->pc = 0x317688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2136)));
label_31768c:
    // 0x31768c: 0x3e00008  jr          $ra
label_317690:
    if (ctx->pc == 0x317690u) {
        ctx->pc = 0x317690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31768Cu;
        // 0x317690: 0x27bd0860  addiu       $sp, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x317694u;
        goto label_317694;
    }
    ctx->pc = 0x31768Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31768Cu;
        // 0x317690: 0x27bd0860  addiu       $sp, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31768Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317694u;
label_317694:
    // 0x317694: 0x0  nop
    ctx->pc = 0x317694u;
    // NOP
    ctx->pc = 0x317698u;
}
