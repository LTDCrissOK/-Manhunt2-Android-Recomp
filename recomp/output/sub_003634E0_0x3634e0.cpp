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

// Function: sub_003634E0
// Address: 0x3634e0 - 0x363690
void sub_003634E0_0x3634e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003634E0_0x3634e0");
#endif

    switch (ctx->pc) {
        case 0x3634e0u: goto label_3634e0;
        case 0x3634e4u: goto label_3634e4;
        case 0x3634e8u: goto label_3634e8;
        case 0x3634ecu: goto label_3634ec;
        case 0x3634f0u: goto label_3634f0;
        case 0x3634f4u: goto label_3634f4;
        case 0x3634f8u: goto label_3634f8;
        case 0x3634fcu: goto label_3634fc;
        case 0x363500u: goto label_363500;
        case 0x363504u: goto label_363504;
        case 0x363508u: goto label_363508;
        case 0x36350cu: goto label_36350c;
        case 0x363510u: goto label_363510;
        case 0x363514u: goto label_363514;
        case 0x363518u: goto label_363518;
        case 0x36351cu: goto label_36351c;
        case 0x363520u: goto label_363520;
        case 0x363524u: goto label_363524;
        case 0x363528u: goto label_363528;
        case 0x36352cu: goto label_36352c;
        case 0x363530u: goto label_363530;
        case 0x363534u: goto label_363534;
        case 0x363538u: goto label_363538;
        case 0x36353cu: goto label_36353c;
        case 0x363540u: goto label_363540;
        case 0x363544u: goto label_363544;
        case 0x363548u: goto label_363548;
        case 0x36354cu: goto label_36354c;
        case 0x363550u: goto label_363550;
        case 0x363554u: goto label_363554;
        case 0x363558u: goto label_363558;
        case 0x36355cu: goto label_36355c;
        case 0x363560u: goto label_363560;
        case 0x363564u: goto label_363564;
        case 0x363568u: goto label_363568;
        case 0x36356cu: goto label_36356c;
        case 0x363570u: goto label_363570;
        case 0x363574u: goto label_363574;
        case 0x363578u: goto label_363578;
        case 0x36357cu: goto label_36357c;
        case 0x363580u: goto label_363580;
        case 0x363584u: goto label_363584;
        case 0x363588u: goto label_363588;
        case 0x36358cu: goto label_36358c;
        case 0x363590u: goto label_363590;
        case 0x363594u: goto label_363594;
        case 0x363598u: goto label_363598;
        case 0x36359cu: goto label_36359c;
        case 0x3635a0u: goto label_3635a0;
        case 0x3635a4u: goto label_3635a4;
        case 0x3635a8u: goto label_3635a8;
        case 0x3635acu: goto label_3635ac;
        case 0x3635b0u: goto label_3635b0;
        case 0x3635b4u: goto label_3635b4;
        case 0x3635b8u: goto label_3635b8;
        case 0x3635bcu: goto label_3635bc;
        case 0x3635c0u: goto label_3635c0;
        case 0x3635c4u: goto label_3635c4;
        case 0x3635c8u: goto label_3635c8;
        case 0x3635ccu: goto label_3635cc;
        case 0x3635d0u: goto label_3635d0;
        case 0x3635d4u: goto label_3635d4;
        case 0x3635d8u: goto label_3635d8;
        case 0x3635dcu: goto label_3635dc;
        case 0x3635e0u: goto label_3635e0;
        case 0x3635e4u: goto label_3635e4;
        case 0x3635e8u: goto label_3635e8;
        case 0x3635ecu: goto label_3635ec;
        case 0x3635f0u: goto label_3635f0;
        case 0x3635f4u: goto label_3635f4;
        case 0x3635f8u: goto label_3635f8;
        case 0x3635fcu: goto label_3635fc;
        case 0x363600u: goto label_363600;
        case 0x363604u: goto label_363604;
        case 0x363608u: goto label_363608;
        case 0x36360cu: goto label_36360c;
        case 0x363610u: goto label_363610;
        case 0x363614u: goto label_363614;
        case 0x363618u: goto label_363618;
        case 0x36361cu: goto label_36361c;
        case 0x363620u: goto label_363620;
        case 0x363624u: goto label_363624;
        case 0x363628u: goto label_363628;
        case 0x36362cu: goto label_36362c;
        case 0x363630u: goto label_363630;
        case 0x363634u: goto label_363634;
        case 0x363638u: goto label_363638;
        case 0x36363cu: goto label_36363c;
        case 0x363640u: goto label_363640;
        case 0x363644u: goto label_363644;
        case 0x363648u: goto label_363648;
        case 0x36364cu: goto label_36364c;
        case 0x363650u: goto label_363650;
        case 0x363654u: goto label_363654;
        case 0x363658u: goto label_363658;
        case 0x36365cu: goto label_36365c;
        case 0x363660u: goto label_363660;
        case 0x363664u: goto label_363664;
        case 0x363668u: goto label_363668;
        case 0x36366cu: goto label_36366c;
        case 0x363670u: goto label_363670;
        case 0x363674u: goto label_363674;
        case 0x363678u: goto label_363678;
        case 0x36367cu: goto label_36367c;
        case 0x363680u: goto label_363680;
        case 0x363684u: goto label_363684;
        case 0x363688u: goto label_363688;
        case 0x36368cu: goto label_36368c;
        default: break;
    }

    ctx->pc = 0x3634e0u;

