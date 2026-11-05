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

// Function: sub_001CC458
// Address: 0x1cc458 - 0x1cc5a0
void sub_001CC458_0x1cc458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC458_0x1cc458");
#endif

    switch (ctx->pc) {
        case 0x1cc47cu: goto label_1cc47c;
        case 0x1cc488u: goto label_1cc488;
        case 0x1cc498u: goto label_1cc498;
        case 0x1cc4b0u: goto label_1cc4b0;
        case 0x1cc4c0u: goto label_1cc4c0;
        case 0x1cc4c8u: goto label_1cc4c8;
        case 0x1cc4d4u: goto label_1cc4d4;
        case 0x1cc4e0u: goto label_1cc4e0;
        case 0x1cc4f8u: goto label_1cc4f8;
        case 0x1cc500u: goto label_1cc500;
        case 0x1cc508u: goto label_1cc508;
        case 0x1cc518u: goto label_1cc518;
        case 0x1cc530u: goto label_1cc530;
        case 0x1cc538u: goto label_1cc538;
        case 0x1cc540u: goto label_1cc540;
        case 0x1cc548u: goto label_1cc548;
        case 0x1cc550u: goto label_1cc550;
        case 0x1cc558u: goto label_1cc558;
        case 0x1cc560u: goto label_1cc560;
        case 0x1cc568u: goto label_1cc568;
        case 0x1cc574u: goto label_1cc574;
        case 0x1cc580u: goto label_1cc580;
        default: break;
    }

    ctx->pc = 0x1cc458u;

    // 0x1cc458: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cc458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cc45c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x1cc45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x1cc460: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1cc460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1cc464: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1cc464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1cc468: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1cc468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1cc46c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1cc46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1cc470: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cc470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cc474: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x1CC474u;
    SET_GPR_U32(ctx, 31, 0x1CC47Cu);
    ctx->pc = 0x1CC478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC474u;
    // 0x1cc478: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x1CC474u, 0x1CC47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC47Cu;
label_1cc47c:
    // 0x1cc47c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc480: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x1CC480u;
    SET_GPR_U32(ctx, 31, 0x1CC488u);
    ctx->pc = 0x1CC484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC480u;
    // 0x1cc484: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x1CC480u, 0x1CC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC488u;
label_1cc488:
    // 0x1cc488: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x1cc488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x1cc48c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc490: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x1CC490u;
    SET_GPR_U32(ctx, 31, 0x1CC498u);
    ctx->pc = 0x1CC494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC490u;
    // 0x1cc494: 0x24a5ee40  addiu       $a1, $a1, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x1CC490u, 0x1CC498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC498u;
label_1cc498:
    // 0x1cc498: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1cc498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1cc49c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cc49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4a0: 0x2471fe40  addiu       $s1, $v1, -0x1C0
    ctx->pc = 0x1cc4a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x1cc4a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4a8: 0xc09dd98  jal         func_277660
    ctx->pc = 0x1CC4A8u;
    SET_GPR_U32(ctx, 31, 0x1CC4B0u);
    ctx->pc = 0x1CC4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4A8u;
    // 0x1cc4ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x1CC4A8u, 0x1CC4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4B0u;
label_1cc4b0:
    // 0x1cc4b0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CC4B0u;
    {
        const bool branch_taken_0x1cc4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4B0u;
        // 0x1cc4b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4b0) {
            ctx->pc = 0x1CC4E8u;
            goto label_1cc4e8;
        }
    }
    ctx->pc = 0x1CC4B8u;
    // 0x1cc4b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CC4B8u;
    {
        const bool branch_taken_0x1cc4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4B8u;
        // 0x1cc4bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4b8) {
            ctx->pc = 0x1CC4D8u;
            goto label_1cc4d8;
        }
    }
    ctx->pc = 0x1CC4C0u;
label_1cc4c0:
    // 0x1cc4c0: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x1CC4C0u;
    SET_GPR_U32(ctx, 31, 0x1CC4C8u);
    ctx->pc = 0x1CC4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4C0u;
    // 0x1cc4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x1CC4C0u, 0x1CC4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4C8u;
label_1cc4c8:
    // 0x1cc4c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cc4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4cc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1CC4CCu;
    SET_GPR_U32(ctx, 31, 0x1CC4D4u);
    ctx->pc = 0x1CC4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4CCu;
    // 0x1cc4d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1CC4CCu, 0x1CC4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4D4u;
label_1cc4d4:
    // 0x1cc4d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cc4d8:
    // 0x1cc4d8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1CC4D8u;
    SET_GPR_U32(ctx, 31, 0x1CC4E0u);
    ctx->pc = 0x1CC4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4D8u;
    // 0x1cc4dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1CC4D8u, 0x1CC4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4E0u;
label_1cc4e0:
    // 0x1cc4e0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1CC4E0u;
    {
        const bool branch_taken_0x1cc4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4E0u;
        // 0x1cc4e4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4e0) {
            ctx->pc = 0x1CC584u;
            goto label_1cc584;
        }
    }
    ctx->pc = 0x1CC4E8u;
