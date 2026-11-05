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

// Function: sub_00176428
// Address: 0x176428 - 0x1766d0
void sub_00176428_0x176428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176428_0x176428");
#endif

    switch (ctx->pc) {
        case 0x176428u: goto label_176428;
        case 0x17642cu: goto label_17642c;
        case 0x176430u: goto label_176430;
        case 0x176434u: goto label_176434;
        case 0x176438u: goto label_176438;
        case 0x17643cu: goto label_17643c;
        case 0x176440u: goto label_176440;
        case 0x176444u: goto label_176444;
        case 0x176448u: goto label_176448;
        case 0x17644cu: goto label_17644c;
        case 0x176450u: goto label_176450;
        case 0x176454u: goto label_176454;
        case 0x176458u: goto label_176458;
        case 0x17645cu: goto label_17645c;
        case 0x176460u: goto label_176460;
        case 0x176464u: goto label_176464;
        case 0x176468u: goto label_176468;
        case 0x17646cu: goto label_17646c;
        case 0x176470u: goto label_176470;
        case 0x176474u: goto label_176474;
        case 0x176478u: goto label_176478;
        case 0x17647cu: goto label_17647c;
        case 0x176480u: goto label_176480;
        case 0x176484u: goto label_176484;
        case 0x176488u: goto label_176488;
        case 0x17648cu: goto label_17648c;
        case 0x176490u: goto label_176490;
        case 0x176494u: goto label_176494;
        case 0x176498u: goto label_176498;
        case 0x17649cu: goto label_17649c;
        case 0x1764a0u: goto label_1764a0;
        case 0x1764a4u: goto label_1764a4;
        case 0x1764a8u: goto label_1764a8;
        case 0x1764acu: goto label_1764ac;
        case 0x1764b0u: goto label_1764b0;
        case 0x1764b4u: goto label_1764b4;
        case 0x1764b8u: goto label_1764b8;
        case 0x1764bcu: goto label_1764bc;
        case 0x1764c0u: goto label_1764c0;
        case 0x1764c4u: goto label_1764c4;
        case 0x1764c8u: goto label_1764c8;
        case 0x1764ccu: goto label_1764cc;
        case 0x1764d0u: goto label_1764d0;
        case 0x1764d4u: goto label_1764d4;
        case 0x1764d8u: goto label_1764d8;
        case 0x1764dcu: goto label_1764dc;
        case 0x1764e0u: goto label_1764e0;
        case 0x1764e4u: goto label_1764e4;
        case 0x1764e8u: goto label_1764e8;
        case 0x1764ecu: goto label_1764ec;
        case 0x1764f0u: goto label_1764f0;
        case 0x1764f4u: goto label_1764f4;
        case 0x1764f8u: goto label_1764f8;
        case 0x1764fcu: goto label_1764fc;
        case 0x176500u: goto label_176500;
        case 0x176504u: goto label_176504;
        case 0x176508u: goto label_176508;
        case 0x17650cu: goto label_17650c;
        case 0x176510u: goto label_176510;
        case 0x176514u: goto label_176514;
        case 0x176518u: goto label_176518;
        case 0x17651cu: goto label_17651c;
        case 0x176520u: goto label_176520;
        case 0x176524u: goto label_176524;
        case 0x176528u: goto label_176528;
        case 0x17652cu: goto label_17652c;
        case 0x176530u: goto label_176530;
        case 0x176534u: goto label_176534;
        case 0x176538u: goto label_176538;
        case 0x17653cu: goto label_17653c;
        case 0x176540u: goto label_176540;
        case 0x176544u: goto label_176544;
        case 0x176548u: goto label_176548;
        case 0x17654cu: goto label_17654c;
        case 0x176550u: goto label_176550;
        case 0x176554u: goto label_176554;
        case 0x176558u: goto label_176558;
        case 0x17655cu: goto label_17655c;
        case 0x176560u: goto label_176560;
        case 0x176564u: goto label_176564;
        case 0x176568u: goto label_176568;
        case 0x17656cu: goto label_17656c;
        case 0x176570u: goto label_176570;
        case 0x176574u: goto label_176574;
        case 0x176578u: goto label_176578;
        case 0x17657cu: goto label_17657c;
        case 0x176580u: goto label_176580;
        case 0x176584u: goto label_176584;
        case 0x176588u: goto label_176588;
        case 0x17658cu: goto label_17658c;
        case 0x176590u: goto label_176590;
        case 0x176594u: goto label_176594;
        case 0x176598u: goto label_176598;
        case 0x17659cu: goto label_17659c;
        case 0x1765a0u: goto label_1765a0;
        case 0x1765a4u: goto label_1765a4;
        case 0x1765a8u: goto label_1765a8;
        case 0x1765acu: goto label_1765ac;
        case 0x1765b0u: goto label_1765b0;
        case 0x1765b4u: goto label_1765b4;
        case 0x1765b8u: goto label_1765b8;
        case 0x1765bcu: goto label_1765bc;
        case 0x1765c0u: goto label_1765c0;
        case 0x1765c4u: goto label_1765c4;
        case 0x1765c8u: goto label_1765c8;
        case 0x1765ccu: goto label_1765cc;
        case 0x1765d0u: goto label_1765d0;
        case 0x1765d4u: goto label_1765d4;
        case 0x1765d8u: goto label_1765d8;
        case 0x1765dcu: goto label_1765dc;
        case 0x1765e0u: goto label_1765e0;
        case 0x1765e4u: goto label_1765e4;
        case 0x1765e8u: goto label_1765e8;
        case 0x1765ecu: goto label_1765ec;
        case 0x1765f0u: goto label_1765f0;
        case 0x1765f4u: goto label_1765f4;
        case 0x1765f8u: goto label_1765f8;
        case 0x1765fcu: goto label_1765fc;
        case 0x176600u: goto label_176600;
        case 0x176604u: goto label_176604;
        case 0x176608u: goto label_176608;
        case 0x17660cu: goto label_17660c;
        case 0x176610u: goto label_176610;
        case 0x176614u: goto label_176614;
        case 0x176618u: goto label_176618;
        case 0x17661cu: goto label_17661c;
        case 0x176620u: goto label_176620;
        case 0x176624u: goto label_176624;
        case 0x176628u: goto label_176628;
        case 0x17662cu: goto label_17662c;
        case 0x176630u: goto label_176630;
        case 0x176634u: goto label_176634;
        case 0x176638u: goto label_176638;
        case 0x17663cu: goto label_17663c;
        case 0x176640u: goto label_176640;
        case 0x176644u: goto label_176644;
        case 0x176648u: goto label_176648;
        case 0x17664cu: goto label_17664c;
        case 0x176650u: goto label_176650;
        case 0x176654u: goto label_176654;
        case 0x176658u: goto label_176658;
        case 0x17665cu: goto label_17665c;
        case 0x176660u: goto label_176660;
        case 0x176664u: goto label_176664;
        case 0x176668u: goto label_176668;
        case 0x17666cu: goto label_17666c;
        case 0x176670u: goto label_176670;
        case 0x176674u: goto label_176674;
        case 0x176678u: goto label_176678;
        case 0x17667cu: goto label_17667c;
        case 0x176680u: goto label_176680;
        case 0x176684u: goto label_176684;
        case 0x176688u: goto label_176688;
        case 0x17668cu: goto label_17668c;
        case 0x176690u: goto label_176690;
        case 0x176694u: goto label_176694;
        case 0x176698u: goto label_176698;
        case 0x17669cu: goto label_17669c;
        case 0x1766a0u: goto label_1766a0;
        case 0x1766a4u: goto label_1766a4;
        case 0x1766a8u: goto label_1766a8;
        case 0x1766acu: goto label_1766ac;
        case 0x1766b0u: goto label_1766b0;
        case 0x1766b4u: goto label_1766b4;
        case 0x1766b8u: goto label_1766b8;
        case 0x1766bcu: goto label_1766bc;
        case 0x1766c0u: goto label_1766c0;
        case 0x1766c4u: goto label_1766c4;
        case 0x1766c8u: goto label_1766c8;
        case 0x1766ccu: goto label_1766cc;
        default: break;
    }

    ctx->pc = 0x176428u;