label_3634e0:
    // 0x3634e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3634e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3634e4:
    // 0x3634e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3634e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3634e8:
    // 0x3634e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3634e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3634ec:
    // 0x3634ec: 0x24424668  addiu       $v0, $v0, 0x4668
    ctx->pc = 0x3634ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18024));
label_3634f0:
    // 0x3634f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3634f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3634f4:
    // 0x3634f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3634f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3634f8:
    // 0x3634f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3634f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3634fc:
    // 0x3634fc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3634fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_363500:
    // 0x363500: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x363500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_363504:
    // 0x363504: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x363504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_363508:
    // 0x363508: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x363508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_36350c:
    // 0x36350c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x36350cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_363510:
    // 0x363510: 0xc0f6a96  jal         func_3DAA58
label_363514:
    if (ctx->pc == 0x363514u) {
        ctx->pc = 0x363514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363510u;
        // 0x363514: 0xae060008  sw          $a2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363518u;
        goto label_363518;
    }
    ctx->pc = 0x363510u;
    SET_GPR_U32(ctx, 31, 0x363518u);
    ctx->pc = 0x363514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363510u;
    // 0x363514: 0xae060008  sw          $a2, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x363510u, 0x363518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363518u;
label_363518:
    // 0x363518: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x363518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_36351c:
    // 0x36351c: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x36351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_363520:
    // 0x363520: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x363520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_363524:
    // 0x363524: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x363524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_363528:
    // 0x363528: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x363528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_36352c:
    // 0x36352c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x36352cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_363530:
    // 0x363530: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x363530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_363534:
    // 0x363534: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x363534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_363538:
    // 0x363538: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x363538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_36353c:
    // 0x36353c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x36353cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_363540:
    // 0x363540: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x363540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_363544:
    // 0x363544: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x363544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_363548:
    // 0x363548: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x363548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_36354c:
    // 0x36354c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x36354cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_363550:
    // 0x363550: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x363550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_363554:
    // 0x363554: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x363554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_363558:
    // 0x363558: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_36355c:
    if (ctx->pc == 0x36355Cu) {
        ctx->pc = 0x36355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363558u;
        // 0x36355c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363560u;
        goto label_363560;
    }
    ctx->pc = 0x363558u;
    {
        const bool branch_taken_0x363558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x363558) {
            ctx->pc = 0x36355Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363558u;
            // 0x36355c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363578u;
            goto label_363578;
        }
    }
    ctx->pc = 0x363560u;
label_363560:
    // 0x363560: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x363560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_363564:
    // 0x363564: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x363564u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_363568:
    // 0x363568: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_36356c:
    if (ctx->pc == 0x36356Cu) {
        ctx->pc = 0x36356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363568u;
        // 0x36356c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363570u;
        goto label_363570;
    }
    ctx->pc = 0x363568u;
    {
        const bool branch_taken_0x363568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363568u;
        // 0x36356c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363568) {
            ctx->pc = 0x363574u;
            goto label_363574;
        }
    }
    ctx->pc = 0x363570u;
