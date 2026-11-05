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

// Function: sub_001B8468
// Address: 0x1b8468 - 0x1b85f8
void sub_001B8468_0x1b8468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8468_0x1b8468");
#endif

    switch (ctx->pc) {
        case 0x1b84b4u: goto label_1b84b4;
        case 0x1b84dcu: goto label_1b84dc;
        case 0x1b84fcu: goto label_1b84fc;
        case 0x1b8504u: goto label_1b8504;
        case 0x1b8508u: goto label_1b8508;
        case 0x1b8514u: goto label_1b8514;
        case 0x1b8530u: goto label_1b8530;
        case 0x1b853cu: goto label_1b853c;
        case 0x1b8560u: goto label_1b8560;
        case 0x1b8570u: goto label_1b8570;
        case 0x1b8578u: goto label_1b8578;
        default: break;
    }

    ctx->pc = 0x1b8468u;

    // 0x1b8468: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b8468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b846c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b846cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b8470: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b8470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b8474: 0x24421360  addiu       $v0, $v0, 0x1360
    ctx->pc = 0x1b8474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4960));
    // 0x1b8478: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b8478u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b847c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b8480: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b8484: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b8484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b8488: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x1b8488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1b848c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b848cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b8490: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x1b8490u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b8494: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b8494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b8498: 0x26740060  addiu       $s4, $s3, 0x60
    ctx->pc = 0x1b8498u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1b849c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b84a0: 0x24150007  addiu       $s5, $zero, 0x7
    ctx->pc = 0x1b84a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b84a4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b84a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b84a8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1b84a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b84ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B84ACu;
    SET_GPR_U32(ctx, 31, 0x1B84B4u);
    ctx->pc = 0x1B84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84ACu;
    // 0x1b84b0: 0xae620428  sw          $v0, 0x428($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1064), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B84ACu, 0x1B84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84B4u;
label_1b84b4:
    // 0x1b84b4: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x1b84b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
    // 0x1b84b8: 0xae720010  sw          $s2, 0x10($s3)
    ctx->pc = 0x1b84b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 18));
    // 0x1b84bc: 0x26100f90  addiu       $s0, $s0, 0xF90
    ctx->pc = 0x1b84bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3984));
    // 0x1b84c0: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x1b84c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x1b84c4: 0xae700018  sw          $s0, 0x18($s3)
    ctx->pc = 0x1b84c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 16));
    // 0x1b84c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b84c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84cc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1b84ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1b84d0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1b84d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1b84d4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B84D4u;
    SET_GPR_U32(ctx, 31, 0x1B84DCu);
    ctx->pc = 0x1B84D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84D4u;
    // 0x1b84d8: 0xae600008  sw          $zero, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B84D4u, 0x1B84DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84DCu;
label_1b84dc:
    // 0x1b84dc: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x1b84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
    // 0x1b84e0: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x1b84e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1b84e4: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1b84e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1b84e8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1b84e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x1b84ec: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x1b84ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
    // 0x1b84f0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1b84f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1b84f4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B84F4u;
    SET_GPR_U32(ctx, 31, 0x1B84FCu);
    ctx->pc = 0x1B84F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84F4u;
    // 0x1b84f8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B84F4u, 0x1B84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84FCu;
label_1b84fc:
    // 0x1b84fc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B84FCu;
    SET_GPR_U32(ctx, 31, 0x1B8504u);
    ctx->pc = 0x1B8500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84FCu;
    // 0x1b8500: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B84FCu, 0x1B8504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8504u;
label_1b8504:
    // 0x1b8504: 0x0  nop
    ctx->pc = 0x1b8504u;
    // NOP
label_1b8508:
    // 0x1b8508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b8508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b850c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B850Cu;
    SET_GPR_U32(ctx, 31, 0x1B8514u);
    ctx->pc = 0x1B8510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B850Cu;
    // 0x1b8510: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B850Cu, 0x1B8514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8514u;
label_1b8514:
    // 0x1b8514: 0x0  nop
    ctx->pc = 0x1b8514u;
    // NOP
    // 0x1b8518: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B8518u;
    {
        const bool branch_taken_0x1b8518 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x1B851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8518u;
        // 0x1b851c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8518) {
            ctx->pc = 0x1B8508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8508;
        }
    }
    ctx->pc = 0x1B8520u;
    // 0x1b8520: 0x267000e0  addiu       $s0, $s3, 0xE0
    ctx->pc = 0x1b8520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    // 0x1b8524: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1b8524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b8528: 0x26740160  addiu       $s4, $s3, 0x160
    ctx->pc = 0x1b8528u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 352));
    // 0x1b852c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1b852cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b8530:
    // 0x1b8530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8534: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B8534u;
    SET_GPR_U32(ctx, 31, 0x1B853Cu);
    ctx->pc = 0x1B8538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8534u;
    // 0x1b8538: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B8534u, 0x1B853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B853Cu;