label_1cc4e8:
    // 0x1cc4e8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1cc4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1cc4ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cc4ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc4f0: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x1CC4F0u;
    SET_GPR_U32(ctx, 31, 0x1CC4F8u);
    ctx->pc = 0x1CC4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4F0u;
    // 0x1cc4f4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x1CC4F0u, 0x1CC4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC4F8u;
label_1cc4f8:
    // 0x1cc4f8: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x1cc4f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x1cc4fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc500:
    // 0x1cc500: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x1CC500u;
    SET_GPR_U32(ctx, 31, 0x1CC508u);
    ctx->pc = 0x1CC504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC500u;
    // 0x1cc504: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x1CC500u, 0x1CC508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC508u;
label_1cc508:
    // 0x1cc508: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1CC508u;
    {
        const bool branch_taken_0x1cc508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC508u;
        // 0x1cc50c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc508) {
            ctx->pc = 0x1CC4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc4c0;
        }
    }
    ctx->pc = 0x1CC510u;
    // 0x1cc510: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1CC510u;
    SET_GPR_U32(ctx, 31, 0x1CC518u);
    ctx->pc = 0x1CC514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC510u;
    // 0x1cc514: 0x2665cf80  addiu       $a1, $s3, -0x3080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1CC510u, 0x1CC518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC518u;
label_1cc518:
    // 0x1cc518: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1cc518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1cc51c: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x1cc51cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x1cc520: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CC520u;
    {
        const bool branch_taken_0x1cc520 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC520u;
        // 0x1cc524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc520) {
            ctx->pc = 0x1CC500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc500;
        }
    }
    ctx->pc = 0x1CC528u;
    // 0x1cc528: 0xc073168  jal         func_1CC5A0
    ctx->pc = 0x1CC528u;
    SET_GPR_U32(ctx, 31, 0x1CC530u);
    ctx->pc = 0x1CC52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC528u;
    // 0x1cc52c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC5A0u, 0x1CC528u, 0x1CC530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC530u;
label_1cc530:
    // 0x1cc530: 0xc07318a  jal         func_1CC628
    ctx->pc = 0x1CC530u;
    SET_GPR_U32(ctx, 31, 0x1CC538u);
    ctx->pc = 0x1CC534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC530u;
    // 0x1cc534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC628u, 0x1CC530u, 0x1CC538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC538u;
label_1cc538:
    // 0x1cc538: 0xc07326a  jal         func_1CC9A8
    ctx->pc = 0x1CC538u;
    SET_GPR_U32(ctx, 31, 0x1CC540u);
    ctx->pc = 0x1CC53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC538u;
    // 0x1cc53c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC9A8u, 0x1CC538u, 0x1CC540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC540u;
label_1cc540:
    // 0x1cc540: 0xc073296  jal         func_1CCA58
    ctx->pc = 0x1CC540u;
    SET_GPR_U32(ctx, 31, 0x1CC548u);
    ctx->pc = 0x1CC544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC540u;
    // 0x1cc544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCA58u, 0x1CC540u, 0x1CC548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC548u;
label_1cc548:
    // 0x1cc548: 0xc07331a  jal         func_1CCC68
    ctx->pc = 0x1CC548u;
    SET_GPR_U32(ctx, 31, 0x1CC550u);
    ctx->pc = 0x1CC54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC548u;
    // 0x1cc54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCC68u, 0x1CC548u, 0x1CC550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC550u;
label_1cc550:
    // 0x1cc550: 0xc07339e  jal         func_1CCE78
    ctx->pc = 0x1CC550u;
    SET_GPR_U32(ctx, 31, 0x1CC558u);
    ctx->pc = 0x1CC554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC550u;
    // 0x1cc554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCE78u, 0x1CC550u, 0x1CC558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC558u;
label_1cc558:
    // 0x1cc558: 0xc073422  jal         func_1CD088
    ctx->pc = 0x1CC558u;
    SET_GPR_U32(ctx, 31, 0x1CC560u);
    ctx->pc = 0x1CC55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC558u;
    // 0x1cc55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD088u, 0x1CC558u, 0x1CC560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC560u;
label_1cc560:
    // 0x1cc560: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x1CC560u;
    SET_GPR_U32(ctx, 31, 0x1CC568u);
    ctx->pc = 0x1CC564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC560u;
    // 0x1cc564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x1CC560u, 0x1CC568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC568u;
label_1cc568:
    // 0x1cc568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cc568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc56c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1CC56Cu;
    SET_GPR_U32(ctx, 31, 0x1CC574u);
    ctx->pc = 0x1CC570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC56Cu;
    // 0x1cc570: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1CC56Cu, 0x1CC574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC574u;
label_1cc574:
    // 0x1cc574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cc574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc578: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1CC578u;
    SET_GPR_U32(ctx, 31, 0x1CC580u);
    ctx->pc = 0x1CC57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC578u;
    // 0x1cc57c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1CC578u, 0x1CC580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC580u;
label_1cc580:
    // 0x1cc580: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1cc580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc584:
    // 0x1cc584: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1cc584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc588: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1cc588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc58c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1cc58cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cc590: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cc590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc594: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC594u;
        // 0x1cc598: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC59Cu;
    // 0x1cc59c: 0x0  nop
    ctx->pc = 0x1cc59cu;
    // NOP
    ctx->pc = 0x1cc5a0u;
}
