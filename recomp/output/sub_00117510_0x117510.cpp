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

// Function: sub_00117510
// Address: 0x117510 - 0x1177c0
void sub_00117510_0x117510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117510_0x117510");
#endif

    switch (ctx->pc) {
        case 0x117534u: goto label_117534;
        case 0x117558u: goto label_117558;
        case 0x11756cu: goto label_11756c;
        case 0x11757cu: goto label_11757c;
        case 0x1175b0u: goto label_1175b0;
        case 0x1175c0u: goto label_1175c0;
        case 0x1175c8u: goto label_1175c8;
        case 0x11760cu: goto label_11760c;
        case 0x11761cu: goto label_11761c;
        case 0x11762cu: goto label_11762c;
        case 0x11763cu: goto label_11763c;
        case 0x1176bcu: goto label_1176bc;
        case 0x1176e8u: goto label_1176e8;
        case 0x1176f4u: goto label_1176f4;
        case 0x117768u: goto label_117768;
        case 0x117794u: goto label_117794;
        case 0x1177a0u: goto label_1177a0;
        default: break;
    }

    ctx->pc = 0x117510u;

    // 0x117510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x117510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x117514: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x117514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x117518: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x117518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x11751c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11751cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117520: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x117520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x117524: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x117524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x117528: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x117528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x11752c: 0xc0c15a8  jal         func_3056A0
    ctx->pc = 0x11752Cu;
    SET_GPR_U32(ctx, 31, 0x117534u);
    ctx->pc = 0x117530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11752Cu;
    // 0x117530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3056A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3056A0u, 0x11752Cu, 0x117534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117534u;
label_117534:
    // 0x117534: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117538: 0x12200099  beqz        $s1, . + 4 + (0x99 << 2)
    ctx->pc = 0x117538u;
    {
        const bool branch_taken_0x117538 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117538u;
        // 0x11753c: 0x119080  sll         $s2, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117538) {
            ctx->pc = 0x1177A0u;
            goto label_1177a0;
        }
    }
    ctx->pc = 0x117540u;
    // 0x117540: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x117540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x117544: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x117544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x117548: 0x54600096  bnel        $v1, $zero, . + 4 + (0x96 << 2)
    ctx->pc = 0x117548u;
    {
        const bool branch_taken_0x117548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x117548) {
            ctx->pc = 0x11754Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117548u;
            // 0x11754c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1177A4u;
            goto label_1177a4;
        }
    }
    ctx->pc = 0x117550u;
    // 0x117550: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x117550u;
    SET_GPR_U32(ctx, 31, 0x117558u);
    ctx->pc = 0x117554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117550u;
    // 0x117554: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x117550u, 0x117558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117558u;
label_117558:
    // 0x117558: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x117558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x11755c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11755Cu;
    {
        const bool branch_taken_0x11755c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x117560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11755Cu;
        // 0x117560: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11755c) {
            ctx->pc = 0x117574u;
            goto label_117574;
        }
    }
    ctx->pc = 0x117564u;
    // 0x117564: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x117564u;
    SET_GPR_U32(ctx, 31, 0x11756Cu);
    ctx->pc = 0x117568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117564u;
    // 0x117568: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x117564u, 0x11756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11756Cu;
label_11756c:
    // 0x11756c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x11756Cu;
    {
        const bool branch_taken_0x11756c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11756Cu;
        // 0x117570: 0xae020088  sw          $v0, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11756c) {
            ctx->pc = 0x1176E8u;
            goto label_1176e8;
        }
    }
    ctx->pc = 0x117574u;
label_117574:
    // 0x117574: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x117574u;
    SET_GPR_U32(ctx, 31, 0x11757Cu);
    ctx->pc = 0x117578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117574u;
    // 0x117578: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x117574u, 0x11757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11757Cu;
