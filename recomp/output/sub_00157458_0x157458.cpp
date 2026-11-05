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

// Function: sub_00157458
// Address: 0x157458 - 0x157578
void sub_00157458_0x157458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157458_0x157458");
#endif

    switch (ctx->pc) {
        case 0x157458u: goto label_157458;
        case 0x15745cu: goto label_15745c;
        case 0x157460u: goto label_157460;
        case 0x157464u: goto label_157464;
        case 0x157468u: goto label_157468;
        case 0x15746cu: goto label_15746c;
        case 0x157470u: goto label_157470;
        case 0x157474u: goto label_157474;
        case 0x157478u: goto label_157478;
        case 0x15747cu: goto label_15747c;
        case 0x157480u: goto label_157480;
        case 0x157484u: goto label_157484;
        case 0x157488u: goto label_157488;
        case 0x15748cu: goto label_15748c;
        case 0x157490u: goto label_157490;
        case 0x157494u: goto label_157494;
        case 0x157498u: goto label_157498;
        case 0x15749cu: goto label_15749c;
        case 0x1574a0u: goto label_1574a0;
        case 0x1574a4u: goto label_1574a4;
        case 0x1574a8u: goto label_1574a8;
        case 0x1574acu: goto label_1574ac;
        case 0x1574b0u: goto label_1574b0;
        case 0x1574b4u: goto label_1574b4;
        case 0x1574b8u: goto label_1574b8;
        case 0x1574bcu: goto label_1574bc;
        case 0x1574c0u: goto label_1574c0;
        case 0x1574c4u: goto label_1574c4;
        case 0x1574c8u: goto label_1574c8;
        case 0x1574ccu: goto label_1574cc;
        case 0x1574d0u: goto label_1574d0;
        case 0x1574d4u: goto label_1574d4;
        case 0x1574d8u: goto label_1574d8;
        case 0x1574dcu: goto label_1574dc;
        case 0x1574e0u: goto label_1574e0;
        case 0x1574e4u: goto label_1574e4;
        case 0x1574e8u: goto label_1574e8;
        case 0x1574ecu: goto label_1574ec;
        case 0x1574f0u: goto label_1574f0;
        case 0x1574f4u: goto label_1574f4;
        case 0x1574f8u: goto label_1574f8;
        case 0x1574fcu: goto label_1574fc;
        case 0x157500u: goto label_157500;
        case 0x157504u: goto label_157504;
        case 0x157508u: goto label_157508;
        case 0x15750cu: goto label_15750c;
        case 0x157510u: goto label_157510;
        case 0x157514u: goto label_157514;
        case 0x157518u: goto label_157518;
        case 0x15751cu: goto label_15751c;
        case 0x157520u: goto label_157520;
        case 0x157524u: goto label_157524;
        case 0x157528u: goto label_157528;
        case 0x15752cu: goto label_15752c;
        case 0x157530u: goto label_157530;
        case 0x157534u: goto label_157534;
        case 0x157538u: goto label_157538;
        case 0x15753cu: goto label_15753c;
        case 0x157540u: goto label_157540;
        case 0x157544u: goto label_157544;
        case 0x157548u: goto label_157548;
        case 0x15754cu: goto label_15754c;
        case 0x157550u: goto label_157550;
        case 0x157554u: goto label_157554;
        case 0x157558u: goto label_157558;
        case 0x15755cu: goto label_15755c;
        case 0x157560u: goto label_157560;
        case 0x157564u: goto label_157564;
        case 0x157568u: goto label_157568;
        case 0x15756cu: goto label_15756c;
        case 0x157570u: goto label_157570;
        case 0x157574u: goto label_157574;
        default: break;
    }

    ctx->pc = 0x157458u;

label_157458:
    // 0x157458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x157458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15745c:
    // 0x15745c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_157460:
    // 0x157460: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x157460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_157464:
    // 0x157464: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x157464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_157468:
    // 0x157468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15746c:
    // 0x15746c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15746cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_157470:
    // 0x157470: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x157470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_157474:
    // 0x157474: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x157474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_157478:
    // 0x157478: 0xc04f2d0  jal         func_13CB40
label_15747c:
    if (ctx->pc == 0x15747Cu) {
        ctx->pc = 0x15747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157478u;
        // 0x15747c: 0x30b300ff  andi        $s3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x157480u;
        goto label_157480;
    }
    ctx->pc = 0x157478u;
    SET_GPR_U32(ctx, 31, 0x157480u);
    ctx->pc = 0x15747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157478u;
    // 0x15747c: 0x30b300ff  andi        $s3, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CB40u, 0x157478u, 0x157480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157480u;
