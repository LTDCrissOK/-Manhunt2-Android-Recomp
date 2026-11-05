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

// Function: sub_002B9688
// Address: 0x2b9688 - 0x2b97b0
void sub_002B9688_0x2b9688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9688_0x2b9688");
#endif

    switch (ctx->pc) {
        case 0x2b9688u: goto label_2b9688;
        case 0x2b968cu: goto label_2b968c;
        case 0x2b9690u: goto label_2b9690;
        case 0x2b9694u: goto label_2b9694;
        case 0x2b9698u: goto label_2b9698;
        case 0x2b969cu: goto label_2b969c;
        case 0x2b96a0u: goto label_2b96a0;
        case 0x2b96a4u: goto label_2b96a4;
        case 0x2b96a8u: goto label_2b96a8;
        case 0x2b96acu: goto label_2b96ac;
        case 0x2b96b0u: goto label_2b96b0;
        case 0x2b96b4u: goto label_2b96b4;
        case 0x2b96b8u: goto label_2b96b8;
        case 0x2b96bcu: goto label_2b96bc;
        case 0x2b96c0u: goto label_2b96c0;
        case 0x2b96c4u: goto label_2b96c4;
        case 0x2b96c8u: goto label_2b96c8;
        case 0x2b96ccu: goto label_2b96cc;
        case 0x2b96d0u: goto label_2b96d0;
        case 0x2b96d4u: goto label_2b96d4;
        case 0x2b96d8u: goto label_2b96d8;
        case 0x2b96dcu: goto label_2b96dc;
        case 0x2b96e0u: goto label_2b96e0;
        case 0x2b96e4u: goto label_2b96e4;
        case 0x2b96e8u: goto label_2b96e8;
        case 0x2b96ecu: goto label_2b96ec;
        case 0x2b96f0u: goto label_2b96f0;
        case 0x2b96f4u: goto label_2b96f4;
        case 0x2b96f8u: goto label_2b96f8;
        case 0x2b96fcu: goto label_2b96fc;
        case 0x2b9700u: goto label_2b9700;
        case 0x2b9704u: goto label_2b9704;
        case 0x2b9708u: goto label_2b9708;
        case 0x2b970cu: goto label_2b970c;
        case 0x2b9710u: goto label_2b9710;
        case 0x2b9714u: goto label_2b9714;
        case 0x2b9718u: goto label_2b9718;
        case 0x2b971cu: goto label_2b971c;
        case 0x2b9720u: goto label_2b9720;
        case 0x2b9724u: goto label_2b9724;
        case 0x2b9728u: goto label_2b9728;
        case 0x2b972cu: goto label_2b972c;
        case 0x2b9730u: goto label_2b9730;
        case 0x2b9734u: goto label_2b9734;
        case 0x2b9738u: goto label_2b9738;
        case 0x2b973cu: goto label_2b973c;
        case 0x2b9740u: goto label_2b9740;
        case 0x2b9744u: goto label_2b9744;
        case 0x2b9748u: goto label_2b9748;
        case 0x2b974cu: goto label_2b974c;
        case 0x2b9750u: goto label_2b9750;
        case 0x2b9754u: goto label_2b9754;
        case 0x2b9758u: goto label_2b9758;
        case 0x2b975cu: goto label_2b975c;
        case 0x2b9760u: goto label_2b9760;
        case 0x2b9764u: goto label_2b9764;
        case 0x2b9768u: goto label_2b9768;
        case 0x2b976cu: goto label_2b976c;
        case 0x2b9770u: goto label_2b9770;
        case 0x2b9774u: goto label_2b9774;
        case 0x2b9778u: goto label_2b9778;
        case 0x2b977cu: goto label_2b977c;
        case 0x2b9780u: goto label_2b9780;
        case 0x2b9784u: goto label_2b9784;
        case 0x2b9788u: goto label_2b9788;
        case 0x2b978cu: goto label_2b978c;
        case 0x2b9790u: goto label_2b9790;
        case 0x2b9794u: goto label_2b9794;
        case 0x2b9798u: goto label_2b9798;
        case 0x2b979cu: goto label_2b979c;
        case 0x2b97a0u: goto label_2b97a0;
        case 0x2b97a4u: goto label_2b97a4;
        case 0x2b97a8u: goto label_2b97a8;
        case 0x2b97acu: goto label_2b97ac;
        default: break;
    }

    ctx->pc = 0x2b9688u;

