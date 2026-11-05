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

// Function: sub_00216450
// Address: 0x216450 - 0x2166dc
void sub_00216450_0x216450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216450_0x216450");
#endif

    switch (ctx->pc) {
        case 0x216450u: goto label_216450;
        case 0x216454u: goto label_216454;
        case 0x216458u: goto label_216458;
        case 0x21645cu: goto label_21645c;
        case 0x216460u: goto label_216460;
        case 0x216464u: goto label_216464;
        case 0x216468u: goto label_216468;
        case 0x21646cu: goto label_21646c;
        case 0x216470u: goto label_216470;
        case 0x216474u: goto label_216474;
        case 0x216478u: goto label_216478;
        case 0x21647cu: goto label_21647c;
        case 0x216480u: goto label_216480;
        case 0x216484u: goto label_216484;
        case 0x216488u: goto label_216488;
        case 0x21648cu: goto label_21648c;
        case 0x216490u: goto label_216490;
        case 0x216494u: goto label_216494;
        case 0x216498u: goto label_216498;
        case 0x21649cu: goto label_21649c;
        case 0x2164a0u: goto label_2164a0;
        case 0x2164a4u: goto label_2164a4;
        case 0x2164a8u: goto label_2164a8;
        case 0x2164acu: goto label_2164ac;
        case 0x2164b0u: goto label_2164b0;
        case 0x2164b4u: goto label_2164b4;
        case 0x2164b8u: goto label_2164b8;
        case 0x2164bcu: goto label_2164bc;
        case 0x2164c0u: goto label_2164c0;
        case 0x2164c4u: goto label_2164c4;
        case 0x2164c8u: goto label_2164c8;
        case 0x2164ccu: goto label_2164cc;
        case 0x2164d0u: goto label_2164d0;
        case 0x2164d4u: goto label_2164d4;
        case 0x2164d8u: goto label_2164d8;
        case 0x2164dcu: goto label_2164dc;
        case 0x2164e0u: goto label_2164e0;
        case 0x2164e4u: goto label_2164e4;
        case 0x2164e8u: goto label_2164e8;
        case 0x2164ecu: goto label_2164ec;
        case 0x2164f0u: goto label_2164f0;
        case 0x2164f4u: goto label_2164f4;
        case 0x2164f8u: goto label_2164f8;
        case 0x2164fcu: goto label_2164fc;
        case 0x216500u: goto label_216500;
        case 0x216504u: goto label_216504;
        case 0x216508u: goto label_216508;
        case 0x21650cu: goto label_21650c;
        case 0x216510u: goto label_216510;
        case 0x216514u: goto label_216514;
        case 0x216518u: goto label_216518;
        case 0x21651cu: goto label_21651c;
        case 0x216520u: goto label_216520;
        case 0x216524u: goto label_216524;
        case 0x216528u: goto label_216528;
        case 0x21652cu: goto label_21652c;
        case 0x216530u: goto label_216530;
        case 0x216534u: goto label_216534;
        case 0x216538u: goto label_216538;
        case 0x21653cu: goto label_21653c;
        case 0x216540u: goto label_216540;
        case 0x216544u: goto label_216544;
        case 0x216548u: goto label_216548;
        case 0x21654cu: goto label_21654c;
        case 0x216550u: goto label_216550;
        case 0x216554u: goto label_216554;
        case 0x216558u: goto label_216558;
        case 0x21655cu: goto label_21655c;
        case 0x216560u: goto label_216560;
        case 0x216564u: goto label_216564;
        case 0x216568u: goto label_216568;
        case 0x21656cu: goto label_21656c;
        case 0x216570u: goto label_216570;
        case 0x216574u: goto label_216574;
        case 0x216578u: goto label_216578;
        case 0x21657cu: goto label_21657c;
        case 0x216580u: goto label_216580;
        case 0x216584u: goto label_216584;
        case 0x216588u: goto label_216588;
        case 0x21658cu: goto label_21658c;
        case 0x216590u: goto label_216590;
        case 0x216594u: goto label_216594;
        case 0x216598u: goto label_216598;
        case 0x21659cu: goto label_21659c;
        case 0x2165a0u: goto label_2165a0;
        case 0x2165a4u: goto label_2165a4;
        case 0x2165a8u: goto label_2165a8;
        case 0x2165acu: goto label_2165ac;
        case 0x2165b0u: goto label_2165b0;
        case 0x2165b4u: goto label_2165b4;
        case 0x2165b8u: goto label_2165b8;
        case 0x2165bcu: goto label_2165bc;
        case 0x2165c0u: goto label_2165c0;
        case 0x2165c4u: goto label_2165c4;
        case 0x2165c8u: goto label_2165c8;
        case 0x2165ccu: goto label_2165cc;
        case 0x2165d0u: goto label_2165d0;
        case 0x2165d4u: goto label_2165d4;
        case 0x2165d8u: goto label_2165d8;
        case 0x2165dcu: goto label_2165dc;
        case 0x2165e0u: goto label_2165e0;
        case 0x2165e4u: goto label_2165e4;
        case 0x2165e8u: goto label_2165e8;
        case 0x2165ecu: goto label_2165ec;
        case 0x2165f0u: goto label_2165f0;
        case 0x2165f4u: goto label_2165f4;
        case 0x2165f8u: goto label_2165f8;
        case 0x2165fcu: goto label_2165fc;
        case 0x216600u: goto label_216600;
        case 0x216604u: goto label_216604;
        case 0x216608u: goto label_216608;
        case 0x21660cu: goto label_21660c;
        case 0x216610u: goto label_216610;
        case 0x216614u: goto label_216614;
        case 0x216618u: goto label_216618;
        case 0x21661cu: goto label_21661c;
        case 0x216620u: goto label_216620;
        case 0x216624u: goto label_216624;
        case 0x216628u: goto label_216628;
        case 0x21662cu: goto label_21662c;
        case 0x216630u: goto label_216630;
        case 0x216634u: goto label_216634;
        case 0x216638u: goto label_216638;
        case 0x21663cu: goto label_21663c;
        case 0x216640u: goto label_216640;
        case 0x216644u: goto label_216644;
        case 0x216648u: goto label_216648;
        case 0x21664cu: goto label_21664c;
        case 0x216650u: goto label_216650;
        case 0x216654u: goto label_216654;
        case 0x216658u: goto label_216658;
        case 0x21665cu: goto label_21665c;
        case 0x216660u: goto label_216660;
        case 0x216664u: goto label_216664;
        case 0x216668u: goto label_216668;
        case 0x21666cu: goto label_21666c;
        case 0x216670u: goto label_216670;
        case 0x216674u: goto label_216674;
        case 0x216678u: goto label_216678;
        case 0x21667cu: goto label_21667c;
        case 0x216680u: goto label_216680;
        case 0x216684u: goto label_216684;
        case 0x216688u: goto label_216688;
        case 0x21668cu: goto label_21668c;
        case 0x216690u: goto label_216690;
        case 0x216694u: goto label_216694;
        case 0x216698u: goto label_216698;
        case 0x21669cu: goto label_21669c;
        case 0x2166a0u: goto label_2166a0;
        case 0x2166a4u: goto label_2166a4;
        case 0x2166a8u: goto label_2166a8;
        case 0x2166acu: goto label_2166ac;
        case 0x2166b0u: goto label_2166b0;
        case 0x2166b4u: goto label_2166b4;
        case 0x2166b8u: goto label_2166b8;
        case 0x2166bcu: goto label_2166bc;
        case 0x2166c0u: goto label_2166c0;
        case 0x2166c4u: goto label_2166c4;
        case 0x2166c8u: goto label_2166c8;
        case 0x2166ccu: goto label_2166cc;
        case 0x2166d0u: goto label_2166d0;
        case 0x2166d4u: goto label_2166d4;
        case 0x2166d8u: goto label_2166d8;
        default: break;
    }

    ctx->pc = 0x216450u;

