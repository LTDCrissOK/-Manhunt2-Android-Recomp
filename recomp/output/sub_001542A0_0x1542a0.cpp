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

// Function: sub_001542A0
// Address: 0x1542a0 - 0x154670
void sub_001542A0_0x1542a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001542A0_0x1542a0");
#endif

    switch (ctx->pc) {
        case 0x1542a0u: goto label_1542a0;
        case 0x1542a4u: goto label_1542a4;
        case 0x1542a8u: goto label_1542a8;
        case 0x1542acu: goto label_1542ac;
        case 0x1542b0u: goto label_1542b0;
        case 0x1542b4u: goto label_1542b4;
        case 0x1542b8u: goto label_1542b8;
        case 0x1542bcu: goto label_1542bc;
        case 0x1542c0u: goto label_1542c0;
        case 0x1542c4u: goto label_1542c4;
        case 0x1542c8u: goto label_1542c8;
        case 0x1542ccu: goto label_1542cc;
        case 0x1542d0u: goto label_1542d0;
        case 0x1542d4u: goto label_1542d4;
        case 0x1542d8u: goto label_1542d8;
        case 0x1542dcu: goto label_1542dc;
        case 0x1542e0u: goto label_1542e0;
        case 0x1542e4u: goto label_1542e4;
        case 0x1542e8u: goto label_1542e8;
        case 0x1542ecu: goto label_1542ec;
        case 0x1542f0u: goto label_1542f0;
        case 0x1542f4u: goto label_1542f4;
        case 0x1542f8u: goto label_1542f8;
        case 0x1542fcu: goto label_1542fc;
        case 0x154300u: goto label_154300;
        case 0x154304u: goto label_154304;
        case 0x154308u: goto label_154308;
        case 0x15430cu: goto label_15430c;
        case 0x154310u: goto label_154310;
        case 0x154314u: goto label_154314;
        case 0x154318u: goto label_154318;
        case 0x15431cu: goto label_15431c;
        case 0x154320u: goto label_154320;
        case 0x154324u: goto label_154324;
        case 0x154328u: goto label_154328;
        case 0x15432cu: goto label_15432c;
        case 0x154330u: goto label_154330;
        case 0x154334u: goto label_154334;
        case 0x154338u: goto label_154338;
        case 0x15433cu: goto label_15433c;
        case 0x154340u: goto label_154340;
        case 0x154344u: goto label_154344;
        case 0x154348u: goto label_154348;
        case 0x15434cu: goto label_15434c;
        case 0x154350u: goto label_154350;
        case 0x154354u: goto label_154354;
        case 0x154358u: goto label_154358;
        case 0x15435cu: goto label_15435c;
        case 0x154360u: goto label_154360;
        case 0x154364u: goto label_154364;
        case 0x154368u: goto label_154368;
        case 0x15436cu: goto label_15436c;
        case 0x154370u: goto label_154370;
        case 0x154374u: goto label_154374;
        case 0x154378u: goto label_154378;
        case 0x15437cu: goto label_15437c;
        case 0x154380u: goto label_154380;
        case 0x154384u: goto label_154384;
        case 0x154388u: goto label_154388;
        case 0x15438cu: goto label_15438c;
        case 0x154390u: goto label_154390;
        case 0x154394u: goto label_154394;
        case 0x154398u: goto label_154398;
        case 0x15439cu: goto label_15439c;
        case 0x1543a0u: goto label_1543a0;
        case 0x1543a4u: goto label_1543a4;
        case 0x1543a8u: goto label_1543a8;
        case 0x1543acu: goto label_1543ac;
        case 0x1543b0u: goto label_1543b0;
        case 0x1543b4u: goto label_1543b4;
        case 0x1543b8u: goto label_1543b8;
        case 0x1543bcu: goto label_1543bc;
        case 0x1543c0u: goto label_1543c0;
        case 0x1543c4u: goto label_1543c4;
        case 0x1543c8u: goto label_1543c8;
        case 0x1543ccu: goto label_1543cc;
        case 0x1543d0u: goto label_1543d0;
        case 0x1543d4u: goto label_1543d4;
        case 0x1543d8u: goto label_1543d8;
        case 0x1543dcu: goto label_1543dc;
        case 0x1543e0u: goto label_1543e0;
        case 0x1543e4u: goto label_1543e4;
        case 0x1543e8u: goto label_1543e8;
        case 0x1543ecu: goto label_1543ec;
        case 0x1543f0u: goto label_1543f0;
        case 0x1543f4u: goto label_1543f4;
        case 0x1543f8u: goto label_1543f8;
        case 0x1543fcu: goto label_1543fc;
        case 0x154400u: goto label_154400;
        case 0x154404u: goto label_154404;
        case 0x154408u: goto label_154408;
        case 0x15440cu: goto label_15440c;
        case 0x154410u: goto label_154410;
        case 0x154414u: goto label_154414;
        case 0x154418u: goto label_154418;
        case 0x15441cu: goto label_15441c;
        case 0x154420u: goto label_154420;
        case 0x154424u: goto label_154424;
        case 0x154428u: goto label_154428;
        case 0x15442cu: goto label_15442c;
        case 0x154430u: goto label_154430;
        case 0x154434u: goto label_154434;
        case 0x154438u: goto label_154438;
        case 0x15443cu: goto label_15443c;
        case 0x154440u: goto label_154440;
        case 0x154444u: goto label_154444;
        case 0x154448u: goto label_154448;
        case 0x15444cu: goto label_15444c;
        case 0x154450u: goto label_154450;
        case 0x154454u: goto label_154454;
        case 0x154458u: goto label_154458;
        case 0x15445cu: goto label_15445c;
        case 0x154460u: goto label_154460;
        case 0x154464u: goto label_154464;
        case 0x154468u: goto label_154468;
        case 0x15446cu: goto label_15446c;
        case 0x154470u: goto label_154470;
        case 0x154474u: goto label_154474;
        case 0x154478u: goto label_154478;
        case 0x15447cu: goto label_15447c;
        case 0x154480u: goto label_154480;
        case 0x154484u: goto label_154484;
        case 0x154488u: goto label_154488;
        case 0x15448cu: goto label_15448c;
        case 0x154490u: goto label_154490;
        case 0x154494u: goto label_154494;
        case 0x154498u: goto label_154498;
        case 0x15449cu: goto label_15449c;
        case 0x1544a0u: goto label_1544a0;
        case 0x1544a4u: goto label_1544a4;
        case 0x1544a8u: goto label_1544a8;
        case 0x1544acu: goto label_1544ac;
        case 0x1544b0u: goto label_1544b0;
        case 0x1544b4u: goto label_1544b4;
        case 0x1544b8u: goto label_1544b8;
        case 0x1544bcu: goto label_1544bc;
        case 0x1544c0u: goto label_1544c0;
        case 0x1544c4u: goto label_1544c4;
        case 0x1544c8u: goto label_1544c8;
        case 0x1544ccu: goto label_1544cc;
        case 0x1544d0u: goto label_1544d0;
        case 0x1544d4u: goto label_1544d4;
        case 0x1544d8u: goto label_1544d8;
        case 0x1544dcu: goto label_1544dc;
        case 0x1544e0u: goto label_1544e0;
        case 0x1544e4u: goto label_1544e4;
        case 0x1544e8u: goto label_1544e8;
        case 0x1544ecu: goto label_1544ec;
        case 0x1544f0u: goto label_1544f0;
        case 0x1544f4u: goto label_1544f4;
        case 0x1544f8u: goto label_1544f8;
        case 0x1544fcu: goto label_1544fc;
        case 0x154500u: goto label_154500;
        case 0x154504u: goto label_154504;
        case 0x154508u: goto label_154508;
        case 0x15450cu: goto label_15450c;
        case 0x154510u: goto label_154510;
        case 0x154514u: goto label_154514;
        case 0x154518u: goto label_154518;
        case 0x15451cu: goto label_15451c;
        case 0x154520u: goto label_154520;
        case 0x154524u: goto label_154524;
        case 0x154528u: goto label_154528;
        case 0x15452cu: goto label_15452c;
        case 0x154530u: goto label_154530;
        case 0x154534u: goto label_154534;
        case 0x154538u: goto label_154538;
        case 0x15453cu: goto label_15453c;
        case 0x154540u: goto label_154540;
        case 0x154544u: goto label_154544;
        case 0x154548u: goto label_154548;
        case 0x15454cu: goto label_15454c;
        case 0x154550u: goto label_154550;
        case 0x154554u: goto label_154554;
        case 0x154558u: goto label_154558;
        case 0x15455cu: goto label_15455c;
        case 0x154560u: goto label_154560;
        case 0x154564u: goto label_154564;
        case 0x154568u: goto label_154568;
        case 0x15456cu: goto label_15456c;
        case 0x154570u: goto label_154570;
        case 0x154574u: goto label_154574;
        case 0x154578u: goto label_154578;
        case 0x15457cu: goto label_15457c;
        case 0x154580u: goto label_154580;
        case 0x154584u: goto label_154584;
        case 0x154588u: goto label_154588;
        case 0x15458cu: goto label_15458c;
        case 0x154590u: goto label_154590;
        case 0x154594u: goto label_154594;
        case 0x154598u: goto label_154598;
        case 0x15459cu: goto label_15459c;
        case 0x1545a0u: goto label_1545a0;
        case 0x1545a4u: goto label_1545a4;
        case 0x1545a8u: goto label_1545a8;
        case 0x1545acu: goto label_1545ac;
        case 0x1545b0u: goto label_1545b0;
        case 0x1545b4u: goto label_1545b4;
        case 0x1545b8u: goto label_1545b8;
        case 0x1545bcu: goto label_1545bc;
        case 0x1545c0u: goto label_1545c0;
        case 0x1545c4u: goto label_1545c4;
        case 0x1545c8u: goto label_1545c8;
        case 0x1545ccu: goto label_1545cc;
        case 0x1545d0u: goto label_1545d0;
        case 0x1545d4u: goto label_1545d4;
        case 0x1545d8u: goto label_1545d8;
        case 0x1545dcu: goto label_1545dc;
        case 0x1545e0u: goto label_1545e0;
        case 0x1545e4u: goto label_1545e4;
        case 0x1545e8u: goto label_1545e8;
        case 0x1545ecu: goto label_1545ec;
        case 0x1545f0u: goto label_1545f0;
        case 0x1545f4u: goto label_1545f4;
        case 0x1545f8u: goto label_1545f8;
        case 0x1545fcu: goto label_1545fc;
        case 0x154600u: goto label_154600;
        case 0x154604u: goto label_154604;
        case 0x154608u: goto label_154608;
        case 0x15460cu: goto label_15460c;
        case 0x154610u: goto label_154610;
        case 0x154614u: goto label_154614;
        case 0x154618u: goto label_154618;
        case 0x15461cu: goto label_15461c;
        case 0x154620u: goto label_154620;
        case 0x154624u: goto label_154624;
        case 0x154628u: goto label_154628;
        case 0x15462cu: goto label_15462c;
        case 0x154630u: goto label_154630;
        case 0x154634u: goto label_154634;
        case 0x154638u: goto label_154638;
        case 0x15463cu: goto label_15463c;
        case 0x154640u: goto label_154640;
        case 0x154644u: goto label_154644;
        case 0x154648u: goto label_154648;
        case 0x15464cu: goto label_15464c;
        case 0x154650u: goto label_154650;
        case 0x154654u: goto label_154654;
        case 0x154658u: goto label_154658;
        case 0x15465cu: goto label_15465c;
        case 0x154660u: goto label_154660;
        case 0x154664u: goto label_154664;
        case 0x154668u: goto label_154668;
        case 0x15466cu: goto label_15466c;
        default: break;
    }

    ctx->pc = 0x1542a0u;