label_2b9688:
    // 0x2b9688: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b9688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2b968c:
    // 0x2b968c: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2b968cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2b9690:
    // 0x2b9690: 0x8c439e40  lw          $v1, -0x61C0($v0)
    ctx->pc = 0x2b9690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942272)));
label_2b9694:
    // 0x2b9694: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2b9694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
label_2b9698:
    // 0x2b9698: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2b9698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
label_2b969c:
    // 0x2b969c: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2b969cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
label_2b96a0:
    // 0x2b96a0: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x2b96a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
label_2b96a4:
    // 0x2b96a4: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
label_2b96a8:
    if (ctx->pc == 0x2B96A8u) {
        ctx->pc = 0x2B96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96A4u;
        // 0x2b96a8: 0xffbf0120  sd          $ra, 0x120($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96ACu;
        goto label_2b96ac;
    }
    ctx->pc = 0x2B96A4u;
    {
        const bool branch_taken_0x2b96a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96A4u;
        // 0x2b96a8: 0xffbf0120  sd          $ra, 0x120($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96a4) {
            ctx->pc = 0x2B978Cu;
            goto label_2b978c;
        }
    }
    ctx->pc = 0x2B96ACu;
label_2b96ac:
    // 0x2b96ac: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x2b96acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_2b96b0:
    // 0x2b96b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b96b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b96b4:
    // 0x2b96b4: 0x2484feb0  addiu       $a0, $a0, -0x150
    ctx->pc = 0x2b96b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966960));
label_2b96b8:
    // 0x2b96b8: 0xc09dcc6  jal         func_277318
label_2b96bc:
    if (ctx->pc == 0x2B96BCu) {
        ctx->pc = 0x2B96BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96B8u;
        // 0x2b96bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96C0u;
        goto label_2b96c0;
    }
    ctx->pc = 0x2B96B8u;
    SET_GPR_U32(ctx, 31, 0x2B96C0u);
    ctx->pc = 0x2B96BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B96B8u;
    // 0x2b96bc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x2B96B8u, 0x2B96C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B96C0u;
label_2b96c0:
    // 0x2b96c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b96c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b96c4:
    // 0x2b96c4: 0x56600003  bnel        $s3, $zero, . + 4 + (0x3 << 2)
label_2b96c8:
    if (ctx->pc == 0x2B96C8u) {
        ctx->pc = 0x2B96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96C4u;
        // 0x2b96c8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96CCu;
        goto label_2b96cc;
    }
    ctx->pc = 0x2B96C4u;
    {
        const bool branch_taken_0x2b96c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b96c4) {
            ctx->pc = 0x2B96C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B96C4u;
            // 0x2b96c8: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B96D4u;
            goto label_2b96d4;
        }
    }
    ctx->pc = 0x2B96CCu;
label_2b96cc:
    // 0x2b96cc: 0x10000030  b           . + 4 + (0x30 << 2)
label_2b96d0:
    if (ctx->pc == 0x2B96D0u) {
        ctx->pc = 0x2B96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96CCu;
        // 0x2b96d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96D4u;
        goto label_2b96d4;
    }
    ctx->pc = 0x2B96CCu;
    {
        const bool branch_taken_0x2b96cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B96D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96CCu;
        // 0x2b96d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96cc) {
            ctx->pc = 0x2B9790u;
            goto label_2b9790;
        }
    }
    ctx->pc = 0x2B96D4u;