label_216450:
    // 0x216450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_216454:
    // 0x216454: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x216454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_216458:
    // 0x216458: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x216458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_21645c:
    // 0x21645c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21645cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_216460:
    // 0x216460: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x216460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_216464:
    // 0x216464: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
label_216468:
    if (ctx->pc == 0x216468u) {
        ctx->pc = 0x216468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216464u;
        // 0x216468: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21646Cu;
        goto label_21646c;
    }
    ctx->pc = 0x216464u;
    {
        const bool branch_taken_0x216464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x216468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216464u;
        // 0x216468: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216464) {
            ctx->pc = 0x216560u;
            goto label_216560;
        }
    }
    ctx->pc = 0x21646Cu;
label_21646c:
    // 0x21646c: 0xc0efc2e  jal         func_3BF0B8
label_216470:
    if (ctx->pc == 0x216470u) {
        ctx->pc = 0x216470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21646Cu;
        // 0x216470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216474u;
        goto label_216474;
    }
    ctx->pc = 0x21646Cu;
    SET_GPR_U32(ctx, 31, 0x216474u);
    ctx->pc = 0x216470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21646Cu;
    // 0x216470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x21646Cu, 0x216474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216474u;
label_216474:
    // 0x216474: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x216474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216478:
    // 0x216478: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