label_1542a0:
    // 0x1542a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1542a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1542a4:
    // 0x1542a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1542a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1542a8:
    // 0x1542a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1542a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1542ac:
    // 0x1542ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1542acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1542b0:
    // 0x1542b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1542b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1542b4:
    // 0x1542b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1542b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1542b8:
    // 0x1542b8: 0xc04d8dc  jal         func_136370
label_1542bc:
    if (ctx->pc == 0x1542BCu) {
        ctx->pc = 0x1542BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542B8u;
        // 0x1542bc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542C0u;
        goto label_1542c0;
    }
    ctx->pc = 0x1542B8u;
    SET_GPR_U32(ctx, 31, 0x1542C0u);
    ctx->pc = 0x1542BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542B8u;
    // 0x1542bc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x1542B8u, 0x1542C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1542C0u;
label_1542c0:
    // 0x1542c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1542c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1542c4:
    // 0x1542c4: 0x544300e5  bnel        $v0, $v1, . + 4 + (0xE5 << 2)
label_1542c8:
    if (ctx->pc == 0x1542C8u) {
        ctx->pc = 0x1542C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542C4u;
        // 0x1542c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542CCu;
        goto label_1542cc;
    }
    ctx->pc = 0x1542C4u;
    {
        const bool branch_taken_0x1542c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1542c4) {
            ctx->pc = 0x1542C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1542C4u;
            // 0x1542c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15465Cu;
            goto label_15465c;
        }
    }
    ctx->pc = 0x1542CCu;
label_1542cc:
    // 0x1542cc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1542ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1542d0:
    // 0x1542d0: 0xc0551ea  jal         func_1547A8