label_11757c:
    // 0x11757c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x11757Cu;
    {
        const bool branch_taken_0x11757c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11757Cu;
        // 0x117580: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11757c) {
            ctx->pc = 0x1176E8u;
            goto label_1176e8;
        }
    }
    ctx->pc = 0x117584u;
    // 0x117584: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x117584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x117588: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x117588u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11758c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x11758cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x117590: 0xac540058  sw          $s4, 0x58($v0)
    ctx->pc = 0x117590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 20));
    // 0x117594: 0x24729b10  addiu       $s2, $v1, -0x64F0
    ctx->pc = 0x117594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x117598: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x117598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x499B1Cu));
    // 0x11759c: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x11759Cu;
    {
        const bool branch_taken_0x11759c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1175A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11759Cu;
        // 0x1175a0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11759c) {
            ctx->pc = 0x1176E8u;
            goto label_1176e8;
        }
    }
    ctx->pc = 0x1175A4u;
    // 0x1175a4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1175a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1175a8: 0xc049696  jal         func_125A58
    ctx->pc = 0x1175A8u;
    SET_GPR_U32(ctx, 31, 0x1175B0u);
    ctx->pc = 0x1175ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175A8u;
    // 0x1175ac: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125A58u, 0x1175A8u, 0x1175B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175B0u;
label_1175b0:
    // 0x1175b0: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1175B0u;
    {
        const bool branch_taken_0x1175b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175B0u;
        // 0x1175b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175b0) {
            ctx->pc = 0x1176ECu;
            goto label_1176ec;
        }
    }
    ctx->pc = 0x1175B8u;
    // 0x1175b8: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1175B8u;
    SET_GPR_U32(ctx, 31, 0x1175C0u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1175B8u, 0x1175C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175C0u;
label_1175c0:
    // 0x1175c0: 0xc0821da  jal         func_208768
    ctx->pc = 0x1175C0u;
    SET_GPR_U32(ctx, 31, 0x1175C8u);
    ctx->pc = 0x1175C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1175C0u;
    // 0x1175c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208768u, 0x1175C0u, 0x1175C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1175C8u;
label_1175c8:
    // 0x1175c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1175c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1175cc: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1175CCu;
    {
        const bool branch_taken_0x1175cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1175cc) {
            ctx->pc = 0x11764Cu;
            goto label_11764c;
        }
    }
    ctx->pc = 0x1175D4u;
    // 0x1175d4: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x1175d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1175d8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1175d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1175dc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1175DCu;
    {
        const bool branch_taken_0x1175dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1175DCu;
        // 0x1175e0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175dc) {
            ctx->pc = 0x1176E8u;
            goto label_1176e8;
        }
    }
    ctx->pc = 0x1175E4u;
    // 0x1175e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1175e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1175e8: 0x2442b0d0  addiu       $v0, $v0, -0x4F30
    ctx->pc = 0x1175e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947024));
    // 0x1175ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1175ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1175f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1175f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1175f4: 0x800008  jr          $a0
    ctx->pc = 0x1175F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1175FCu: goto label_1175fc;
            case 0x11760Cu: goto label_11760c;
            case 0x11761Cu: goto label_11761c;
            case 0x11762Cu: goto label_11762c;
            case 0x11763Cu: goto label_11763c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1175F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1175FCu;
label_1175fc:
    // 0x1175fc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1175fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117600: 0x26649b10  addiu       $a0, $s3, -0x64F0
    ctx->pc = 0x117600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
    // 0x117604: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x117604u;
    {
        const bool branch_taken_0x117604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117604u;
        // 0x117608: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117604) {
            ctx->pc = 0x1176A4u;
            goto label_1176a4;
        }
    }
    ctx->pc = 0x11760Cu;
label_11760c:
    // 0x11760c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117610: 0x26649b10  addiu       $a0, $s3, -0x64F0
    ctx->pc = 0x117610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
    // 0x117614: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x117614u;
    {
        const bool branch_taken_0x117614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117614u;
        // 0x117618: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117614) {
            ctx->pc = 0x1176A4u;
            goto label_1176a4;
        }
    }
    ctx->pc = 0x11761Cu;
label_11761c:
    // 0x11761c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11761cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117620: 0x26649b10  addiu       $a0, $s3, -0x64F0
    ctx->pc = 0x117620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
    // 0x117624: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x117624u;
    {
        const bool branch_taken_0x117624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117624u;
        // 0x117628: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117624) {
            ctx->pc = 0x1176A4u;
            goto label_1176a4;
        }
    }
    ctx->pc = 0x11762Cu;
label_11762c:
    // 0x11762c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11762cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117630: 0x26649b10  addiu       $a0, $s3, -0x64F0
    ctx->pc = 0x117630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
    // 0x117634: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x117634u;
    {
        const bool branch_taken_0x117634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117634u;
        // 0x117638: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117634) {
            ctx->pc = 0x1176A4u;
            goto label_1176a4;
        }
    }
    ctx->pc = 0x11763Cu;