label_21647c:
    if (ctx->pc == 0x21647Cu) {
        ctx->pc = 0x21647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216478u;
        // 0x21647c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216480u;
        goto label_216480;
    }
    ctx->pc = 0x216478u;
    {
        const bool branch_taken_0x216478 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x21647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216478u;
        // 0x21647c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216478) {
            ctx->pc = 0x216570u;
            goto label_216570;
        }
    }
    ctx->pc = 0x216480u;
label_216480:
    // 0x216480: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x216480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
label_216484:
    // 0x216484: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_216488:
    if (ctx->pc == 0x216488u) {
        ctx->pc = 0x216488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216484u;
        // 0x216488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21648Cu;
        goto label_21648c;
    }
    ctx->pc = 0x216484u;
    {
        const bool branch_taken_0x216484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216484u;
        // 0x216488: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216484) {
            ctx->pc = 0x216560u;
            goto label_216560;
        }
    }
    ctx->pc = 0x21648Cu;
label_21648c:
    // 0x21648c: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
label_216490:
    if (ctx->pc == 0x216490u) {
        ctx->pc = 0x216490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21648Cu;
        // 0x216490: 0x3a63821  addu        $a3, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216494u;
        goto label_216494;
    }
    ctx->pc = 0x21648Cu;
    {
        const bool branch_taken_0x21648c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x216490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21648Cu;
        // 0x216490: 0x3a63821  addu        $a3, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21648c) {
            ctx->pc = 0x2164D0u;
            goto label_2164d0;
        }
    }
    ctx->pc = 0x216494u;
label_216494:
    // 0x216494: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x216494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_216498:
    // 0x216498: 0x3a42821  addu        $a1, $sp, $a0
    ctx->pc = 0x216498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_21649c:
    // 0x21649c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x21649cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2164a0:
    // 0x2164a0: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x2164a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
label_2164a4:
    // 0x2164a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2164a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2164a8:
    // 0x2164a8: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2164a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_2164ac:
    // 0x2164ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2164b0:
    if (ctx->pc == 0x2164B0u) {
        ctx->pc = 0x2164B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164ACu;
        // 0x2164b0: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2164B4u;
        goto label_2164b4;
    }
    ctx->pc = 0x2164ACu;
    {
        const bool branch_taken_0x2164ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2164B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164ACu;
        // 0x2164b0: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164ac) {
            ctx->pc = 0x2164BCu;
            goto label_2164bc;
        }
    }
    ctx->pc = 0x2164B4u;
label_2164b4:
    // 0x2164b4: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x2164b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2164b8:
    // 0x2164b8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2164b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2164bc:
    // 0x2164bc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2164bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2164c0:
    // 0x2164c0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2164c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2164c4:
    // 0x2164c4: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x2164c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2164c8:
    // 0x2164c8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_2164cc:
    if (ctx->pc == 0x2164CCu) {
        ctx->pc = 0x2164CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164C8u;
        // 0x2164cc: 0x2041821  addu        $v1, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2164D0u;
        goto label_2164d0;
    }
    ctx->pc = 0x2164C8u;
    {
        const bool branch_taken_0x2164c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2164CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164C8u;
        // 0x2164cc: 0x2041821  addu        $v1, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164c8) {
            ctx->pc = 0x216498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216498;
        }
    }
    ctx->pc = 0x2164D0u;
label_2164d0:
    // 0x2164d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2164d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_2164d4:
    // 0x2164d4: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x2164d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_2164d8:
    // 0x2164d8: 0x24a514b8  addiu       $a1, $a1, 0x14B8
    ctx->pc = 0x2164d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5304));
label_2164dc:
    // 0x2164dc: 0xc0efb95  jal         func_3BEE54