label_1542d4:
    if (ctx->pc == 0x1542D4u) {
        ctx->pc = 0x1542D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542D0u;
        // 0x1542d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542D8u;
        goto label_1542d8;
    }
    ctx->pc = 0x1542D0u;
    SET_GPR_U32(ctx, 31, 0x1542D8u);
    ctx->pc = 0x1542D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1542D0u;
    // 0x1542d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A8u, 0x1542D0u, 0x1542D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1542D8u;
label_1542d8:
    // 0x1542d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1542d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1542dc:
    // 0x1542dc: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1542dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1542e0:
    // 0x1542e0: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
label_1542e4:
    if (ctx->pc == 0x1542E4u) {
        ctx->pc = 0x1542E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542E0u;
        // 0x1542e4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542E8u;
        goto label_1542e8;
    }
    ctx->pc = 0x1542E0u;
    {
        const bool branch_taken_0x1542e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1542E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542E0u;
        // 0x1542e4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542e0) {
            ctx->pc = 0x154638u;
            goto label_154638;
        }
    }
    ctx->pc = 0x1542E8u;
label_1542e8:
    // 0x1542e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1542e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1542ec:
    // 0x1542ec: 0x2442ec40  addiu       $v0, $v0, -0x13C0
    ctx->pc = 0x1542ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962240));
label_1542f0:
    // 0x1542f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1542f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1542f4:
    // 0x1542f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1542f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1542f8:
    // 0x1542f8: 0x800008  jr          $a0
label_1542fc:
    if (ctx->pc == 0x1542FCu) {
        ctx->pc = 0x154300u;
        goto label_154300;
    }
    ctx->pc = 0x1542F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154300u: goto label_154300;
            case 0x15431Cu: goto label_15431c;
            case 0x154330u: goto label_154330;
            case 0x1543BCu: goto label_1543bc;
            case 0x1543D4u: goto label_1543d4;
            case 0x154438u: goto label_154438;
            case 0x1545FCu: goto label_1545fc;
            case 0x154638u: goto label_154638;
            case 0x154658u: goto label_154658;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1542F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x154300u;
label_154300:
    // 0x154300: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154300u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_154304:
    // 0x154304: 0xc055208  jal         func_154820
label_154308:
    if (ctx->pc == 0x154308u) {
        ctx->pc = 0x154308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154304u;
        // 0x154308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15430Cu;
        goto label_15430c;
    }
    ctx->pc = 0x154304u;
    SET_GPR_U32(ctx, 31, 0x15430Cu);
    ctx->pc = 0x154308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154304u;
    // 0x154308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154820u, 0x154304u, 0x15430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15430Cu;
label_15430c:
    // 0x15430c: 0x504000d3  beql        $v0, $zero, . + 4 + (0xD3 << 2)
label_154310:
    if (ctx->pc == 0x154310u) {
        ctx->pc = 0x154310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15430Cu;
        // 0x154310: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154314u;
        goto label_154314;
    }
    ctx->pc = 0x15430Cu;
    {
        const bool branch_taken_0x15430c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15430c) {
            ctx->pc = 0x154310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15430Cu;
            // 0x154310: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15465Cu;
            goto label_15465c;
        }
    }
    ctx->pc = 0x154314u;
label_154314:
    // 0x154314: 0x100000cc  b           . + 4 + (0xCC << 2)
label_154318:
    if (ctx->pc == 0x154318u) {
        ctx->pc = 0x154318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154314u;
        // 0x154318: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15431Cu;
        goto label_15431c;
    }
    ctx->pc = 0x154314u;
    {
        const bool branch_taken_0x154314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154314u;
        // 0x154318: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154314) {
            ctx->pc = 0x154648u;
            goto label_154648;
        }
    }
    ctx->pc = 0x15431Cu;
label_15431c:
    // 0x15431c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154320:
    // 0x154320: 0xc0552fc  jal         func_154BF0
label_154324:
    if (ctx->pc == 0x154324u) {
        ctx->pc = 0x154324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154320u;
        // 0x154324: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154328u;
        goto label_154328;
    }
    ctx->pc = 0x154320u;
    SET_GPR_U32(ctx, 31, 0x154328u);
    ctx->pc = 0x154324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154320u;
    // 0x154324: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154BF0u, 0x154320u, 0x154328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154328u;
label_154328:
    // 0x154328: 0x100000cc  b           . + 4 + (0xCC << 2)
label_15432c:
    if (ctx->pc == 0x15432Cu) {
        ctx->pc = 0x15432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154328u;
        // 0x15432c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154330u;
        goto label_154330;
    }
    ctx->pc = 0x154328u;
    {
        const bool branch_taken_0x154328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154328u;
        // 0x15432c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154328) {
            ctx->pc = 0x15465Cu;
            goto label_15465c;
        }
    }
    ctx->pc = 0x154330u;
label_154330:
    // 0x154330: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154330u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_154334:
    // 0x154334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154338:
    // 0x154338: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x154338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15433c:
    // 0x15433c: 0xc055586  jal         func_155618
label_154340:
    if (ctx->pc == 0x154340u) {
        ctx->pc = 0x154340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15433Cu;
        // 0x154340: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154344u;
        goto label_154344;
    }
    ctx->pc = 0x15433Cu;
    SET_GPR_U32(ctx, 31, 0x154344u);
    ctx->pc = 0x154340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15433Cu;
    // 0x154340: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155618u, 0x15433Cu, 0x154344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154344u;
label_154344:
    // 0x154344: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154344u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_154348:
    // 0x154348: 0xc04da18  jal         func_136860
label_15434c:
    if (ctx->pc == 0x15434Cu) {
        ctx->pc = 0x15434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154348u;
        // 0x15434c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154350u;
        goto label_154350;
    }
    ctx->pc = 0x154348u;
    SET_GPR_U32(ctx, 31, 0x154350u);
    ctx->pc = 0x15434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154348u;
    // 0x15434c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136860u, 0x154348u, 0x154350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154350u;
label_154350:
    // 0x154350: 0x104000a0  beqz        $v0, . + 4 + (0xA0 << 2)
label_154354:
    if (ctx->pc == 0x154354u) {
        ctx->pc = 0x154354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154350u;
        // 0x154354: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154358u;
        goto label_154358;
    }
    ctx->pc = 0x154350u;
    {
        const bool branch_taken_0x154350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154350u;
        // 0x154354: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154350) {
            ctx->pc = 0x1545D4u;
            goto label_1545d4;
        }
    }
    ctx->pc = 0x154358u;
label_154358:
    // 0x154358: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x154358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_15435c:
    // 0x15435c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x15435cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_154360:
    // 0x154360: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x154360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