label_157480:
    // 0x157480: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x157480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_157484:
    // 0x157484: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x157484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_157488:
    // 0x157488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15748c:
    // 0x15748c: 0xc04f33e  jal         func_13CCF8
label_157490:
    if (ctx->pc == 0x157490u) {
        ctx->pc = 0x157490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15748Cu;
        // 0x157490: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157494u;
        goto label_157494;
    }
    ctx->pc = 0x15748Cu;
    SET_GPR_U32(ctx, 31, 0x157494u);
    ctx->pc = 0x157490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15748Cu;
    // 0x157490: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15748Cu, 0x157494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157494u;
label_157494:
    // 0x157494: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x157494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_157498:
    // 0x157498: 0xc04f0b6  jal         func_13C2D8
label_15749c:
    if (ctx->pc == 0x15749Cu) {
        ctx->pc = 0x15749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157498u;
        // 0x15749c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574A0u;
        goto label_1574a0;
    }
    ctx->pc = 0x157498u;
    SET_GPR_U32(ctx, 31, 0x1574A0u);
    ctx->pc = 0x15749Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157498u;
    // 0x15749c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x157498u, 0x1574A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1574A0u;
label_1574a0:
    // 0x1574a0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1574a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1574a4:
    // 0x1574a4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1574a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_1574a8:
    // 0x1574a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1574a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1574ac:
    // 0x1574ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1574acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1574b0:
    // 0x1574b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1574b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1574b4:
    // 0x1574b4: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x1574b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1574b8:
    // 0x1574b8: 0xc055d60  jal         func_157580
label_1574bc:
    if (ctx->pc == 0x1574BCu) {
        ctx->pc = 0x1574BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574B8u;
        // 0x1574bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574C0u;
        goto label_1574c0;
    }
    ctx->pc = 0x1574B8u;
    SET_GPR_U32(ctx, 31, 0x1574C0u);
    ctx->pc = 0x1574BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1574B8u;
    // 0x1574bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157580u, 0x1574B8u, 0x1574C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1574C0u;
label_1574c0:
    // 0x1574c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1574c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1574c4:
    // 0x1574c4: 0xc045fea  jal         func_117FA8
label_1574c8:
    if (ctx->pc == 0x1574C8u) {
        ctx->pc = 0x1574C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574C4u;
        // 0x1574c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574CCu;
        goto label_1574cc;
    }
    ctx->pc = 0x1574C4u;
    SET_GPR_U32(ctx, 31, 0x1574CCu);
    ctx->pc = 0x1574C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1574C4u;
    // 0x1574c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x1574C4u, 0x1574CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1574CCu;
label_1574cc:
    // 0x1574cc: 0x8e2502e0  lw          $a1, 0x2E0($s1)
    ctx->pc = 0x1574ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
label_1574d0:
    // 0x1574d0: 0xc0461e8  jal         func_1187A0
label_1574d4:
    if (ctx->pc == 0x1574D4u) {
        ctx->pc = 0x1574D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574D0u;
        // 0x1574d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574D8u;
        goto label_1574d8;
    }
    ctx->pc = 0x1574D0u;
    SET_GPR_U32(ctx, 31, 0x1574D8u);
    ctx->pc = 0x1574D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1574D0u;
    // 0x1574d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x1574D0u, 0x1574D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1574D8u;
label_1574d8:
    // 0x1574d8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1574d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1574dc:
    // 0x1574dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1574dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1574e0:
    // 0x1574e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1574e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1574e4:
    // 0x1574e4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1574e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1574e8:
    // 0x1574e8: 0x40f809  jalr        $v0
label_1574ec:
    if (ctx->pc == 0x1574ECu) {
        ctx->pc = 0x1574ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574E8u;
        // 0x1574ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1574F0u;
        goto label_1574f0;
    }
    ctx->pc = 0x1574E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1574F0u);
        ctx->pc = 0x1574ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574E8u;
        // 0x1574ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1574E8u, 0x1574F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1574F0u;
label_1574f0:
    // 0x1574f0: 0xc62c02e4  lwc1        $f12, 0x2E4($s1)
    ctx->pc = 0x1574f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1574f4:
    // 0x1574f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1574f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1574f8:
    // 0x1574f8: 0x0  nop
    ctx->pc = 0x1574f8u;
    // NOP