label_1b853c:
    // 0x1b853c: 0x0  nop
    ctx->pc = 0x1b853cu;
    // NOP
    // 0x1b8540: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B8540u;
    {
        const bool branch_taken_0x1b8540 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1B8544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8540u;
        // 0x1b8544: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8540) {
            ctx->pc = 0x1B8530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8530;
        }
    }
    ctx->pc = 0x1B8548u;
    // 0x1b8548: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b8548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b854c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1b854cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8550: 0x24541370  addiu       $s4, $v0, 0x1370
    ctx->pc = 0x1b8550u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4976));
    // 0x1b8554: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1b8554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b8558: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1b8558u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b855c: 0x0  nop
    ctx->pc = 0x1b855cu;
    // NOP
label_1b8560:
    // 0x1b8560: 0xae140044  sw          $s4, 0x44($s0)
    ctx->pc = 0x1b8560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 20));
    // 0x1b8564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b8564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8568: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B8568u;
    SET_GPR_U32(ctx, 31, 0x1B8570u);
    ctx->pc = 0x1B856Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8568u;
    // 0x1b856c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B8568u, 0x1B8570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8570u;
label_1b8570:
    // 0x1b8570: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B8570u;
    SET_GPR_U32(ctx, 31, 0x1B8578u);
    ctx->pc = 0x1B8574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8570u;
    // 0x1b8574: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B8570u, 0x1B8578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8578u;
label_1b8578:
    // 0x1b8578: 0x1632fff9  bne         $s1, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B8578u;
    {
        const bool branch_taken_0x1b8578 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x1B857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8578u;
        // 0x1b857c: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8578) {
            ctx->pc = 0x1B8560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8560;
        }
    }
    ctx->pc = 0x1B8580u;
    // 0x1b8580: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b8580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1b8584: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b8584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8588: 0xc440c65c  lwc1        $f0, -0x39A4($v0)
    ctx->pc = 0x1b8588u;
    { uint32_t bits = FAST_READ32(0x45C65Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b858c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b858cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8590: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b8590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b8594: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b8594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8598: 0xae6203ec  sw          $v0, 0x3EC($s3)
    ctx->pc = 0x1b8598u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1004), GPR_U32(ctx, 2));
    // 0x1b859c: 0xae6303e0  sw          $v1, 0x3E0($s3)
    ctx->pc = 0x1b859cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 992), GPR_U32(ctx, 3));
    // 0x1b85a0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1b85a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85a4: 0xae640400  sw          $a0, 0x400($s3)
    ctx->pc = 0x1b85a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1024), GPR_U32(ctx, 4));
    // 0x1b85a8: 0xae6503e8  sw          $a1, 0x3E8($s3)
    ctx->pc = 0x1b85a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1000), GPR_U32(ctx, 5));
    // 0x1b85ac: 0xe6600414  swc1        $f0, 0x414($s3)
    ctx->pc = 0x1b85acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1044), bits); }
    // 0x1b85b0: 0xae6003e4  sw          $zero, 0x3E4($s3)
    ctx->pc = 0x1b85b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 996), GPR_U32(ctx, 0));
    // 0x1b85b4: 0xae600408  sw          $zero, 0x408($s3)
    ctx->pc = 0x1b85b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1032), GPR_U32(ctx, 0));
    // 0x1b85b8: 0xe660040c  swc1        $f0, 0x40C($s3)
    ctx->pc = 0x1b85b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1036), bits); }
    // 0x1b85bc: 0xae600410  sw          $zero, 0x410($s3)
    ctx->pc = 0x1b85bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1040), GPR_U32(ctx, 0));
    // 0x1b85c0: 0xae600418  sw          $zero, 0x418($s3)
    ctx->pc = 0x1b85c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1048), GPR_U32(ctx, 0));
    // 0x1b85c4: 0xae6003fc  sw          $zero, 0x3FC($s3)
    ctx->pc = 0x1b85c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1020), GPR_U32(ctx, 0));
    // 0x1b85c8: 0xae600424  sw          $zero, 0x424($s3)
    ctx->pc = 0x1b85c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1060), GPR_U32(ctx, 0));
    // 0x1b85cc: 0xae60041c  sw          $zero, 0x41C($s3)
    ctx->pc = 0x1b85ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 0));
    // 0x1b85d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b85d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b85d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b85d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b85d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b85d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b85dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b85dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b85e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b85e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b85e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b85e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b85e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b85e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b85ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b85ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b85f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B85F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B85F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B85F0u;
        // 0x1b85f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B85F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B85F8u;
}