label_154364:
    // 0x154364: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x154364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_154368:
    // 0x154368: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x154368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15436c:
    // 0x15436c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_154370:
    // 0x154370: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x154370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_154374:
    // 0x154374: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x154374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_154378:
    // 0x154378: 0x8c91020c  lw          $s1, 0x20C($a0)
    ctx->pc = 0x154378u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_15437c:
    // 0x15437c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_154380:
    if (ctx->pc == 0x154380u) {
        ctx->pc = 0x154380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15437Cu;
        // 0x154380: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154384u;
        goto label_154384;
    }
    ctx->pc = 0x15437Cu;
    {
        const bool branch_taken_0x15437c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15437c) {
            ctx->pc = 0x154380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15437Cu;
            // 0x154380: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1543A4u;
            goto label_1543a4;
        }
    }
    ctx->pc = 0x154384u;
label_154384:
    // 0x154384: 0xc04549a  jal         func_115268
label_154388:
    if (ctx->pc == 0x154388u) {
        ctx->pc = 0x154388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154384u;
        // 0x154388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15438Cu;
        goto label_15438c;
    }
    ctx->pc = 0x154384u;
    SET_GPR_U32(ctx, 31, 0x15438Cu);
    ctx->pc = 0x154388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154384u;
    // 0x154388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115268u, 0x154384u, 0x15438Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15438Cu;
label_15438c:
    // 0x15438c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_154390:
    if (ctx->pc == 0x154390u) {
        ctx->pc = 0x154390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15438Cu;
        // 0x154390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154394u;
        goto label_154394;
    }
    ctx->pc = 0x15438Cu;
    {
        const bool branch_taken_0x15438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15438Cu;
        // 0x154390: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15438c) {
            ctx->pc = 0x1543A0u;
            goto label_1543a0;
        }
    }
    ctx->pc = 0x154394u;
label_154394:
    // 0x154394: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x154394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_154398:
    // 0x154398: 0xc04547e  jal         func_1151F8
label_15439c:
    if (ctx->pc == 0x15439Cu) {
        ctx->pc = 0x15439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154398u;
        // 0x15439c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543A0u;
        goto label_1543a0;
    }
    ctx->pc = 0x154398u;
    SET_GPR_U32(ctx, 31, 0x1543A0u);
    ctx->pc = 0x15439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154398u;
    // 0x15439c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151F8u, 0x154398u, 0x1543A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1543A0u;
label_1543a0:
    // 0x1543a0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1543a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1543a4:
    // 0x1543a4: 0xc04dd04  jal         func_137410
label_1543a8:
    if (ctx->pc == 0x1543A8u) {
        ctx->pc = 0x1543A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543A4u;
        // 0x1543a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543ACu;
        goto label_1543ac;
    }
    ctx->pc = 0x1543A4u;
    SET_GPR_U32(ctx, 31, 0x1543ACu);
    ctx->pc = 0x1543A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1543A4u;
    // 0x1543a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137410u, 0x1543A4u, 0x1543ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1543ACu;
label_1543ac:
    // 0x1543ac: 0x54400089  bnel        $v0, $zero, . + 4 + (0x89 << 2)
label_1543b0:
    if (ctx->pc == 0x1543B0u) {
        ctx->pc = 0x1543B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543ACu;
        // 0x1543b0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543B4u;
        goto label_1543b4;
    }
    ctx->pc = 0x1543ACu;
    {
        const bool branch_taken_0x1543ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1543ac) {
            ctx->pc = 0x1543B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1543ACu;
            // 0x1543b0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1545D4u;
            goto label_1545d4;
        }
    }
    ctx->pc = 0x1543B4u;
label_1543b4:
    // 0x1543b4: 0x10000084  b           . + 4 + (0x84 << 2)
label_1543b8:
    if (ctx->pc == 0x1543B8u) {
        ctx->pc = 0x1543B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543B4u;
        // 0x1543b8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543BCu;
        goto label_1543bc;
    }
    ctx->pc = 0x1543B4u;
    {
        const bool branch_taken_0x1543b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1543B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543B4u;
        // 0x1543b8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543b4) {
            ctx->pc = 0x1545C8u;
            goto label_1545c8;
        }
    }
    ctx->pc = 0x1543BCu;
label_1543bc:
    // 0x1543bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1543bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1543c0:
    // 0x1543c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1543c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1543c4:
    // 0x1543c4: 0xc055586  jal         func_155618
label_1543c8:
    if (ctx->pc == 0x1543C8u) {
        ctx->pc = 0x1543C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543C4u;
        // 0x1543c8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543CCu;
        goto label_1543cc;
    }
    ctx->pc = 0x1543C4u;
    SET_GPR_U32(ctx, 31, 0x1543CCu);
    ctx->pc = 0x1543C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1543C4u;
    // 0x1543c8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155618u, 0x1543C4u, 0x1543CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1543CCu;
label_1543cc:
    // 0x1543cc: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_1543d0:
    if (ctx->pc == 0x1543D0u) {
        ctx->pc = 0x1543D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543CCu;
        // 0x1543d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543D4u;
        goto label_1543d4;
    }
    ctx->pc = 0x1543CCu;
    {
        const bool branch_taken_0x1543cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1543D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543CCu;
        // 0x1543d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1543cc) {
            ctx->pc = 0x15465Cu;
            goto label_15465c;
        }
    }
    ctx->pc = 0x1543D4u;
label_1543d4:
    // 0x1543d4: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1543d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1543d8:
    // 0x1543d8: 0xc0552fc  jal         func_154BF0
label_1543dc:
    if (ctx->pc == 0x1543DCu) {
        ctx->pc = 0x1543DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543D8u;
        // 0x1543dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543E0u;
        goto label_1543e0;
    }
    ctx->pc = 0x1543D8u;
    SET_GPR_U32(ctx, 31, 0x1543E0u);
    ctx->pc = 0x1543DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1543D8u;
    // 0x1543dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154BF0u, 0x1543D8u, 0x1543E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1543E0u;
label_1543e0:
    // 0x1543e0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1543e0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1543e4:
    // 0x1543e4: 0xc05560a  jal         func_155828
label_1543e8:
    if (ctx->pc == 0x1543E8u) {
        ctx->pc = 0x1543E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543E4u;
        // 0x1543e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543ECu;
        goto label_1543ec;
    }
    ctx->pc = 0x1543E4u;
    SET_GPR_U32(ctx, 31, 0x1543ECu);
    ctx->pc = 0x1543E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1543E4u;
    // 0x1543e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155828u, 0x1543E4u, 0x1543ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1543ECu;
label_1543ec:
    // 0x1543ec: 0x5040009b  beql        $v0, $zero, . + 4 + (0x9B << 2)
label_1543f0:
    if (ctx->pc == 0x1543F0u) {
        ctx->pc = 0x1543F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1543ECu;
        // 0x1543f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1543F4u;
        goto label_1543f4;
    }
    ctx->pc = 0x1543ECu;
    {
        const bool branch_taken_0x1543ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1543ec) {
            ctx->pc = 0x1543F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1543ECu;
            // 0x1543f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15465Cu;
            goto label_15465c;
        }
    }
    ctx->pc = 0x1543F4u;