label_2164e0:
    if (ctx->pc == 0x2164E0u) {
        ctx->pc = 0x2164E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164DCu;
        // 0x2164e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2164E4u;
        goto label_2164e4;
    }
    ctx->pc = 0x2164DCu;
    SET_GPR_U32(ctx, 31, 0x2164E4u);
    ctx->pc = 0x2164E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164DCu;
    // 0x2164e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2164DCu, 0x2164E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2164E4u;
label_2164e4:
    // 0x2164e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2164e8:
    if (ctx->pc == 0x2164E8u) {
        ctx->pc = 0x2164E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164E4u;
        // 0x2164e8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2164ECu;
        goto label_2164ec;
    }
    ctx->pc = 0x2164E4u;
    {
        const bool branch_taken_0x2164e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2164E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164E4u;
        // 0x2164e8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164e4) {
            ctx->pc = 0x2164F8u;
            goto label_2164f8;
        }
    }
    ctx->pc = 0x2164ECu;
label_2164ec:
    // 0x2164ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2164ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2164f0:
    // 0x2164f0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2164f4:
    if (ctx->pc == 0x2164F4u) {
        ctx->pc = 0x2164F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164F0u;
        // 0x2164f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2164F8u;
        goto label_2164f8;
    }
    ctx->pc = 0x2164F0u;
    {
        const bool branch_taken_0x2164f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2164F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164F0u;
        // 0x2164f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164f0) {
            ctx->pc = 0x216570u;
            goto label_216570;
        }
    }
    ctx->pc = 0x2164F8u;
label_2164f8:
    // 0x2164f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2164f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2164fc:
    // 0x2164fc: 0xc0efb95  jal         func_3BEE54
label_216500:
    if (ctx->pc == 0x216500u) {
        ctx->pc = 0x216500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2164FCu;
        // 0x216500: 0x24a514c8  addiu       $a1, $a1, 0x14C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216504u;
        goto label_216504;
    }
    ctx->pc = 0x2164FCu;
    SET_GPR_U32(ctx, 31, 0x216504u);
    ctx->pc = 0x216500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2164FCu;
    // 0x216500: 0x24a514c8  addiu       $a1, $a1, 0x14C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2164FCu, 0x216504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216504u;
label_216504:
    // 0x216504: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_216508:
    if (ctx->pc == 0x216508u) {
        ctx->pc = 0x216508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216504u;
        // 0x216508: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21650Cu;
        goto label_21650c;
    }
    ctx->pc = 0x216504u;
    {
        const bool branch_taken_0x216504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216504u;
        // 0x216508: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216504) {
            ctx->pc = 0x216514u;
            goto label_216514;
        }
    }
    ctx->pc = 0x21650Cu;
label_21650c:
    // 0x21650c: 0x10000016  b           . + 4 + (0x16 << 2)
label_216510:
    if (ctx->pc == 0x216510u) {
        ctx->pc = 0x216510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21650Cu;
        // 0x216510: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216514u;
        goto label_216514;
    }
    ctx->pc = 0x21650Cu;
    {
        const bool branch_taken_0x21650c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21650Cu;
        // 0x216510: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21650c) {
            ctx->pc = 0x216568u;
            goto label_216568;
        }
    }
    ctx->pc = 0x216514u;
label_216514:
    // 0x216514: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x216514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_216518:
    // 0x216518: 0xc0efb95  jal         func_3BEE54
label_21651c:
    if (ctx->pc == 0x21651Cu) {
        ctx->pc = 0x21651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216518u;
        // 0x21651c: 0x24a514d0  addiu       $a1, $a1, 0x14D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216520u;
        goto label_216520;
    }
    ctx->pc = 0x216518u;
    SET_GPR_U32(ctx, 31, 0x216520u);
    ctx->pc = 0x21651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216518u;
    // 0x21651c: 0x24a514d0  addiu       $a1, $a1, 0x14D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x216518u, 0x216520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216520u;
label_216520:
    // 0x216520: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_216524:
    if (ctx->pc == 0x216524u) {
        ctx->pc = 0x216524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216520u;
        // 0x216524: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216528u;
        goto label_216528;
    }
    ctx->pc = 0x216520u;
    {
        const bool branch_taken_0x216520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216520u;
        // 0x216524: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216520) {
            ctx->pc = 0x216530u;
            goto label_216530;
        }
    }
    ctx->pc = 0x216528u;
label_216528:
    // 0x216528: 0x1000000f  b           . + 4 + (0xF << 2)