label_176428:
    // 0x176428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17642c:
    // 0x17642c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17642cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176430:
    // 0x176430: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x176430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_176434:
    // 0x176434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x176434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_176438:
    // 0x176438: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_17643c:
    // 0x17643c: 0x50800029  beql        $a0, $zero, . + 4 + (0x29 << 2)
label_176440:
    if (ctx->pc == 0x176440u) {
        ctx->pc = 0x176440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17643Cu;
        // 0x176440: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176444u;
        goto label_176444;
    }
    ctx->pc = 0x17643Cu;
    {
        const bool branch_taken_0x17643c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17643c) {
            ctx->pc = 0x176440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17643Cu;
            // 0x176440: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1764E4u;
            goto label_1764e4;
        }
    }
    ctx->pc = 0x176444u;
label_176444:
    // 0x176444: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176448:
    // 0x176448: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x176448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17644c:
    // 0x17644c: 0x40f809  jalr        $v0
label_176450:
    if (ctx->pc == 0x176450u) {
        ctx->pc = 0x176454u;
        goto label_176454;
    }
    ctx->pc = 0x17644Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176454u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17644Cu, 0x176454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176454u;
label_176454:
    // 0x176454: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x176454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_176458:
    // 0x176458: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x176458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_17645c:
    // 0x17645c: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x17645cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_176460:
    // 0x176460: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_176464:
    if (ctx->pc == 0x176464u) {
        ctx->pc = 0x176464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176460u;
        // 0x176464: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176468u;
        goto label_176468;
    }
    ctx->pc = 0x176460u;
    {
        const bool branch_taken_0x176460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176460u;
        // 0x176464: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176460) {
            ctx->pc = 0x1764D8u;
            goto label_1764d8;
        }
    }
    ctx->pc = 0x176468u;