label_1543f4:
    // 0x1543f4: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x1543f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1543f8:
    // 0x1543f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1543f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1543fc:
    // 0x1543fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1543fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_154400:
    // 0x154400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_154404:
    // 0x154404: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x154404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_154408:
    // 0x154408: 0x10600093  beqz        $v1, . + 4 + (0x93 << 2)
label_15440c:
    if (ctx->pc == 0x15440Cu) {
        ctx->pc = 0x15440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154408u;
        // 0x15440c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154410u;
        goto label_154410;
    }
    ctx->pc = 0x154408u;
    {
        const bool branch_taken_0x154408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154408u;
        // 0x15440c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154408) {
            ctx->pc = 0x154658u;
            goto label_154658;
        }
    }
    ctx->pc = 0x154410u;
label_154410:
    // 0x154410: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x154410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_154414:
    // 0x154414: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x154414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_154418:
    // 0x154418: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15441c:
    // 0x15441c: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x15441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_154420:
    // 0x154420: 0x1080008e  beqz        $a0, . + 4 + (0x8E << 2)
label_154424:
    if (ctx->pc == 0x154424u) {
        ctx->pc = 0x154424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154420u;
        // 0x154424: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154428u;
        goto label_154428;
    }
    ctx->pc = 0x154420u;
    {
        const bool branch_taken_0x154420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x154424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154420u;
        // 0x154424: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154420) {
            ctx->pc = 0x15465Cu;
            goto label_15465c;
        }
    }
    ctx->pc = 0x154428u;
label_154428:
    // 0x154428: 0xc094ed4  jal         func_253B50
label_15442c:
    if (ctx->pc == 0x15442Cu) {
        ctx->pc = 0x154430u;
        goto label_154430;
    }
    ctx->pc = 0x154428u;
    SET_GPR_U32(ctx, 31, 0x154430u);
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x154428u, 0x154430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154430u;
label_154430:
    // 0x154430: 0x1000008a  b           . + 4 + (0x8A << 2)
label_154434:
    if (ctx->pc == 0x154434u) {
        ctx->pc = 0x154434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154430u;
        // 0x154434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154438u;
        goto label_154438;
    }
    ctx->pc = 0x154430u;
    {
        const bool branch_taken_0x154430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154430u;
        // 0x154434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154430) {
            ctx->pc = 0x15465Cu;
            goto label_15465c;
        }
    }
    ctx->pc = 0x154438u;
label_154438:
    // 0x154438: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154438u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_15443c:
    // 0x15443c: 0xc04d9ea  jal         func_1367A8
label_154440:
    if (ctx->pc == 0x154440u) {
        ctx->pc = 0x154440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15443Cu;
        // 0x154440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154444u;
        goto label_154444;
    }
    ctx->pc = 0x15443Cu;
    SET_GPR_U32(ctx, 31, 0x154444u);
    ctx->pc = 0x154440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15443Cu;
    // 0x154440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1367A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1367A8u, 0x15443Cu, 0x154444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154444u;
label_154444:
    // 0x154444: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_154448:
    if (ctx->pc == 0x154448u) {
        ctx->pc = 0x154448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154444u;
        // 0x154448: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15444Cu;
        goto label_15444c;
    }
    ctx->pc = 0x154444u;
    {
        const bool branch_taken_0x154444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154444) {
            ctx->pc = 0x154448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154444u;
            // 0x154448: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1544A4u;
            goto label_1544a4;
        }
    }
    ctx->pc = 0x15444Cu;
label_15444c:
    // 0x15444c: 0x9206046c  lbu         $a2, 0x46C($s0)
    ctx->pc = 0x15444cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_154450:
    // 0x154450: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x154450u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_154454:
    // 0x154454: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x154454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_154458:
    // 0x154458: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x154458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
label_15445c:
    // 0x15445c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x15445cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_154460:
    // 0x154460: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x154460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_154464:
    // 0x154464: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x154464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_154468:
    // 0x154468: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x154468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15446c:
    // 0x15446c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15446cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_154470:
    // 0x154470: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x154470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_154474:
    // 0x154474: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_154478:
    if (ctx->pc == 0x154478u) {
        ctx->pc = 0x154478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154474u;
        // 0x154478: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15447Cu;
        goto label_15447c;
    }
    ctx->pc = 0x154474u;
    {
        const bool branch_taken_0x154474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154474) {
            ctx->pc = 0x154478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154474u;
            // 0x154478: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1544A4u;
            goto label_1544a4;
        }
    }
    ctx->pc = 0x15447Cu;
label_15447c:
    // 0x15447c: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x15447cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_154480:
    // 0x154480: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_154484:
    if (ctx->pc == 0x154484u) {
        ctx->pc = 0x154484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154480u;
        // 0x154484: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154488u;
        goto label_154488;
    }
    ctx->pc = 0x154480u;
    {
        const bool branch_taken_0x154480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154480u;
        // 0x154484: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154480) {
            ctx->pc = 0x1544A0u;
            goto label_1544a0;
        }
    }
    ctx->pc = 0x154488u;
label_154488:
    // 0x154488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15448c:
    // 0x15448c: 0xc04d9e4  jal         func_136790
label_154490:
    if (ctx->pc == 0x154490u) {
        ctx->pc = 0x154490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15448Cu;
        // 0x154490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154494u;
        goto label_154494;
    }
    ctx->pc = 0x15448Cu;
    SET_GPR_U32(ctx, 31, 0x154494u);
    ctx->pc = 0x154490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15448Cu;
    // 0x154490: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136790u, 0x15448Cu, 0x154494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154494u;
label_154494:
    // 0x154494: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154494u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_154498:
    // 0x154498: 0xc04d9b8  jal         func_1366E0
label_15449c:
    if (ctx->pc == 0x15449Cu) {
        ctx->pc = 0x15449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154498u;
        // 0x15449c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544A0u;
        goto label_1544a0;
    }
    ctx->pc = 0x154498u;
    SET_GPR_U32(ctx, 31, 0x1544A0u);
    ctx->pc = 0x15449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154498u;
    // 0x15449c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1366E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1366E0u, 0x154498u, 0x1544A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544A0u;
label_1544a0:
    // 0x1544a0: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1544a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1544a4:
    // 0x1544a4: 0xc04d97a  jal         func_1365E8
label_1544a8:
    if (ctx->pc == 0x1544A8u) {
        ctx->pc = 0x1544A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544A4u;
        // 0x1544a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544ACu;
        goto label_1544ac;
    }
    ctx->pc = 0x1544A4u;
    SET_GPR_U32(ctx, 31, 0x1544ACu);
    ctx->pc = 0x1544A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544A4u;
    // 0x1544a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365E8u, 0x1544A4u, 0x1544ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544ACu;
