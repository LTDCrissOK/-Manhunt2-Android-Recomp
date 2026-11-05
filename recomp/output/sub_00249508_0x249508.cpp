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

// Function: sub_00249508
// Address: 0x249508 - 0x249640
void sub_00249508_0x249508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249508_0x249508");
#endif

    switch (ctx->pc) {
        case 0x249538u: goto label_249538;
        case 0x249544u: goto label_249544;
        case 0x24955cu: goto label_24955c;
        case 0x249568u: goto label_249568;
        case 0x249574u: goto label_249574;
        case 0x249598u: goto label_249598;
        case 0x2495c0u: goto label_2495c0;
        case 0x2495ccu: goto label_2495cc;
        case 0x2495e4u: goto label_2495e4;
        case 0x24961cu: goto label_24961c;
        case 0x249628u: goto label_249628;
        default: break;
    }

    ctx->pc = 0x249508u;

    // 0x249508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24950c: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x24950cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x249510: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x249518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24951c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x249520: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x249520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249524: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x249524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x249528: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x249528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x24952c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24952cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249530: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x249530u;
    SET_GPR_U32(ctx, 31, 0x249538u);
    ctx->pc = 0x249534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249530u;
    // 0x249534: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x249530u, 0x249538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249538u;
label_249538:
    // 0x249538: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x249538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24953c: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x24953Cu;
    SET_GPR_U32(ctx, 31, 0x249544u);
    ctx->pc = 0x249540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24953Cu;
    // 0x249540: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x24953Cu, 0x249544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249544u;
label_249544:
    // 0x249544: 0x56320009  bnel        $s1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x249544u;
    {
        const bool branch_taken_0x249544 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x249544) {
            ctx->pc = 0x249548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249544u;
            // 0x249548: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24956Cu;
            goto label_24956c;
        }
    }
    ctx->pc = 0x24954Cu;
    // 0x24954c: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x24954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x249550: 0xac510160  sw          $s1, 0x160($v0)
    ctx->pc = 0x249550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 17));
    // 0x249554: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x249554u;
    SET_GPR_U32(ctx, 31, 0x24955Cu);
    ctx->pc = 0x249558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249554u;
    // 0x249558: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x249554u, 0x24955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24955Cu;
label_24955c:
    // 0x24955c: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x24955cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x249560: 0xc0757d2  jal         func_1D5F48
    ctx->pc = 0x249560u;
    SET_GPR_U32(ctx, 31, 0x249568u);
    ctx->pc = 0x249564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249560u;
    // 0x249564: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F48u, 0x249560u, 0x249568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249568u;
label_249568:
    // 0x249568: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x249568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24956c:
    // 0x24956c: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x24956Cu;
    SET_GPR_U32(ctx, 31, 0x249574u);
    ctx->pc = 0x249570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24956Cu;
    // 0x249570: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x24956Cu, 0x249574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249574u;
label_249574:
    // 0x249574: 0x56200016  bnel        $s1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x249574u;
    {
        const bool branch_taken_0x249574 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x249574) {
            ctx->pc = 0x249578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249574u;
            // 0x249578: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2495D0u;
            goto label_2495d0;
        }
    }
    ctx->pc = 0x24957Cu;
    // 0x24957c: 0xa2120298  sb          $s2, 0x298($s0)
    ctx->pc = 0x24957cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 664), (uint8_t)GPR_U32(ctx, 18));
    // 0x249580: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x249580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x249584: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x249584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x249588: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x249588u;
    {
        const bool branch_taken_0x249588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249588u;
        // 0x24958c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249588) {
            ctx->pc = 0x2495B4u;
            goto label_2495b4;
        }
    }
    ctx->pc = 0x249590u;
    // 0x249590: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249594: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x249594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_249598:
    // 0x249598: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x249598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24959c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24959Cu;
    {
        const bool branch_taken_0x24959c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2495A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24959Cu;
        // 0x2495a0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24959c) {
            ctx->pc = 0x2495B4u;
            goto label_2495b4;
        }
    }
    ctx->pc = 0x2495A4u;
    // 0x2495a4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2495a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2495a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2495A8u;
    {
        const bool branch_taken_0x2495a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2495ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495A8u;
        // 0x2495ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495a8) {
            ctx->pc = 0x249598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249598;
        }
    }
    ctx->pc = 0x2495B0u;
    // 0x2495b0: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x2495b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_2495b4:
    // 0x2495b4: 0x24a58a20  addiu       $a1, $a1, -0x75E0
    ctx->pc = 0x2495b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937120));
    // 0x2495b8: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x2495B8u;
    SET_GPR_U32(ctx, 31, 0x2495C0u);
    ctx->pc = 0x2495BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2495B8u;
    // 0x2495bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x2495B8u, 0x2495C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495C0u;
label_2495c0:
    // 0x2495c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2495c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2495c4: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x2495C4u;
    SET_GPR_U32(ctx, 31, 0x2495CCu);
    ctx->pc = 0x2495C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2495C4u;
    // 0x2495c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x2495C4u, 0x2495CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495CCu;
label_2495cc:
    // 0x2495cc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2495ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_2495d0:
    // 0x2495d0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x2495d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x2495d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2495D4u;
    {
        const bool branch_taken_0x2495d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2495d4) {
            ctx->pc = 0x2495FCu;
            goto label_2495fc;
        }
    }
    ctx->pc = 0x2495DCu;
    // 0x2495dc: 0xc0bf868  jal         func_2FE1A0
    ctx->pc = 0x2495DCu;
    SET_GPR_U32(ctx, 31, 0x2495E4u);
    ctx->pc = 0x2FE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1A0u, 0x2495DCu, 0x2495E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2495E4u;
label_2495e4:
    // 0x2495e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2495E4u;
    {
        const bool branch_taken_0x2495e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495E4u;
        // 0x2495e8: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495e4) {
            ctx->pc = 0x2495FCu;
            goto label_2495fc;
        }
    }
    ctx->pc = 0x2495ECu;
    // 0x2495ec: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x2495ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2495f0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2495f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2495f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2495f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2495f8: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x2495f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
label_2495fc:
    // 0x2495fc: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2495FCu;
    {
        const bool branch_taken_0x2495fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2495fc) {
            ctx->pc = 0x249600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2495FCu;
            // 0x249600: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24962Cu;
            goto label_24962c;
        }
    }
    ctx->pc = 0x249604u;
    // 0x249604: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x249604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x249608: 0x904351a0  lbu         $v1, 0x51A0($v0)
    ctx->pc = 0x249608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5951A0u));
    // 0x24960c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24960Cu;
    {
        const bool branch_taken_0x24960c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24960Cu;
        // 0x249610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24960c) {
            ctx->pc = 0x249620u;
            goto label_249620;
        }
    }
    ctx->pc = 0x249614u;
    // 0x249614: 0xc09234a  jal         func_248D28
    ctx->pc = 0x249614u;
    SET_GPR_U32(ctx, 31, 0x24961Cu);
    ctx->pc = 0x248D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248D28u, 0x249614u, 0x24961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24961Cu;
label_24961c:
    // 0x24961c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_249620:
    // 0x249620: 0xc08dc16  jal         func_237058
    ctx->pc = 0x249620u;
    SET_GPR_U32(ctx, 31, 0x249628u);
    ctx->pc = 0x249624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249620u;
    // 0x249624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x249620u, 0x249628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249628u;
label_249628:
    // 0x249628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24962c:
    // 0x24962c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24962cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249630: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x249630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249634: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x249634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249638: 0x3e00008  jr          $ra
    ctx->pc = 0x249638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249638u;
        // 0x24963c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249640u;
}