label_21652c:
    if (ctx->pc == 0x21652Cu) {
        ctx->pc = 0x21652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216528u;
        // 0x21652c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216530u;
        goto label_216530;
    }
    ctx->pc = 0x216528u;
    {
        const bool branch_taken_0x216528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216528u;
        // 0x21652c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216528) {
            ctx->pc = 0x216568u;
            goto label_216568;
        }
    }
    ctx->pc = 0x216530u;
label_216530:
    // 0x216530: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x216530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_216534:
    // 0x216534: 0xc0efb95  jal         func_3BEE54
label_216538:
    if (ctx->pc == 0x216538u) {
        ctx->pc = 0x216538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216534u;
        // 0x216538: 0x24a514d8  addiu       $a1, $a1, 0x14D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21653Cu;
        goto label_21653c;
    }
    ctx->pc = 0x216534u;
    SET_GPR_U32(ctx, 31, 0x21653Cu);
    ctx->pc = 0x216538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216534u;
    // 0x216538: 0x24a514d8  addiu       $a1, $a1, 0x14D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x216534u, 0x21653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21653Cu;
label_21653c:
    // 0x21653c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_216540:
    if (ctx->pc == 0x216540u) {
        ctx->pc = 0x216540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21653Cu;
        // 0x216540: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216544u;
        goto label_216544;
    }
    ctx->pc = 0x21653Cu;
    {
        const bool branch_taken_0x21653c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21653Cu;
        // 0x216540: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21653c) {
            ctx->pc = 0x21654Cu;
            goto label_21654c;
        }
    }
    ctx->pc = 0x216544u;
label_216544:
    // 0x216544: 0x10000008  b           . + 4 + (0x8 << 2)
label_216548:
    if (ctx->pc == 0x216548u) {
        ctx->pc = 0x216548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216544u;
        // 0x216548: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21654Cu;
        goto label_21654c;
    }
    ctx->pc = 0x216544u;
    {
        const bool branch_taken_0x216544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216544u;
        // 0x216548: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216544) {
            ctx->pc = 0x216568u;
            goto label_216568;
        }
    }
    ctx->pc = 0x21654Cu;
label_21654c:
    // 0x21654c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_216550:
    // 0x216550: 0xc0efb95  jal         func_3BEE54
label_216554:
    if (ctx->pc == 0x216554u) {
        ctx->pc = 0x216554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216550u;
        // 0x216554: 0x24a514e0  addiu       $a1, $a1, 0x14E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216558u;
        goto label_216558;
    }
    ctx->pc = 0x216550u;
    SET_GPR_U32(ctx, 31, 0x216558u);
    ctx->pc = 0x216554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216550u;
    // 0x216554: 0x24a514e0  addiu       $a1, $a1, 0x14E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x216550u, 0x216558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216558u;
label_216558:
    // 0x216558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21655c:
    if (ctx->pc == 0x21655Cu) {
        ctx->pc = 0x21655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216558u;
        // 0x21655c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216560u;
        goto label_216560;
    }
    ctx->pc = 0x216558u;
    {
        const bool branch_taken_0x216558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216558u;
        // 0x21655c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216558) {
            ctx->pc = 0x216568u;
            goto label_216568;
        }
    }
    ctx->pc = 0x216560u;
label_216560:
    // 0x216560: 0x10000003  b           . + 4 + (0x3 << 2)
label_216564:
    if (ctx->pc == 0x216564u) {
        ctx->pc = 0x216564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216560u;
        // 0x216564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216568u;
        goto label_216568;
    }
    ctx->pc = 0x216560u;
    {
        const bool branch_taken_0x216560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216560u;
        // 0x216564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216560) {
            ctx->pc = 0x216570u;
            goto label_216570;
        }
    }
    ctx->pc = 0x216568u;
label_216568:
    // 0x216568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21656c:
    // 0x21656c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x21656cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_216570:
    // 0x216570: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x216570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_216574:
    // 0x216574: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x216574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_216578:
    // 0x216578: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x216578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_21657c:
    // 0x21657c: 0x3e00008  jr          $ra
label_216580:
    if (ctx->pc == 0x216580u) {
        ctx->pc = 0x216580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21657Cu;
        // 0x216580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216584u;
        goto label_216584;
    }
    ctx->pc = 0x21657Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21657Cu;
        // 0x216580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21657Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216584u;