label_1544ac:
    // 0x1544ac: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1544b0:
    if (ctx->pc == 0x1544B0u) {
        ctx->pc = 0x1544B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544ACu;
        // 0x1544b0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544B4u;
        goto label_1544b4;
    }
    ctx->pc = 0x1544ACu;
    {
        const bool branch_taken_0x1544ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544ACu;
        // 0x1544b0: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544ac) {
            ctx->pc = 0x154538u;
            goto label_154538;
        }
    }
    ctx->pc = 0x1544B4u;
label_1544b4:
    // 0x1544b4: 0xc04d980  jal         func_136600
label_1544b8:
    if (ctx->pc == 0x1544B8u) {
        ctx->pc = 0x1544B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544B4u;
        // 0x1544b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544BCu;
        goto label_1544bc;
    }
    ctx->pc = 0x1544B4u;
    SET_GPR_U32(ctx, 31, 0x1544BCu);
    ctx->pc = 0x1544B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544B4u;
    // 0x1544b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136600u, 0x1544B4u, 0x1544BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544BCu;
label_1544bc:
    // 0x1544bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1544bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1544c0:
    // 0x1544c0: 0x56200061  bnel        $s1, $zero, . + 4 + (0x61 << 2)
label_1544c4:
    if (ctx->pc == 0x1544C4u) {
        ctx->pc = 0x1544C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544C0u;
        // 0x1544c4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544C8u;
        goto label_1544c8;
    }
    ctx->pc = 0x1544C0u;
    {
        const bool branch_taken_0x1544c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1544c0) {
            ctx->pc = 0x1544C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1544C0u;
            // 0x1544c4: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154648u;
            goto label_154648;
        }
    }
    ctx->pc = 0x1544C8u;
label_1544c8:
    // 0x1544c8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1544c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1544cc:
    // 0x1544cc: 0xc04d9ea  jal         func_1367A8
label_1544d0:
    if (ctx->pc == 0x1544D0u) {
        ctx->pc = 0x1544D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544CCu;
        // 0x1544d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544D4u;
        goto label_1544d4;
    }
    ctx->pc = 0x1544CCu;
    SET_GPR_U32(ctx, 31, 0x1544D4u);
    ctx->pc = 0x1544D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544CCu;
    // 0x1544d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1367A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1367A8u, 0x1544CCu, 0x1544D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544D4u;
label_1544d4:
    // 0x1544d4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1544d8:
    if (ctx->pc == 0x1544D8u) {
        ctx->pc = 0x1544D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544D4u;
        // 0x1544d8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1544DCu;
        goto label_1544dc;
    }
    ctx->pc = 0x1544D4u;
    {
        const bool branch_taken_0x1544d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544D4u;
        // 0x1544d8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544d4) {
            ctx->pc = 0x15452Cu;
            goto label_15452c;
        }
    }
    ctx->pc = 0x1544DCu;
label_1544dc:
    // 0x1544dc: 0x9206046c  lbu         $a2, 0x46C($s0)
    ctx->pc = 0x1544dcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1544e0:
    // 0x1544e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1544e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1544e4:
    // 0x1544e4: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1544e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
label_1544e8:
    // 0x1544e8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1544e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1544ec:
    // 0x1544ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1544ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1544f0:
    // 0x1544f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1544f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1544f4:
    // 0x1544f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1544f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1544f8:
    // 0x1544f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1544f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1544fc:
    // 0x1544fc: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x1544fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_154500:
    // 0x154500: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_154504:
    if (ctx->pc == 0x154504u) {
        ctx->pc = 0x154508u;
        goto label_154508;
    }
    ctx->pc = 0x154500u;
    {
        const bool branch_taken_0x154500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154500) {
            ctx->pc = 0x15452Cu;
            goto label_15452c;
        }
    }
    ctx->pc = 0x154508u;
label_154508:
    // 0x154508: 0x8c420120  lw          $v0, 0x120($v0)
    ctx->pc = 0x154508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_15450c:
    // 0x15450c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_154510:
    if (ctx->pc == 0x154510u) {
        ctx->pc = 0x154510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15450Cu;
        // 0x154510: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154514u;
        goto label_154514;
    }
    ctx->pc = 0x15450Cu;
    {
        const bool branch_taken_0x15450c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15450Cu;
        // 0x154510: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15450c) {
            ctx->pc = 0x15452Cu;
            goto label_15452c;
        }
    }
    ctx->pc = 0x154514u;
label_154514:
    // 0x154514: 0xc04e0c0  jal         func_138300
label_154518:
    if (ctx->pc == 0x154518u) {
        ctx->pc = 0x154518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154514u;
        // 0x154518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15451Cu;
        goto label_15451c;
    }
    ctx->pc = 0x154514u;
    SET_GPR_U32(ctx, 31, 0x15451Cu);
    ctx->pc = 0x154518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154514u;
    // 0x154518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x154514u, 0x15451Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15451Cu;
label_15451c:
    // 0x15451c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x15451cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154520:
    // 0x154520: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154520u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_154524:
    // 0x154524: 0xc04d974  jal         func_1365D0
label_154528:
    if (ctx->pc == 0x154528u) {
        ctx->pc = 0x154528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154524u;
        // 0x154528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15452Cu;
        goto label_15452c;
    }
    ctx->pc = 0x154524u;
    SET_GPR_U32(ctx, 31, 0x15452Cu);
    ctx->pc = 0x154528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154524u;
    // 0x154528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365D0u, 0x154524u, 0x15452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15452Cu;
label_15452c:
    // 0x15452c: 0x56200046  bnel        $s1, $zero, . + 4 + (0x46 << 2)
label_154530:
    if (ctx->pc == 0x154530u) {
        ctx->pc = 0x154530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15452Cu;
        // 0x154530: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154534u;
        goto label_154534;
    }
    ctx->pc = 0x15452Cu;
    {
        const bool branch_taken_0x15452c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15452c) {
            ctx->pc = 0x154530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15452Cu;
            // 0x154530: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154648u;
            goto label_154648;
        }
    }
    ctx->pc = 0x154534u;
label_154534:
    // 0x154534: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154534u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_154538:
    // 0x154538: 0xc0552da  jal         func_154B68
label_15453c:
    if (ctx->pc == 0x15453Cu) {
        ctx->pc = 0x15453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154538u;
        // 0x15453c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154540u;
        goto label_154540;
    }
    ctx->pc = 0x154538u;
    SET_GPR_U32(ctx, 31, 0x154540u);
    ctx->pc = 0x15453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154538u;
    // 0x15453c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B68u, 0x154538u, 0x154540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154540u;
label_154540:
    // 0x154540: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