label_176468:
    // 0x176468: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x176468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17646c:
    // 0x17646c: 0x2442f500  addiu       $v0, $v0, -0xB00
    ctx->pc = 0x17646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964480));
label_176470:
    // 0x176470: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x176470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_176474:
    // 0x176474: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x176474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_176478:
    // 0x176478: 0x800008  jr          $a0
label_17647c:
    if (ctx->pc == 0x17647Cu) {
        ctx->pc = 0x176480u;
        goto label_176480;
    }
    ctx->pc = 0x176478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176480u: goto label_176480;
            case 0x176498u: goto label_176498;
            case 0x1764B0u: goto label_1764b0;
            case 0x1764C8u: goto label_1764c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176478u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x176480u;
label_176480:
    // 0x176480: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x176480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_176484:
    // 0x176484: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x176484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_176488:
    // 0x176488: 0xc041fec  jal         func_107FB0
label_17648c:
    if (ctx->pc == 0x17648Cu) {
        ctx->pc = 0x17648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176488u;
        // 0x17648c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176490u;
        goto label_176490;
    }
    ctx->pc = 0x176488u;
    SET_GPR_U32(ctx, 31, 0x176490u);
    ctx->pc = 0x17648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176488u;
    // 0x17648c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107FB0u, 0x176488u, 0x176490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176490u;
label_176490:
    // 0x176490: 0x10000011  b           . + 4 + (0x11 << 2)
label_176494:
    if (ctx->pc == 0x176494u) {
        ctx->pc = 0x176498u;
        goto label_176498;
    }
    ctx->pc = 0x176490u;
    {
        const bool branch_taken_0x176490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x176490) {
            ctx->pc = 0x1764D8u;
            goto label_1764d8;
        }
    }
    ctx->pc = 0x176498u;
label_176498:
    // 0x176498: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x176498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_17649c:
    // 0x17649c: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x17649cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1764a0:
    // 0x1764a0: 0xc042034  jal         func_1080D0
label_1764a4:
    if (ctx->pc == 0x1764A4u) {
        ctx->pc = 0x1764A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764A0u;
        // 0x1764a4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1764A8u;
        goto label_1764a8;
    }
    ctx->pc = 0x1764A0u;
    SET_GPR_U32(ctx, 31, 0x1764A8u);
    ctx->pc = 0x1764A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1764A0u;
    // 0x1764a4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1080D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1080D0u, 0x1764A0u, 0x1764A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764A8u;
label_1764a8:
    // 0x1764a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1764ac:
    if (ctx->pc == 0x1764ACu) {
        ctx->pc = 0x1764B0u;
        goto label_1764b0;
    }
    ctx->pc = 0x1764A8u;
    {
        const bool branch_taken_0x1764a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1764a8) {
            ctx->pc = 0x1764D8u;
            goto label_1764d8;
        }
    }
    ctx->pc = 0x1764B0u;
label_1764b0:
    // 0x1764b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1764b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1764b4:
    // 0x1764b4: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x1764b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1764b8:
    // 0x1764b8: 0xc042004  jal         func_108010