label_11763c:
    // 0x11763c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x11763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117640: 0x26649b10  addiu       $a0, $s3, -0x64F0
    ctx->pc = 0x117640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
    // 0x117644: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x117644u;
    {
        const bool branch_taken_0x117644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117644u;
        // 0x117648: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117644) {
            ctx->pc = 0x1176D0u;
            goto label_1176d0;
        }
    }
    ctx->pc = 0x11764Cu;
label_11764c:
    // 0x11764c: 0x1474002b  bne         $v1, $s4, . + 4 + (0x2B << 2)
    ctx->pc = 0x11764Cu;
    {
        const bool branch_taken_0x11764c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x117650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11764Cu;
        // 0x117650: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11764c) {
            ctx->pc = 0x1176FCu;
            goto label_1176fc;
        }
    }
    ctx->pc = 0x117654u;
    // 0x117654: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x117654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117658: 0x1222000f  beq         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x117658u;
    {
        const bool branch_taken_0x117658 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117658u;
        // 0x11765c: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117658) {
            ctx->pc = 0x117698u;
            goto label_117698;
        }
    }
    ctx->pc = 0x117660u;
    // 0x117660: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117660u;
    {
        const bool branch_taken_0x117660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117660u;
        // 0x117664: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117660) {
            ctx->pc = 0x117678u;
            goto label_117678;
        }
    }
    ctx->pc = 0x117668u;
    // 0x117668: 0x12340007  beq         $s1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x117668u;
    {
        const bool branch_taken_0x117668 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x11766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117668u;
        // 0x11766c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117668) {
            ctx->pc = 0x117688u;
            goto label_117688;
        }
    }
    ctx->pc = 0x117670u;
    // 0x117670: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x117670u;
    {
        const bool branch_taken_0x117670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117670) {
            ctx->pc = 0x1176ECu;
            goto label_1176ec;
        }
    }
    ctx->pc = 0x117678u;
label_117678:
    // 0x117678: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x117678u;
    {
        const bool branch_taken_0x117678 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117678u;
        // 0x11767c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117678) {
            ctx->pc = 0x1176C4u;
            goto label_1176c4;
        }
    }
    ctx->pc = 0x117680u;
    // 0x117680: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x117680u;
    {
        const bool branch_taken_0x117680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117680) {
            ctx->pc = 0x1176ECu;
            goto label_1176ec;
        }
    }
    ctx->pc = 0x117688u;
label_117688:
    // 0x117688: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x117688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11768c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117690: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x117690u;
    {
        const bool branch_taken_0x117690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117690u;
        // 0x117694: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117690) {
            ctx->pc = 0x1176A4u;
            goto label_1176a4;
        }
    }
    ctx->pc = 0x117698u;
label_117698:
    // 0x117698: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x117698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11769c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11769cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176a0: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1176a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1176a4:
    // 0x1176a4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1176a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1176a8: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1176a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1176ac: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1176acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1176b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1176b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1176b4: 0xc07f5fc  jal         func_1FD7F0
    ctx->pc = 0x1176B4u;
    SET_GPR_U32(ctx, 31, 0x1176BCu);
    ctx->pc = 0x1176B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176B4u;
    // 0x1176b8: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F0u, 0x1176B4u, 0x1176BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176BCu;
label_1176bc:
    // 0x1176bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1176BCu;
    {
        const bool branch_taken_0x1176bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1176C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176BCu;
        // 0x1176c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176bc) {
            ctx->pc = 0x1176ECu;
            goto label_1176ec;
        }
    }
    ctx->pc = 0x1176C4u;
label_1176c4:
    // 0x1176c4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1176c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1176c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1176c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176cc: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x1176ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1176d0:
    // 0x1176d0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1176d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1176d4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1176d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1176d8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1176d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1176dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1176dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1176e0: 0xc07f5fc  jal         func_1FD7F0
    ctx->pc = 0x1176E0u;
    SET_GPR_U32(ctx, 31, 0x1176E8u);
    ctx->pc = 0x1176E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176E0u;
    // 0x1176e4: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F0u, 0x1176E0u, 0x1176E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176E8u;
label_1176e8:
    // 0x1176e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1176e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1176ec:
    // 0x1176ec: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1176ECu;
    SET_GPR_U32(ctx, 31, 0x1176F4u);
    ctx->pc = 0x1176F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176ECu;
    // 0x1176f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1176ECu, 0x1176F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176F4u;