label_1574fc:
    // 0x1574fc: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1574fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_157500:
    // 0x157500: 0x0  nop
    ctx->pc = 0x157500u;
    // NOP
label_157504:
    // 0x157504: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_157508:
    if (ctx->pc == 0x157508u) {
        ctx->pc = 0x157508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157504u;
        // 0x157508: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15750Cu;
        goto label_15750c;
    }
    ctx->pc = 0x157504u;
    {
        const bool branch_taken_0x157504 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157504) {
            ctx->pc = 0x157508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157504u;
            // 0x157508: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157518u;
            goto label_157518;
        }
    }
    ctx->pc = 0x15750Cu;
label_15750c:
    // 0x15750c: 0xc04fccc  jal         func_13F330
label_157510:
    if (ctx->pc == 0x157510u) {
        ctx->pc = 0x157510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15750Cu;
        // 0x157510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157514u;
        goto label_157514;
    }
    ctx->pc = 0x15750Cu;
    SET_GPR_U32(ctx, 31, 0x157514u);
    ctx->pc = 0x157510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15750Cu;
    // 0x157510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F330u, 0x15750Cu, 0x157514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157514u;
label_157514:
    // 0x157514: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x157514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_157518:
    // 0x157518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15751c:
    // 0x15751c: 0xc04d6fe  jal         func_135BF8
label_157520:
    if (ctx->pc == 0x157520u) {
        ctx->pc = 0x157520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15751Cu;
        // 0x157520: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157524u;
        goto label_157524;
    }
    ctx->pc = 0x15751Cu;
    SET_GPR_U32(ctx, 31, 0x157524u);
    ctx->pc = 0x157520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15751Cu;
    // 0x157520: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BF8u, 0x15751Cu, 0x157524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157524u;
label_157524:
    // 0x157524: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x157524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_157528:
    // 0x157528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15752c:
    // 0x15752c: 0xc04f124  jal         func_13C490
label_157530:
    if (ctx->pc == 0x157530u) {
        ctx->pc = 0x157530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15752Cu;
        // 0x157530: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157534u;
        goto label_157534;
    }
    ctx->pc = 0x15752Cu;
    SET_GPR_U32(ctx, 31, 0x157534u);
    ctx->pc = 0x157530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15752Cu;
    // 0x157530: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C490u, 0x15752Cu, 0x157534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157534u;
label_157534:
    // 0x157534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157538:
    // 0x157538: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15753c:
    // 0x15753c: 0xc04f10c  jal         func_13C430
label_157540:
    if (ctx->pc == 0x157540u) {
        ctx->pc = 0x157540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15753Cu;
        // 0x157540: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157544u;
        goto label_157544;
    }
    ctx->pc = 0x15753Cu;
    SET_GPR_U32(ctx, 31, 0x157544u);
    ctx->pc = 0x157540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15753Cu;
    // 0x157540: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x15753Cu, 0x157544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157544u;
label_157544:
    // 0x157544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_157548:
    // 0x157548: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x157548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15754c:
    // 0x15754c: 0xc04f118  jal         func_13C460
label_157550:
    if (ctx->pc == 0x157550u) {
        ctx->pc = 0x157550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15754Cu;
        // 0x157550: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157554u;
        goto label_157554;
    }
    ctx->pc = 0x15754Cu;
    SET_GPR_U32(ctx, 31, 0x157554u);
    ctx->pc = 0x157550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15754Cu;
    // 0x157550: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x15754Cu, 0x157554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157554u;
label_157554:
    // 0x157554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157558:
    // 0x157558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15755c:
    // 0x15755c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15755cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_157560:
    // 0x157560: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x157560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_157564:
    // 0x157564: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x157564u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_157568:
    // 0x157568: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x157568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15756c:
    // 0x15756c: 0x3e00008  jr          $ra
label_157570:
    if (ctx->pc == 0x157570u) {
        ctx->pc = 0x157570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15756Cu;
        // 0x157570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157574u;
        goto label_157574;
    }
    ctx->pc = 0x15756Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15756Cu;
        // 0x157570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15756Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157574u;
label_157574:
    // 0x157574: 0x0  nop
    ctx->pc = 0x157574u;
    // NOP
    ctx->pc = 0x157578u;
}