label_1764bc:
    if (ctx->pc == 0x1764BCu) {
        ctx->pc = 0x1764BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764B8u;
        // 0x1764bc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1764C0u;
        goto label_1764c0;
    }
    ctx->pc = 0x1764B8u;
    SET_GPR_U32(ctx, 31, 0x1764C0u);
    ctx->pc = 0x1764BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1764B8u;
    // 0x1764bc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108010u, 0x1764B8u, 0x1764C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764C0u;
label_1764c0:
    // 0x1764c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1764c4:
    if (ctx->pc == 0x1764C4u) {
        ctx->pc = 0x1764C8u;
        goto label_1764c8;
    }
    ctx->pc = 0x1764C0u;
    {
        const bool branch_taken_0x1764c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1764c0) {
            ctx->pc = 0x1764D8u;
            goto label_1764d8;
        }
    }
    ctx->pc = 0x1764C8u;
label_1764c8:
    // 0x1764c8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1764c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1764cc:
    // 0x1764cc: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x1764ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1764d0:
    // 0x1764d0: 0xc041ff8  jal         func_107FE0
label_1764d4:
    if (ctx->pc == 0x1764D4u) {
        ctx->pc = 0x1764D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764D0u;
        // 0x1764d4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1764D8u;
        goto label_1764d8;
    }
    ctx->pc = 0x1764D0u;
    SET_GPR_U32(ctx, 31, 0x1764D8u);
    ctx->pc = 0x1764D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1764D0u;
    // 0x1764d4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107FE0u, 0x1764D0u, 0x1764D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764D8u;
label_1764d8:
    // 0x1764d8: 0xc05d906  jal         func_176418
label_1764dc:
    if (ctx->pc == 0x1764DCu) {
        ctx->pc = 0x1764DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764D8u;
        // 0x1764dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1764E0u;
        goto label_1764e0;
    }
    ctx->pc = 0x1764D8u;
    SET_GPR_U32(ctx, 31, 0x1764E0u);
    ctx->pc = 0x1764DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1764D8u;
    // 0x1764dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176418u, 0x1764D8u, 0x1764E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1764E0u;
label_1764e0:
    // 0x1764e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1764e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1764e4:
    // 0x1764e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1764e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1764e8:
    // 0x1764e8: 0x3e00008  jr          $ra
label_1764ec:
    if (ctx->pc == 0x1764ECu) {
        ctx->pc = 0x1764ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764E8u;
        // 0x1764ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1764F0u;
        goto label_1764f0;
    }
    ctx->pc = 0x1764E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1764ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764E8u;
        // 0x1764ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1764E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1764F0u;
label_1764f0:
    // 0x1764f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1764f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1764f4:
    // 0x1764f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1764f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1764f8:
    // 0x1764f8: 0x8c8300b4  lw          $v1, 0xB4($a0)
    ctx->pc = 0x1764f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_1764fc:
    // 0x1764fc: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1764fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_176500:
    // 0x176500: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_176504:
    if (ctx->pc == 0x176504u) {
        ctx->pc = 0x176504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176500u;
        // 0x176504: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176508u;
        goto label_176508;
    }
    ctx->pc = 0x176500u;
    {
        const bool branch_taken_0x176500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176500u;
        // 0x176504: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176500) {
            ctx->pc = 0x1766A8u;
            goto label_1766a8;
        }
    }
    ctx->pc = 0x176508u;
label_176508:
    // 0x176508: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_17650c:
    // 0x17650c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17650cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_176510:
    // 0x176510: 0x2442f610  addiu       $v0, $v0, -0x9F0
    ctx->pc = 0x176510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964752));
label_176514:
    // 0x176514: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x176514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_176518:
    // 0x176518: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x176518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17651c:
    // 0x17651c: 0x800008  jr          $a0
label_176520:
    if (ctx->pc == 0x176520u) {
        ctx->pc = 0x176524u;
        goto label_176524;
    }
    ctx->pc = 0x17651Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176524u: goto label_176524;
            case 0x176534u: goto label_176534;
            case 0x176544u: goto label_176544;
            case 0x176554u: goto label_176554;
            case 0x176564u: goto label_176564;
            case 0x176574u: goto label_176574;
            case 0x176598u: goto label_176598;
            case 0x1765A8u: goto label_1765a8;
            case 0x1765B8u: goto label_1765b8;
            case 0x1765C8u: goto label_1765c8;
            case 0x1765F4u: goto label_1765f4;
            case 0x176610u: goto label_176610;
            case 0x176620u: goto label_176620;
            case 0x176644u: goto label_176644;
            case 0x176668u: goto label_176668;
            case 0x17668Cu: goto label_17668c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17651Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x176524u;