label_363570:
    // 0x363570: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x363570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_363574:
    // 0x363574: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x363574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_363578:
    // 0x363578: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x363578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_36357c:
    // 0x36357c: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x36357cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_363580:
    // 0x363580: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_363584:
    if (ctx->pc == 0x363584u) {
        ctx->pc = 0x363584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363580u;
        // 0x363584: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363588u;
        goto label_363588;
    }
    ctx->pc = 0x363580u;
    {
        const bool branch_taken_0x363580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x363580) {
            ctx->pc = 0x363584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363580u;
            // 0x363584: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363598u;
            goto label_363598;
        }
    }
    ctx->pc = 0x363588u;
label_363588:
    // 0x363588: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x363588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_36358c:
    // 0x36358c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x36358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_363590:
    // 0x363590: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x363590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_363594:
    // 0x363594: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x363594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_363598:
    // 0x363598: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
label_36359c:
    if (ctx->pc == 0x36359Cu) {
        ctx->pc = 0x36359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363598u;
        // 0x36359c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3635A0u;
        goto label_3635a0;
    }
    ctx->pc = 0x363598u;
    {
        const bool branch_taken_0x363598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363598u;
        // 0x36359c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363598) {
            ctx->pc = 0x36367Cu;
            goto label_36367c;
        }
    }
    ctx->pc = 0x3635A0u;
label_3635a0:
    // 0x3635a0: 0xc0f52a8  jal         func_3D4AA0
label_3635a4:
    if (ctx->pc == 0x3635A4u) {
        ctx->pc = 0x3635A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3635A0u;
        // 0x3635a4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3635A8u;
        goto label_3635a8;
    }
    ctx->pc = 0x3635A0u;
    SET_GPR_U32(ctx, 31, 0x3635A8u);
    ctx->pc = 0x3635A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3635A0u;
    // 0x3635a4: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3635A0u, 0x3635A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635A8u;
label_3635a8:
    // 0x3635a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3635a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3635ac:
    // 0x3635ac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3635acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3635b0:
    // 0x3635b0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x3635b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_3635b4:
    // 0x3635b4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x3635b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_3635b8:
    // 0x3635b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3635b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3635bc:
    // 0x3635bc: 0x50430018  beql        $v0, $v1, . + 4 + (0x18 << 2)
label_3635c0:
    if (ctx->pc == 0x3635C0u) {
        ctx->pc = 0x3635C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3635BCu;
        // 0x3635c0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3635C4u;
        goto label_3635c4;
    }
    ctx->pc = 0x3635BCu;
    {
        const bool branch_taken_0x3635bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3635bc) {
            ctx->pc = 0x3635C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3635BCu;
            // 0x3635c0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363620u;
            goto label_363620;
        }
    }
    ctx->pc = 0x3635C4u;
label_3635c4:
    // 0x3635c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3635c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_3635c8:
    // 0x3635c8: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3635c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3635cc:
    // 0x3635cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_3635d0:
    if (ctx->pc == 0x3635D0u) {
        ctx->pc = 0x3635D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3635CCu;
        // 0x3635d0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3635D4u;
        goto label_3635d4;
    }
    ctx->pc = 0x3635CCu;
    {
        const bool branch_taken_0x3635cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3635D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3635CCu;
        // 0x3635d0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3635cc) {
            ctx->pc = 0x36361Cu;
            goto label_36361c;
        }
    }
    ctx->pc = 0x3635D4u;
label_3635d4:
    // 0x3635d4: 0xc0d985c  jal         func_366170
label_3635d8:
    if (ctx->pc == 0x3635D8u) {
        ctx->pc = 0x3635DCu;
        goto label_3635dc;
    }
    ctx->pc = 0x3635D4u;
    SET_GPR_U32(ctx, 31, 0x3635DCu);
    ctx->pc = 0x366170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366170u, 0x3635D4u, 0x3635DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635DCu;