label_216584:
    // 0x216584: 0x0  nop
    ctx->pc = 0x216584u;
    // NOP
label_216588:
    // 0x216588: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x216588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_21658c:
    // 0x21658c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_216590:
    if (ctx->pc == 0x216590u) {
        ctx->pc = 0x216590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21658Cu;
        // 0x216590: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216594u;
        goto label_216594;
    }
    ctx->pc = 0x21658Cu;
    {
        const bool branch_taken_0x21658c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21658Cu;
        // 0x216590: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21658c) {
            ctx->pc = 0x216684u;
            goto label_216684;
        }
    }
    ctx->pc = 0x216594u;
label_216594:
    // 0x216594: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x216594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_216598:
    // 0x216598: 0x24421530  addiu       $v0, $v0, 0x1530
    ctx->pc = 0x216598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5424));
label_21659c:
    // 0x21659c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21659cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2165a0:
    // 0x2165a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2165a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2165a4:
    // 0x2165a4: 0x800008  jr          $a0
label_2165a8:
    if (ctx->pc == 0x2165A8u) {
        ctx->pc = 0x2165ACu;
        goto label_2165ac;
    }
    ctx->pc = 0x2165A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2165ACu: goto label_2165ac;
            case 0x2165DCu: goto label_2165dc;
            case 0x216604u: goto label_216604;
            case 0x21663Cu: goto label_21663c;
            case 0x21665Cu: goto label_21665c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2165A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2165ACu;
label_2165ac:
    // 0x2165ac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2165acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2165b0:
    // 0x2165b0: 0x244714f0  addiu       $a3, $v0, 0x14F0
    ctx->pc = 0x2165b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5360));
label_2165b4:
    // 0x2165b4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x2165b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2165b8:
    // 0x2165b8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x2165b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2165bc:
    // 0x2165bc: 0x80e40008  lb          $a0, 0x8($a3)
    ctx->pc = 0x2165bcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_2165c0:
    // 0x2165c0: 0x80e50009  lb          $a1, 0x9($a3)
    ctx->pc = 0x2165c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 9)));
label_2165c4:
    // 0x2165c4: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x2165c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2165c8:
    // 0x2165c8: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x2165c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2165cc:
    // 0x2165cc: 0xa0c40008  sb          $a0, 0x8($a2)
    ctx->pc = 0x2165ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 4));
label_2165d0:
    // 0x2165d0: 0xa0c50009  sb          $a1, 0x9($a2)
    ctx->pc = 0x2165d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 5));
label_2165d4:
    // 0x2165d4: 0x3e00008  jr          $ra
label_2165d8:
    if (ctx->pc == 0x2165D8u) {
        ctx->pc = 0x2165DCu;
        goto label_2165dc;
    }
    ctx->pc = 0x2165D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2165D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2165DCu;
label_2165dc:
    // 0x2165dc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2165dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2165e0:
    // 0x2165e0: 0x24471500  addiu       $a3, $v0, 0x1500
    ctx->pc = 0x2165e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
label_2165e4:
    // 0x2165e4: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x2165e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_2165e8:
    // 0x2165e8: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x2165e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_2165ec:
    // 0x2165ec: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x2165ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_2165f0:
    // 0x2165f0: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x2165f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_2165f4:
    // 0x2165f4: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x2165f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2165f8:
    // 0x2165f8: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x2165f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
label_2165fc:
    // 0x2165fc: 0x3e00008  jr          $ra
label_216600:
    if (ctx->pc == 0x216600u) {
        ctx->pc = 0x216604u;
        goto label_216604;
    }
    ctx->pc = 0x2165FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2165FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216604u;
label_216604:
    // 0x216604: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x216604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_216608:
    // 0x216608: 0x24471508  addiu       $a3, $v0, 0x1508
    ctx->pc = 0x216608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5384));
label_21660c:
    // 0x21660c: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x21660cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_216610:
    // 0x216610: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x216610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_216614:
    // 0x216614: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x216614u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_216618:
    // 0x216618: 0x80e50005  lb          $a1, 0x5($a3)
    ctx->pc = 0x216618u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_21661c:
    // 0x21661c: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x21661cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_216620:
    // 0x216620: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x216620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_216624:
    // 0x216624: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x216624u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
label_216628:
    // 0x216628: 0xa0c50005  sb          $a1, 0x5($a2)
    ctx->pc = 0x216628u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 5));