label_176524:
    // 0x176524: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_176528:
    // 0x176528: 0x2443f540  addiu       $v1, $v0, -0xAC0
    ctx->pc = 0x176528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964544));
label_17652c:
    // 0x17652c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_176530:
    if (ctx->pc == 0x176530u) {
        ctx->pc = 0x176530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17652Cu;
        // 0x176530: 0x8c44f540  lw          $a0, -0xAC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176534u;
        goto label_176534;
    }
    ctx->pc = 0x17652Cu;
    {
        const bool branch_taken_0x17652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17652Cu;
        // 0x176530: 0x8c44f540  lw          $a0, -0xAC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17652c) {
            ctx->pc = 0x176698u;
            goto label_176698;
        }
    }
    ctx->pc = 0x176534u;
label_176534:
    // 0x176534: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_176538:
    // 0x176538: 0x2443f548  addiu       $v1, $v0, -0xAB8
    ctx->pc = 0x176538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964552));
label_17653c:
    // 0x17653c: 0x10000056  b           . + 4 + (0x56 << 2)
label_176540:
    if (ctx->pc == 0x176540u) {
        ctx->pc = 0x176540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17653Cu;
        // 0x176540: 0x8c44f548  lw          $a0, -0xAB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176544u;
        goto label_176544;
    }
    ctx->pc = 0x17653Cu;
    {
        const bool branch_taken_0x17653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17653Cu;
        // 0x176540: 0x8c44f548  lw          $a0, -0xAB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17653c) {
            ctx->pc = 0x176698u;
            goto label_176698;
        }
    }
    ctx->pc = 0x176544u;
label_176544:
    // 0x176544: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_176548:
    // 0x176548: 0x2443f550  addiu       $v1, $v0, -0xAB0
    ctx->pc = 0x176548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964560));
label_17654c:
    // 0x17654c: 0x1000000c  b           . + 4 + (0xC << 2)
label_176550:
    if (ctx->pc == 0x176550u) {
        ctx->pc = 0x176550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17654Cu;
        // 0x176550: 0x8c44f550  lw          $a0, -0xAB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176554u;
        goto label_176554;
    }
    ctx->pc = 0x17654Cu;
    {
        const bool branch_taken_0x17654c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17654Cu;
        // 0x176550: 0x8c44f550  lw          $a0, -0xAB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964560)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17654c) {
            ctx->pc = 0x176580u;
            goto label_176580;
        }
    }
    ctx->pc = 0x176554u;
label_176554:
    // 0x176554: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_176558:
    // 0x176558: 0x2443f558  addiu       $v1, $v0, -0xAA8
    ctx->pc = 0x176558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964568));
label_17655c:
    // 0x17655c: 0x10000008  b           . + 4 + (0x8 << 2)
label_176560:
    if (ctx->pc == 0x176560u) {
        ctx->pc = 0x176560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17655Cu;
        // 0x176560: 0x8c44f558  lw          $a0, -0xAA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176564u;
        goto label_176564;
    }
    ctx->pc = 0x17655Cu;
    {
        const bool branch_taken_0x17655c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17655Cu;
        // 0x176560: 0x8c44f558  lw          $a0, -0xAA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17655c) {
            ctx->pc = 0x176580u;
            goto label_176580;
        }
    }
    ctx->pc = 0x176564u;
label_176564:
    // 0x176564: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_176568:
    // 0x176568: 0x2443f560  addiu       $v1, $v0, -0xAA0
    ctx->pc = 0x176568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964576));
label_17656c:
    // 0x17656c: 0x10000024  b           . + 4 + (0x24 << 2)
label_176570:
    if (ctx->pc == 0x176570u) {
        ctx->pc = 0x176570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17656Cu;
        // 0x176570: 0x8c44f560  lw          $a0, -0xAA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176574u;
        goto label_176574;
    }
    ctx->pc = 0x17656Cu;
    {
        const bool branch_taken_0x17656c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17656Cu;
        // 0x176570: 0x8c44f560  lw          $a0, -0xAA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17656c) {
            ctx->pc = 0x176600u;
            goto label_176600;
        }
    }
    ctx->pc = 0x176574u;
label_176574:
    // 0x176574: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_176578:
    // 0x176578: 0x2443f568  addiu       $v1, $v0, -0xA98
    ctx->pc = 0x176578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964584));