label_154544:
    if (ctx->pc == 0x154544u) {
        ctx->pc = 0x154544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154540u;
        // 0x154544: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154548u;
        goto label_154548;
    }
    ctx->pc = 0x154540u;
    {
        const bool branch_taken_0x154540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154540) {
            ctx->pc = 0x154544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154540u;
            // 0x154544: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154648u;
            goto label_154648;
        }
    }
    ctx->pc = 0x154548u;
label_154548:
    // 0x154548: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x154548u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_15454c:
    // 0x15454c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15454cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154550:
    // 0x154550: 0xc04da18  jal         func_136860
label_154554:
    if (ctx->pc == 0x154554u) {
        ctx->pc = 0x154554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154550u;
        // 0x154554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154558u;
        goto label_154558;
    }
    ctx->pc = 0x154550u;
    SET_GPR_U32(ctx, 31, 0x154558u);
    ctx->pc = 0x154554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154550u;
    // 0x154554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136860u, 0x154550u, 0x154558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154558u;
label_154558:
    // 0x154558: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_15455c:
    if (ctx->pc == 0x15455Cu) {
        ctx->pc = 0x15455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154558u;
        // 0x15455c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154560u;
        goto label_154560;
    }
    ctx->pc = 0x154558u;
    {
        const bool branch_taken_0x154558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154558u;
        // 0x15455c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154558) {
            ctx->pc = 0x1545D4u;
            goto label_1545d4;
        }
    }
    ctx->pc = 0x154560u;
label_154560:
    // 0x154560: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x154560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_154564:
    // 0x154564: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x154564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_154568:
    // 0x154568: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x154568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
label_15456c:
    // 0x15456c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_154570:
    // 0x154570: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x154570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_154574:
    // 0x154574: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x154574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_154578:
    // 0x154578: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x154578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_15457c:
    // 0x15457c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x15457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_154580:
    // 0x154580: 0x8c91020c  lw          $s1, 0x20C($a0)
    ctx->pc = 0x154580u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_154584:
    // 0x154584: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
label_154588:
    if (ctx->pc == 0x154588u) {
        ctx->pc = 0x154588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154584u;
        // 0x154588: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15458Cu;
        goto label_15458c;
    }
    ctx->pc = 0x154584u;
    {
        const bool branch_taken_0x154584 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x154584) {
            ctx->pc = 0x154588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154584u;
            // 0x154588: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1545B0u;
            goto label_1545b0;
        }
    }
    ctx->pc = 0x15458Cu;
label_15458c:
    // 0x15458c: 0xc04549a  jal         func_115268
label_154590:
    if (ctx->pc == 0x154590u) {
        ctx->pc = 0x154590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15458Cu;
        // 0x154590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154594u;
        goto label_154594;
    }
    ctx->pc = 0x15458Cu;
    SET_GPR_U32(ctx, 31, 0x154594u);
    ctx->pc = 0x154590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15458Cu;
    // 0x154590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115268u, 0x15458Cu, 0x154594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154594u;
label_154594:
    // 0x154594: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_154598:
    if (ctx->pc == 0x154598u) {
        ctx->pc = 0x154598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154594u;
        // 0x154598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15459Cu;
        goto label_15459c;
    }
    ctx->pc = 0x154594u;
    {
        const bool branch_taken_0x154594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154594u;
        // 0x154598: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154594) {
            ctx->pc = 0x1545ACu;
            goto label_1545ac;
        }
    }
    ctx->pc = 0x15459Cu;
label_15459c:
    // 0x15459c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x15459cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1545a0:
    // 0x1545a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1545a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1545a4:
    // 0x1545a4: 0xc04547e  jal         func_1151F8
label_1545a8:
    if (ctx->pc == 0x1545A8u) {
        ctx->pc = 0x1545A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545A4u;
        // 0x1545a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545ACu;
        goto label_1545ac;
    }
    ctx->pc = 0x1545A4u;
    SET_GPR_U32(ctx, 31, 0x1545ACu);
    ctx->pc = 0x1545A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1545A4u;
    // 0x1545a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151F8u, 0x1545A4u, 0x1545ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545ACu;
label_1545ac:
    // 0x1545ac: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1545acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_1545b0:
    // 0x1545b0: 0xc04dd04  jal         func_137410
label_1545b4:
    if (ctx->pc == 0x1545B4u) {
        ctx->pc = 0x1545B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545B0u;
        // 0x1545b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545B8u;
        goto label_1545b8;
    }
    ctx->pc = 0x1545B0u;
    SET_GPR_U32(ctx, 31, 0x1545B8u);
    ctx->pc = 0x1545B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1545B0u;
    // 0x1545b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137410u, 0x1545B0u, 0x1545B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545B8u;
label_1545b8:
    // 0x1545b8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1545bc:
    if (ctx->pc == 0x1545BCu) {
        ctx->pc = 0x1545BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545B8u;
        // 0x1545bc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545C0u;
        goto label_1545c0;
    }
    ctx->pc = 0x1545B8u;
    {
        const bool branch_taken_0x1545b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1545b8) {
            ctx->pc = 0x1545BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1545B8u;
            // 0x1545bc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1545C8u;
            goto label_1545c8;
        }
    }
    ctx->pc = 0x1545C0u;
label_1545c0:
    // 0x1545c0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1545c4:
    if (ctx->pc == 0x1545C4u) {
        ctx->pc = 0x1545C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545C0u;
        // 0x1545c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545C8u;
        goto label_1545c8;
    }
    ctx->pc = 0x1545C0u;
    {
        const bool branch_taken_0x1545c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545C0u;
        // 0x1545c4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545c0) {
            ctx->pc = 0x1545D4u;
            goto label_1545d4;
        }
    }
    ctx->pc = 0x1545C8u;
label_1545c8:
    // 0x1545c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1545c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1545cc:
    // 0x1545cc: 0xc04d9f0  jal         func_1367C0
label_1545d0:
    if (ctx->pc == 0x1545D0u) {
        ctx->pc = 0x1545D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545CCu;
        // 0x1545d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545D4u;
        goto label_1545d4;
    }
    ctx->pc = 0x1545CCu;
    SET_GPR_U32(ctx, 31, 0x1545D4u);
    ctx->pc = 0x1545D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1545CCu;
    // 0x1545d0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1367C0u, 0x1545CCu, 0x1545D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545D4u;
label_1545d4:
    // 0x1545d4: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
label_1545d8:
    if (ctx->pc == 0x1545D8u) {
        ctx->pc = 0x1545D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545D4u;
        // 0x1545d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545DCu;
        goto label_1545dc;
    }
    ctx->pc = 0x1545D4u;
    {
        const bool branch_taken_0x1545d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545D4u;
        // 0x1545d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545d4) {
            ctx->pc = 0x154658u;
            goto label_154658;
        }
    }
    ctx->pc = 0x1545DCu;
label_1545dc:
    // 0x1545dc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1545e0:
    // 0x1545e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1545e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1545e4:
    // 0x1545e4: 0x40f809  jalr        $v0