label_2b96d4:
    // 0x2b96d4: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2b96d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2b96d8:
    // 0x2b96d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b96d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b96dc:
    // 0x2b96dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b96dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b96e0:
    // 0x2b96e0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2b96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2b96e4:
    // 0x2b96e4: 0x40f809  jalr        $v0
label_2b96e8:
    if (ctx->pc == 0x2B96E8u) {
        ctx->pc = 0x2B96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96E4u;
        // 0x2b96e8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96ECu;
        goto label_2b96ec;
    }
    ctx->pc = 0x2B96E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B96ECu);
        ctx->pc = 0x2B96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96E4u;
        // 0x2b96e8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B96E4u, 0x2B96ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B96ECu;
label_2b96ec:
    // 0x2b96ec: 0x83a30080  lb          $v1, 0x80($sp)
    ctx->pc = 0x2b96ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_2b96f0:
    // 0x2b96f0: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x2b96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2b96f4:
    // 0x2b96f4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_2b96f8:
    if (ctx->pc == 0x2B96F8u) {
        ctx->pc = 0x2B96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96F4u;
        // 0x2b96f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B96FCu;
        goto label_2b96fc;
    }
    ctx->pc = 0x2B96F4u;
    {
        const bool branch_taken_0x2b96f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B96F4u;
        // 0x2b96f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b96f4) {
            ctx->pc = 0x2B9720u;
            goto label_2b9720;
        }
    }
    ctx->pc = 0x2B96FCu;
label_2b96fc:
    // 0x2b96fc: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x2b96fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_2b9700:
    // 0x2b9700: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b9700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b9704:
    // 0x2b9704: 0x0  nop
    ctx->pc = 0x2b9704u;
    // NOP
label_2b9708:
    // 0x2b9708: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x2b9708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_2b970c:
    // 0x2b970c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2b970cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9710:
    // 0x2b9710: 0x0  nop
    ctx->pc = 0x2b9710u;
    // NOP
label_2b9714:
    // 0x2b9714: 0x0  nop
    ctx->pc = 0x2b9714u;
    // NOP
label_2b9718:
    // 0x2b9718: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
label_2b971c:
    if (ctx->pc == 0x2B971Cu) {
        ctx->pc = 0x2B971Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9718u;
        // 0x2b971c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9720u;
        goto label_2b9720;
    }
    ctx->pc = 0x2B9718u;
    {
        const bool branch_taken_0x2b9718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b9718) {
            ctx->pc = 0x2B971Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9718u;
            // 0x2b971c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9708;
        }
    }
    ctx->pc = 0x2B9720u;
label_2b9720:
    // 0x2b9720: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2b9720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2b9724:
    // 0x2b9724: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x2b9724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b9728:
    // 0x2b9728: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2b9728u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2b972c:
    // 0x2b972c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2b972cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_2b9730:
    // 0x2b9730: 0x2631acb0  addiu       $s1, $s1, -0x5350
    ctx->pc = 0x2b9730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945968));
label_2b9734:
    // 0x2b9734: 0x3842005c  xori        $v0, $v0, 0x5C
    ctx->pc = 0x2b9734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)92);
label_2b9738:
    // 0x2b9738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b973c:
    // 0x2b973c: 0xa2900a  movz        $s2, $a1, $v0
    ctx->pc = 0x2b973cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
label_2b9740:
    // 0x2b9740: 0xc0efc2e  jal         func_3BF0B8
label_2b9744:
    if (ctx->pc == 0x2B9744u) {
        ctx->pc = 0x2B9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9740u;
        // 0x2b9744: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9748u;
        goto label_2b9748;
    }
    ctx->pc = 0x2B9740u;
    SET_GPR_U32(ctx, 31, 0x2B9748u);
    ctx->pc = 0x2B9744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9740u;
    // 0x2b9744: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2B9740u, 0x2B9748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9748u;