label_17657c:
    // 0x17657c: 0x8c44f568  lw          $a0, -0xA98($v0)
    ctx->pc = 0x17657cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964584)));
label_176580:
    // 0x176580: 0x90650006  lbu         $a1, 0x6($v1)
    ctx->pc = 0x176580u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
label_176584:
    // 0x176584: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x176584u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_176588:
    // 0x176588: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x176588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_17658c:
    // 0x17658c: 0xa7a20004  sh          $v0, 0x4($sp)
    ctx->pc = 0x17658cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 2));
label_176590:
    // 0x176590: 0x10000048  b           . + 4 + (0x48 << 2)
label_176594:
    if (ctx->pc == 0x176594u) {
        ctx->pc = 0x176594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176590u;
        // 0x176594: 0xa3a50006  sb          $a1, 0x6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176598u;
        goto label_176598;
    }
    ctx->pc = 0x176590u;
    {
        const bool branch_taken_0x176590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176590u;
        // 0x176594: 0xa3a50006  sb          $a1, 0x6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176590) {
            ctx->pc = 0x1766B4u;
            goto label_1766b4;
        }
    }
    ctx->pc = 0x176598u;
label_176598:
    // 0x176598: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_17659c:
    // 0x17659c: 0x2443f570  addiu       $v1, $v0, -0xA90
    ctx->pc = 0x17659cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964592));
label_1765a0:
    // 0x1765a0: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1765a4:
    if (ctx->pc == 0x1765A4u) {
        ctx->pc = 0x1765A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765A0u;
        // 0x1765a4: 0x8c44f570  lw          $a0, -0xA90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964592)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1765A8u;
        goto label_1765a8;
    }
    ctx->pc = 0x1765A0u;
    {
        const bool branch_taken_0x1765a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765A0u;
        // 0x1765a4: 0x8c44f570  lw          $a0, -0xA90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765a0) {
            ctx->pc = 0x176698u;
            goto label_176698;
        }
    }
    ctx->pc = 0x1765A8u;
label_1765a8:
    // 0x1765a8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1765a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_1765ac:
    // 0x1765ac: 0x2443f578  addiu       $v1, $v0, -0xA88
    ctx->pc = 0x1765acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964600));
label_1765b0:
    // 0x1765b0: 0x10000030  b           . + 4 + (0x30 << 2)
label_1765b4:
    if (ctx->pc == 0x1765B4u) {
        ctx->pc = 0x1765B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765B0u;
        // 0x1765b4: 0xdc44f578  ld          $a0, -0xA88($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1765B8u;
        goto label_1765b8;
    }
    ctx->pc = 0x1765B0u;
    {
        const bool branch_taken_0x1765b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765B0u;
        // 0x1765b4: 0xdc44f578  ld          $a0, -0xA88($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765b0) {
            ctx->pc = 0x176674u;
            goto label_176674;
        }
    }
    ctx->pc = 0x1765B8u;
label_1765b8:
    // 0x1765b8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1765b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_1765bc:
    // 0x1765bc: 0x2443f588  addiu       $v1, $v0, -0xA78
    ctx->pc = 0x1765bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964616));
label_1765c0:
    // 0x1765c0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1765c4:
    if (ctx->pc == 0x1765C4u) {
        ctx->pc = 0x1765C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765C0u;
        // 0x1765c4: 0xdc44f588  ld          $a0, -0xA78($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1765C8u;
        goto label_1765c8;
    }
    ctx->pc = 0x1765C0u;
    {
        const bool branch_taken_0x1765c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765C0u;
        // 0x1765c4: 0xdc44f588  ld          $a0, -0xA78($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765c0) {
            ctx->pc = 0x17662Cu;
            goto label_17662c;
        }
    }
    ctx->pc = 0x1765C8u;
label_1765c8:
    // 0x1765c8: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1765c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_1765cc:
    // 0x1765cc: 0x2462f598  addiu       $v0, $v1, -0xA68
    ctx->pc = 0x1765ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964632));
label_1765d0:
    // 0x1765d0: 0xdc65f598  ld          $a1, -0xA68($v1)
    ctx->pc = 0x1765d0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294964632)));
label_1765d4:
    // 0x1765d4: 0x90460014  lbu         $a2, 0x14($v0)
    ctx->pc = 0x1765d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
label_1765d8:
    // 0x1765d8: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x1765d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_1765dc:
    // 0x1765dc: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1765dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1765e0:
    // 0x1765e0: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x1765e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_1765e4:
    // 0x1765e4: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1765e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1765e8:
    // 0x1765e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1765e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1765ec:
    // 0x1765ec: 0x10000031  b           . + 4 + (0x31 << 2)