label_1176f4:
    // 0x1176f4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1176F4u;
    {
        const bool branch_taken_0x1176f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1176F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176F4u;
        // 0x1176f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176f4) {
            ctx->pc = 0x1177A4u;
            goto label_1177a4;
        }
    }
    ctx->pc = 0x1176FCu;
label_1176fc:
    // 0x1176fc: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1176FCu;
    {
        const bool branch_taken_0x1176fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x117700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176FCu;
        // 0x117700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176fc) {
            ctx->pc = 0x117798u;
            goto label_117798;
        }
    }
    ctx->pc = 0x117704u;
    // 0x117704: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x117704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117708: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x117708u;
    {
        const bool branch_taken_0x117708 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117708u;
        // 0x11770c: 0x2a220005  slti        $v0, $s1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117708) {
            ctx->pc = 0x117744u;
            goto label_117744;
        }
    }
    ctx->pc = 0x117710u;
    // 0x117710: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117710u;
    {
        const bool branch_taken_0x117710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117710u;
        // 0x117714: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117710) {
            ctx->pc = 0x117728u;
            goto label_117728;
        }
    }
    ctx->pc = 0x117718u;
    // 0x117718: 0x52340007  beql        $s1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x117718u;
    {
        const bool branch_taken_0x117718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x117718) {
            ctx->pc = 0x11771Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117718u;
            // 0x11771c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117738u;
            goto label_117738;
        }
    }
    ctx->pc = 0x117720u;
    // 0x117720: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x117720u;
    {
        const bool branch_taken_0x117720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117720) {
            ctx->pc = 0x117798u;
            goto label_117798;
        }
    }
    ctx->pc = 0x117728u;
label_117728:
    // 0x117728: 0x12220011  beq         $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x117728u;
    {
        const bool branch_taken_0x117728 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x11772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117728u;
        // 0x11772c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117728) {
            ctx->pc = 0x117770u;
            goto label_117770;
        }
    }
    ctx->pc = 0x117730u;
    // 0x117730: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x117730u;
    {
        const bool branch_taken_0x117730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117730) {
            ctx->pc = 0x117798u;
            goto label_117798;
        }
    }
    ctx->pc = 0x117738u;
label_117738:
    // 0x117738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11773c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11773Cu;
    {
        const bool branch_taken_0x11773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11773Cu;
        // 0x117740: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11773c) {
            ctx->pc = 0x117750u;
            goto label_117750;
        }
    }
    ctx->pc = 0x117744u;
label_117744:
    // 0x117744: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x117744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11774c: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x11774cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_117750:
    // 0x117750: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x117750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117754: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x117754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x117758: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x117758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11775c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11775cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117760: 0xc07f5fc  jal         func_1FD7F0
    ctx->pc = 0x117760u;
    SET_GPR_U32(ctx, 31, 0x117768u);
    ctx->pc = 0x117764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117760u;
    // 0x117764: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F0u, 0x117760u, 0x117768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117768u;
label_117768:
    // 0x117768: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x117768u;
    {
        const bool branch_taken_0x117768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117768u;
        // 0x11776c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117768) {
            ctx->pc = 0x117798u;
            goto label_117798;
        }
    }
    ctx->pc = 0x117770u;
label_117770:
    // 0x117770: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x117770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x117774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117778: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x117778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x11777c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x11777cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117780: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x117780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x117784: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x117784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117788: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x117788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11778c: 0xc07f5fc  jal         func_1FD7F0
    ctx->pc = 0x11778Cu;
    SET_GPR_U32(ctx, 31, 0x117794u);
    ctx->pc = 0x117790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11778Cu;
    // 0x117790: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F0u, 0x11778Cu, 0x117794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117794u;
label_117794:
    // 0x117794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x117794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_117798:
    // 0x117798: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x117798u;
    SET_GPR_U32(ctx, 31, 0x1177A0u);
    ctx->pc = 0x11779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117798u;
    // 0x11779c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x117798u, 0x1177A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177A0u;
label_1177a0:
    // 0x1177a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1177a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1177a4:
    // 0x1177a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1177a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1177a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1177a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1177ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1177acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1177b0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1177b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1177b4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1177b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1177b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1177B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1177BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177B8u;
        // 0x1177bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1177C0u;
}