label_21662c:
    // 0x21662c: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x21662cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_216630:
    // 0x216630: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x216630u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
label_216634:
    // 0x216634: 0x3e00008  jr          $ra
label_216638:
    if (ctx->pc == 0x216638u) {
        ctx->pc = 0x21663Cu;
        goto label_21663c;
    }
    ctx->pc = 0x216634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21663Cu;
label_21663c:
    // 0x21663c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21663cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_216640:
    // 0x216640: 0x24471510  addiu       $a3, $v0, 0x1510
    ctx->pc = 0x216640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5392));
label_216644:
    // 0x216644: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x216644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_216648:
    // 0x216648: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x216648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_21664c:
    // 0x21664c: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x21664cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_216650:
    // 0x216650: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x216650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_216654:
    // 0x216654: 0x3e00008  jr          $ra
label_216658:
    if (ctx->pc == 0x216658u) {
        ctx->pc = 0x21665Cu;
        goto label_21665c;
    }
    ctx->pc = 0x216654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21665Cu;
label_21665c:
    // 0x21665c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21665cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_216660:
    // 0x216660: 0x24471518  addiu       $a3, $v0, 0x1518
    ctx->pc = 0x216660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5400));
label_216664:
    // 0x216664: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x216664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_216668:
    // 0x216668: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x216668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_21666c:
    // 0x21666c: 0x80e40008  lb          $a0, 0x8($a3)
    ctx->pc = 0x21666cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
label_216670:
    // 0x216670: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x216670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_216674:
    // 0x216674: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x216674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_216678:
    // 0x216678: 0xa0c40008  sb          $a0, 0x8($a2)
    ctx->pc = 0x216678u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 4));
label_21667c:
    // 0x21667c: 0x3e00008  jr          $ra
label_216680:
    if (ctx->pc == 0x216680u) {
        ctx->pc = 0x216684u;
        goto label_216684;
    }
    ctx->pc = 0x21667Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21667Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216684u;
label_216684:
    // 0x216684: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x216684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_216688:
    // 0x216688: 0x24471528  addiu       $a3, $v0, 0x1528
    ctx->pc = 0x216688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5416));
label_21668c:
    // 0x21668c: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x21668cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_216690:
    // 0x216690: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x216690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_216694:
    // 0x216694: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x216694u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_216698:
    // 0x216698: 0x80e50005  lb          $a1, 0x5($a3)
    ctx->pc = 0x216698u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_21669c:
    // 0x21669c: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x21669cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_2166a0:
    // 0x2166a0: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x2166a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2166a4:
    // 0x2166a4: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x2166a4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
label_2166a8:
    // 0x2166a8: 0xa0c50005  sb          $a1, 0x5($a2)
    ctx->pc = 0x2166a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 5));
label_2166ac:
    // 0x2166ac: 0x3e00008  jr          $ra
label_2166b0:
    if (ctx->pc == 0x2166B0u) {
        ctx->pc = 0x2166B4u;
        goto label_2166b4;
    }
    ctx->pc = 0x2166ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2166ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2166B4u;
label_2166b4:
    // 0x2166b4: 0x0  nop
    ctx->pc = 0x2166b4u;
    // NOP
label_2166b8:
    // 0x2166b8: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x2166b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2166bc:
    // 0x2166bc: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2166c0:
    if (ctx->pc == 0x2166C0u) {
        ctx->pc = 0x2166C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166BCu;
        // 0x2166c0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2166C4u;
        goto label_2166c4;
    }
    ctx->pc = 0x2166BCu;
    {
        const bool branch_taken_0x2166bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2166BCu;
        // 0x2166c0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166bc) {
            ctx->pc = 0x21677Cu;
            return;
        }
    }
    ctx->pc = 0x2166C4u;
label_2166c4:
    // 0x2166c4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2166c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2166c8:
    // 0x2166c8: 0x24421570  addiu       $v0, $v0, 0x1570
    ctx->pc = 0x2166c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5488));
label_2166cc:
    // 0x2166cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2166ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2166d0:
    // 0x2166d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2166d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2166d4:
    // 0x2166d4: 0x800008  jr          $a0
label_2166d8:
    if (ctx->pc == 0x2166D8u) {
        ctx->pc = 0x2166DCu;
        goto label_fallthrough_0x2166d4;
    }
    ctx->pc = 0x2166D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2166D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2166d4:
    ctx->pc = 0x2166DCu;
}