label_1765f0:
    if (ctx->pc == 0x1765F0u) {
        ctx->pc = 0x1765F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765ECu;
        // 0x1765f0: 0xa3a60014  sb          $a2, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1765F4u;
        goto label_1765f4;
    }
    ctx->pc = 0x1765ECu;
    {
        const bool branch_taken_0x1765ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765ECu;
        // 0x1765f0: 0xa3a60014  sb          $a2, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765ec) {
            ctx->pc = 0x1766B4u;
            goto label_1766b4;
        }
    }
    ctx->pc = 0x1765F4u;
label_1765f4:
    // 0x1765f4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1765f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_1765f8:
    // 0x1765f8: 0x2443f5b0  addiu       $v1, $v0, -0xA50
    ctx->pc = 0x1765f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964656));
label_1765fc:
    // 0x1765fc: 0x8c44f5b0  lw          $a0, -0xA50($v0)
    ctx->pc = 0x1765fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964656)));
label_176600:
    // 0x176600: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x176600u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_176604:
    // 0x176604: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x176604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_176608:
    // 0x176608: 0x1000002a  b           . + 4 + (0x2A << 2)
label_17660c:
    if (ctx->pc == 0x17660Cu) {
        ctx->pc = 0x17660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176608u;
        // 0x17660c: 0xa7a50004  sh          $a1, 0x4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176610u;
        goto label_176610;
    }
    ctx->pc = 0x176608u;
    {
        const bool branch_taken_0x176608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176608u;
        // 0x17660c: 0xa7a50004  sh          $a1, 0x4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176608) {
            ctx->pc = 0x1766B4u;
            goto label_1766b4;
        }
    }
    ctx->pc = 0x176610u;
label_176610:
    // 0x176610: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_176614:
    // 0x176614: 0x2443f5b8  addiu       $v1, $v0, -0xA48
    ctx->pc = 0x176614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964664));
label_176618:
    // 0x176618: 0x1000001f  b           . + 4 + (0x1F << 2)
label_17661c:
    if (ctx->pc == 0x17661Cu) {
        ctx->pc = 0x17661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176618u;
        // 0x17661c: 0x8c44f5b8  lw          $a0, -0xA48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176620u;
        goto label_176620;
    }
    ctx->pc = 0x176618u;
    {
        const bool branch_taken_0x176618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176618u;
        // 0x17661c: 0x8c44f5b8  lw          $a0, -0xA48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176618) {
            ctx->pc = 0x176698u;
            goto label_176698;
        }
    }
    ctx->pc = 0x176620u;
label_176620:
    // 0x176620: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_176624:
    // 0x176624: 0x2443f5c0  addiu       $v1, $v0, -0xA40
    ctx->pc = 0x176624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964672));
label_176628:
    // 0x176628: 0xdc44f5c0  ld          $a0, -0xA40($v0)
    ctx->pc = 0x176628u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964672)));
label_17662c:
    // 0x17662c: 0x9065000a  lbu         $a1, 0xA($v1)
    ctx->pc = 0x17662cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
label_176630:
    // 0x176630: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x176630u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_176634:
    // 0x176634: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x176634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_176638:
    // 0x176638: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x176638u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
label_17663c:
    // 0x17663c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_176640:
    if (ctx->pc == 0x176640u) {
        ctx->pc = 0x176640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17663Cu;
        // 0x176640: 0xa3a5000a  sb          $a1, 0xA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176644u;
        goto label_176644;
    }
    ctx->pc = 0x17663Cu;
    {
        const bool branch_taken_0x17663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17663Cu;
        // 0x176640: 0xa3a5000a  sb          $a1, 0xA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17663c) {
            ctx->pc = 0x1766B4u;
            goto label_1766b4;
        }
    }
    ctx->pc = 0x176644u;
label_176644:
    // 0x176644: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_176648:
    // 0x176648: 0x2443f5d0  addiu       $v1, $v0, -0xA30
    ctx->pc = 0x176648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964688));
label_17664c:
    // 0x17664c: 0xdc44f5d0  ld          $a0, -0xA30($v0)
    ctx->pc = 0x17664cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964688)));
label_176650:
    // 0x176650: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x176650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_176654:
    // 0x176654: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x176654u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_176658:
    // 0x176658: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x176658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_17665c:
    // 0x17665c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x17665cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_176660:
    // 0x176660: 0x10000014  b           . + 4 + (0x14 << 2)