label_2b9748:
    // 0x2b9748: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b9748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b974c:
    // 0x2b974c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b974cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9750:
    // 0x2b9750: 0xc0efd60  jal         func_3BF580
label_2b9754:
    if (ctx->pc == 0x2B9754u) {
        ctx->pc = 0x2B9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9750u;
        // 0x2b9754: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9758u;
        goto label_2b9758;
    }
    ctx->pc = 0x2B9750u;
    SET_GPR_U32(ctx, 31, 0x2B9758u);
    ctx->pc = 0x2B9754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9750u;
    // 0x2b9754: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x2B9750u, 0x2B9758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9758u;
label_2b9758:
    // 0x2b9758: 0xc0efc2e  jal         func_3BF0B8
label_2b975c:
    if (ctx->pc == 0x2B975Cu) {
        ctx->pc = 0x2B975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9758u;
        // 0x2b975c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9760u;
        goto label_2b9760;
    }
    ctx->pc = 0x2B9758u;
    SET_GPR_U32(ctx, 31, 0x2B9760u);
    ctx->pc = 0x2B975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9758u;
    // 0x2b975c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2B9758u, 0x2B9760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9760u;
label_2b9760:
    // 0x2b9760: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x2b9760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2b9764:
    // 0x2b9764: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2b9764u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2b9768:
    // 0x2b9768: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b9768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b976c:
    // 0x2b976c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x2b976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2b9770:
    // 0x2b9770: 0x60f809  jalr        $v1
label_2b9774:
    if (ctx->pc == 0x2B9774u) {
        ctx->pc = 0x2B9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9770u;
        // 0x2b9774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9778u;
        goto label_2b9778;
    }
    ctx->pc = 0x2B9770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9778u);
        ctx->pc = 0x2B9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9770u;
        // 0x2b9774: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9770u, 0x2B9778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9778u;
label_2b9778:
    // 0x2b9778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b9778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b977c:
    // 0x2b977c: 0xc0efb95  jal         func_3BEE54
label_2b9780:
    if (ctx->pc == 0x2B9780u) {
        ctx->pc = 0x2B9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B977Cu;
        // 0x2b9780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9784u;
        goto label_2b9784;
    }
    ctx->pc = 0x2B977Cu;
    SET_GPR_U32(ctx, 31, 0x2B9784u);
    ctx->pc = 0x2B9780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B977Cu;
    // 0x2b9780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2B977Cu, 0x2B9784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9784u;
label_2b9784:
    // 0x2b9784: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b9788:
    if (ctx->pc == 0x2B9788u) {
        ctx->pc = 0x2B9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9784u;
        // 0x2b9788: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B978Cu;
        goto label_2b978c;
    }
    ctx->pc = 0x2B9784u;
    {
        const bool branch_taken_0x2b9784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9784u;
        // 0x2b9788: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9784) {
            ctx->pc = 0x2B9790u;
            goto label_2b9790;
        }
    }
    ctx->pc = 0x2B978Cu;
label_2b978c:
    // 0x2b978c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b978cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9790:
    // 0x2b9790: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2b9790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2b9794:
    // 0x2b9794: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2b9794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_2b9798:
    // 0x2b9798: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2b9798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2b979c:
    // 0x2b979c: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x2b979cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_2b97a0:
    // 0x2b97a0: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2b97a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2b97a4:
    // 0x2b97a4: 0x3e00008  jr          $ra
label_2b97a8:
    if (ctx->pc == 0x2B97A8u) {
        ctx->pc = 0x2B97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97A4u;
        // 0x2b97a8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B97ACu;
        goto label_2b97ac;
    }
    ctx->pc = 0x2B97A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B97A4u;
        // 0x2b97a8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B97A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B97ACu;
label_2b97ac:
    // 0x2b97ac: 0x0  nop
    ctx->pc = 0x2b97acu;
    // NOP
    ctx->pc = 0x2b97b0u;
}