label_1545e8:
    if (ctx->pc == 0x1545E8u) {
        ctx->pc = 0x1545E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545E4u;
        // 0x1545e8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545ECu;
        goto label_1545ec;
    }
    ctx->pc = 0x1545E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1545ECu);
        ctx->pc = 0x1545E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545E4u;
        // 0x1545e8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1545E4u, 0x1545ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1545ECu;
label_1545ec:
    // 0x1545ec: 0xc05552c  jal         func_1554B0
label_1545f0:
    if (ctx->pc == 0x1545F0u) {
        ctx->pc = 0x1545F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545ECu;
        // 0x1545f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545F4u;
        goto label_1545f4;
    }
    ctx->pc = 0x1545ECu;
    SET_GPR_U32(ctx, 31, 0x1545F4u);
    ctx->pc = 0x1545F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1545ECu;
    // 0x1545f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1554B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1554B0u, 0x1545ECu, 0x1545F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1545F4u;
label_1545f4:
    // 0x1545f4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1545f8:
    if (ctx->pc == 0x1545F8u) {
        ctx->pc = 0x1545F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545F4u;
        // 0x1545f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545FCu;
        goto label_1545fc;
    }
    ctx->pc = 0x1545F4u;
    {
        const bool branch_taken_0x1545f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545F4u;
        // 0x1545f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545f4) {
            ctx->pc = 0x15465Cu;
            goto label_15465c;
        }
    }
    ctx->pc = 0x1545FCu;
label_1545fc:
    // 0x1545fc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x1545fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_154600:
    // 0x154600: 0xc055208  jal         func_154820
label_154604:
    if (ctx->pc == 0x154604u) {
        ctx->pc = 0x154604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154600u;
        // 0x154604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154608u;
        goto label_154608;
    }
    ctx->pc = 0x154600u;
    SET_GPR_U32(ctx, 31, 0x154608u);
    ctx->pc = 0x154604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154600u;
    // 0x154604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154820u, 0x154600u, 0x154608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154608u;
label_154608:
    // 0x154608: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_15460c:
    if (ctx->pc == 0x15460Cu) {
        ctx->pc = 0x15460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154608u;
        // 0x15460c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154610u;
        goto label_154610;
    }
    ctx->pc = 0x154608u;
    {
        const bool branch_taken_0x154608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154608) {
            ctx->pc = 0x15460Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154608u;
            // 0x15460c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15465Cu;
            goto label_15465c;
        }
    }
    ctx->pc = 0x154610u;
label_154610:
    // 0x154610: 0x8e020680  lw          $v0, 0x680($s0)
    ctx->pc = 0x154610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1664)));
label_154614:
    // 0x154614: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_154618:
    if (ctx->pc == 0x154618u) {
        ctx->pc = 0x154618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154614u;
        // 0x154618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15461Cu;
        goto label_15461c;
    }
    ctx->pc = 0x154614u;
    {
        const bool branch_taken_0x154614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154614u;
        // 0x154618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154614) {
            ctx->pc = 0x154624u;
            goto label_154624;
        }
    }
    ctx->pc = 0x15461Cu;
label_15461c:
    // 0x15461c: 0x10000002  b           . + 4 + (0x2 << 2)
label_154620:
    if (ctx->pc == 0x154620u) {
        ctx->pc = 0x154620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15461Cu;
        // 0x154620: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154624u;
        goto label_154624;
    }
    ctx->pc = 0x15461Cu;
    {
        const bool branch_taken_0x15461c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15461Cu;
        // 0x154620: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15461c) {
            ctx->pc = 0x154628u;
            goto label_154628;
        }
    }
    ctx->pc = 0x154624u;
label_154624:
    // 0x154624: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x154624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_154628:
    // 0x154628: 0xc04dd5c  jal         func_137570
label_15462c:
    if (ctx->pc == 0x15462Cu) {
        ctx->pc = 0x15462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154628u;
        // 0x15462c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154630u;
        goto label_154630;
    }
    ctx->pc = 0x154628u;
    SET_GPR_U32(ctx, 31, 0x154630u);
    ctx->pc = 0x15462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154628u;
    // 0x15462c: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137570u, 0x154628u, 0x154630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154630u;
label_154630:
    // 0x154630: 0x1000000a  b           . + 4 + (0xA << 2)
label_154634:
    if (ctx->pc == 0x154634u) {
        ctx->pc = 0x154634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154630u;
        // 0x154634: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154638u;
        goto label_154638;
    }
    ctx->pc = 0x154630u;
    {
        const bool branch_taken_0x154630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154630u;
        // 0x154634: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154630) {
            ctx->pc = 0x15465Cu;
            goto label_15465c;
        }
    }
    ctx->pc = 0x154638u;
label_154638:
    // 0x154638: 0xc05519c  jal         func_154670
label_15463c:
    if (ctx->pc == 0x15463Cu) {
        ctx->pc = 0x15463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154638u;
        // 0x15463c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154640u;
        goto label_154640;
    }
    ctx->pc = 0x154638u;
    SET_GPR_U32(ctx, 31, 0x154640u);
    ctx->pc = 0x15463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154638u;
    // 0x15463c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154670u, 0x154638u, 0x154640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154640u;
label_154640:
    // 0x154640: 0x10000006  b           . + 4 + (0x6 << 2)
label_154644:
    if (ctx->pc == 0x154644u) {
        ctx->pc = 0x154644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154640u;
        // 0x154644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154648u;
        goto label_154648;
    }
    ctx->pc = 0x154640u;
    {
        const bool branch_taken_0x154640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154640u;
        // 0x154644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154640) {
            ctx->pc = 0x15465Cu;
            goto label_15465c;
        }
    }
    ctx->pc = 0x154648u;
label_154648:
    // 0x154648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x154648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15464c:
    // 0x15464c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x15464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_154650:
    // 0x154650: 0x40f809  jalr        $v0
label_154654:
    if (ctx->pc == 0x154654u) {
        ctx->pc = 0x154654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154650u;
        // 0x154654: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154658u;
        goto label_154658;
    }
    ctx->pc = 0x154650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154658u);
        ctx->pc = 0x154654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154650u;
        // 0x154654: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154650u, 0x154658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154658u;
label_154658:
    // 0x154658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x154658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15465c:
    // 0x15465c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15465cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_154660:
    // 0x154660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x154660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_154664:
    // 0x154664: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x154664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_154668:
    // 0x154668: 0x3e00008  jr          $ra
label_15466c:
    if (ctx->pc == 0x15466Cu) {
        ctx->pc = 0x15466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154668u;
        // 0x15466c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154670u;
        goto label_fallthrough_0x154668;
    }
    ctx->pc = 0x154668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154668u;
        // 0x15466c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x154668:
    ctx->pc = 0x154670u;
}