label_176664:
    if (ctx->pc == 0x176664u) {
        ctx->pc = 0x176664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176660u;
        // 0x176664: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176668u;
        goto label_176668;
    }
    ctx->pc = 0x176660u;
    {
        const bool branch_taken_0x176660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176660u;
        // 0x176664: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176660) {
            ctx->pc = 0x1766B4u;
            goto label_1766b4;
        }
    }
    ctx->pc = 0x176668u;
label_176668:
    // 0x176668: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x176668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_17666c:
    // 0x17666c: 0x2443f5e8  addiu       $v1, $v0, -0xA18
    ctx->pc = 0x17666cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964712));
label_176670:
    // 0x176670: 0xdc44f5e8  ld          $a0, -0xA18($v0)
    ctx->pc = 0x176670u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964712)));
label_176674:
    // 0x176674: 0x9065000c  lbu         $a1, 0xC($v1)
    ctx->pc = 0x176674u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
label_176678:
    // 0x176678: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x176678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_17667c:
    // 0x17667c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x17667cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
label_176680:
    // 0x176680: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x176680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_176684:
    // 0x176684: 0x1000000b  b           . + 4 + (0xB << 2)
label_176688:
    if (ctx->pc == 0x176688u) {
        ctx->pc = 0x176688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176684u;
        // 0x176688: 0xa3a5000c  sb          $a1, 0xC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17668Cu;
        goto label_17668c;
    }
    ctx->pc = 0x176684u;
    {
        const bool branch_taken_0x176684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176684u;
        // 0x176688: 0xa3a5000c  sb          $a1, 0xC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176684) {
            ctx->pc = 0x1766B4u;
            goto label_1766b4;
        }
    }
    ctx->pc = 0x17668Cu;
label_17668c:
    // 0x17668c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x17668cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_176690:
    // 0x176690: 0x2443f5f8  addiu       $v1, $v0, -0xA08
    ctx->pc = 0x176690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964728));
label_176694:
    // 0x176694: 0x8c44f5f8  lw          $a0, -0xA08($v0)
    ctx->pc = 0x176694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964728)));
label_176698:
    // 0x176698: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x176698u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_17669c:
    // 0x17669c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17669cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1766a0:
    // 0x1766a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1766a4:
    if (ctx->pc == 0x1766A4u) {
        ctx->pc = 0x1766A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766A0u;
        // 0x1766a4: 0xa3a50004  sb          $a1, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1766A8u;
        goto label_1766a8;
    }
    ctx->pc = 0x1766A0u;
    {
        const bool branch_taken_0x1766a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1766A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766A0u;
        // 0x1766a4: 0xa3a50004  sb          $a1, 0x4($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1766a0) {
            ctx->pc = 0x1766B4u;
            goto label_1766b4;
        }
    }
    ctx->pc = 0x1766A8u;
label_1766a8:
    // 0x1766a8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1766a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_1766ac:
    // 0x1766ac: 0xdc43f600  ld          $v1, -0xA00($v0)
    ctx->pc = 0x1766acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294964736)));
label_1766b0:
    // 0x1766b0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1766b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1766b4:
    // 0x1766b4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1766b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1766b8:
    // 0x1766b8: 0xc0efbe8  jal         func_3BEFA0
label_1766bc:
    if (ctx->pc == 0x1766BCu) {
        ctx->pc = 0x1766BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766B8u;
        // 0x1766bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1766C0u;
        goto label_1766c0;
    }
    ctx->pc = 0x1766B8u;
    SET_GPR_U32(ctx, 31, 0x1766C0u);
    ctx->pc = 0x1766BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1766B8u;
    // 0x1766bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x1766B8u, 0x1766C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1766C0u;
label_1766c0:
    // 0x1766c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1766c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1766c4:
    // 0x1766c4: 0x3e00008  jr          $ra
label_1766c8:
    if (ctx->pc == 0x1766C8u) {
        ctx->pc = 0x1766C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766C4u;
        // 0x1766c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1766CCu;
        goto label_1766cc;
    }
    ctx->pc = 0x1766C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1766C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766C4u;
        // 0x1766c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1766C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1766CCu;
label_1766cc:
    // 0x1766cc: 0x0  nop
    ctx->pc = 0x1766ccu;
    // NOP
    ctx->pc = 0x1766d0u;
}