label_3635dc:
    // 0x3635dc: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x3635dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3635e0:
    // 0x3635e0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3635e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3635e4:
    // 0x3635e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3635e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3635e8:
    // 0x3635e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3635e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3635ec:
    // 0x3635ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3635ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3635f0:
    // 0x3635f0: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x3635f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3635f4:
    // 0x3635f4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3635f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3635f8:
    // 0x3635f8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3635f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3635fc:
    // 0x3635fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3635fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_363600:
    // 0x363600: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x363600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_363604:
    // 0x363604: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x363604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_363608:
    // 0x363608: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x363608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_36360c:
    // 0x36360c: 0xae06003c  sw          $a2, 0x3C($s0)
    ctx->pc = 0x36360cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 6));
label_363610:
    // 0x363610: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x363610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_363614:
    // 0x363614: 0x40f809  jalr        $v0
label_363618:
    if (ctx->pc == 0x363618u) {
        ctx->pc = 0x363618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363614u;
        // 0x363618: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36361Cu;
        goto label_36361c;
    }
    ctx->pc = 0x363614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36361Cu);
        ctx->pc = 0x363618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363614u;
        // 0x363618: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363614u, 0x36361Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36361Cu;
label_36361c:
    // 0x36361c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x36361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_363620:
    // 0x363620: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x363620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_363624:
    // 0x363624: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x363624u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_363628:
    // 0x363628: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_36362c:
    if (ctx->pc == 0x36362Cu) {
        ctx->pc = 0x36362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363628u;
        // 0x36362c: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363630u;
        goto label_363630;
    }
    ctx->pc = 0x363628u;
    {
        const bool branch_taken_0x363628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x36362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363628u;
        // 0x36362c: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363628) {
            ctx->pc = 0x363678u;
            goto label_363678;
        }
    }
    ctx->pc = 0x363630u;
label_363630:
    // 0x363630: 0xc0d985c  jal         func_366170
label_363634:
    if (ctx->pc == 0x363634u) {
        ctx->pc = 0x363634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363630u;
        // 0x363634: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363638u;
        goto label_363638;
    }
    ctx->pc = 0x363630u;
    SET_GPR_U32(ctx, 31, 0x363638u);
    ctx->pc = 0x363634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363630u;
    // 0x363634: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366170u, 0x363630u, 0x363638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363638u;
label_363638:
    // 0x363638: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x363638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_36363c:
    // 0x36363c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x36363cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_363640:
    // 0x363640: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x363640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_363644:
    // 0x363644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x363644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_363648:
    // 0x363648: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x363648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_36364c:
    // 0x36364c: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x36364cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_363650:
    // 0x363650: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x363650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_363654:
    // 0x363654: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x363654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_363658:
    // 0x363658: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x363658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36365c:
    // 0x36365c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36365cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_363660:
    // 0x363660: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x363660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_363664:
    // 0x363664: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x363664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_363668:
    // 0x363668: 0xae06003c  sw          $a2, 0x3C($s0)
    ctx->pc = 0x363668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 6));
label_36366c:
    // 0x36366c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x36366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_363670:
    // 0x363670: 0x40f809  jalr        $v0
label_363674:
    if (ctx->pc == 0x363674u) {
        ctx->pc = 0x363674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363670u;
        // 0x363674: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363678u;
        goto label_363678;
    }
    ctx->pc = 0x363670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x363678u);
        ctx->pc = 0x363674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363670u;
        // 0x363674: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363670u, 0x363678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363678u;
label_363678:
    // 0x363678: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x363678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36367c:
    // 0x36367c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36367cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_363680:
    // 0x363680: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_363684:
    // 0x363684: 0x3e00008  jr          $ra
label_363688:
    if (ctx->pc == 0x363688u) {
        ctx->pc = 0x363688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363684u;
        // 0x363688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36368Cu;
        goto label_36368c;
    }
    ctx->pc = 0x363684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363684u;
        // 0x363688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36368Cu;
label_36368c:
    // 0x36368c: 0x0  nop
    ctx->pc = 0x36368cu;
    // NOP
    ctx->pc = 0x363690u;
}
