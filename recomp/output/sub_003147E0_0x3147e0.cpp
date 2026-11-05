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

// Function: sub_003147E0
// Address: 0x3147e0 - 0x314a90
void sub_003147E0_0x3147e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003147E0_0x3147e0");
#endif

    switch (ctx->pc) {
        case 0x31481cu: goto label_31481c;
        case 0x314858u: goto label_314858;
        case 0x314888u: goto label_314888;
        case 0x3148b0u: goto label_3148b0;
        case 0x31494cu: goto label_31494c;
        case 0x314970u: goto label_314970;
        case 0x3149d0u: goto label_3149d0;
        case 0x314a10u: goto label_314a10;
        case 0x314a38u: goto label_314a38;
        default: break;
    }

    ctx->pc = 0x3147e0u;

    // 0x3147e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3147e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3147e4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x3147e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3147e8: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x3147e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x3147ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3147ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3147f0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3147f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3147f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3147f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3147f8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x3147f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x3147fc: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3147fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314800: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x314800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x314804: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x314804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x314808: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x314808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x31480c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x31480cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x314810: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x314810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x314814: 0xc0c514c  jal         func_314530
    ctx->pc = 0x314814u;
    SET_GPR_U32(ctx, 31, 0x31481Cu);
    ctx->pc = 0x314818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314814u;
    // 0x314818: 0xafb10020  sw          $s1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314530u, 0x314814u, 0x31481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31481Cu;
label_31481c:
    // 0x31481c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x31481cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x314820: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x314820u;
    {
        const bool branch_taken_0x314820 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x314820) {
            ctx->pc = 0x314824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314820u;
            // 0x314824: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314828u;
            goto label_314828;
        }
    }
    ctx->pc = 0x314828u;
label_314828:
    // 0x314828: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x314828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31482c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x31482cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x314830: 0x24632190  addiu       $v1, $v1, 0x2190
    ctx->pc = 0x314830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8592));
    // 0x314834: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x314838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x314838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31483c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x31483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x314840: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x314840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x314844: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x314844u;
    {
        const bool branch_taken_0x314844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x314848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314844u;
        // 0x314848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314844) {
            ctx->pc = 0x314874u;
            goto label_314874;
        }
    }
    ctx->pc = 0x31484Cu;
    // 0x31484c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x31484cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314850: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x314850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x314854: 0x0  nop
    ctx->pc = 0x314854u;
    // NOP
label_314858:
    // 0x314858: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x314858u;
    {
        const bool branch_taken_0x314858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x31485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314858u;
        // 0x31485c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314858) {
            ctx->pc = 0x314874u;
            goto label_314874;
        }
    }
    ctx->pc = 0x314860u;
    // 0x314860: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x314860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x314864: 0x0  nop
    ctx->pc = 0x314864u;
    // NOP
    // 0x314868: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x314868u;
    {
        const bool branch_taken_0x314868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x314868) {
            ctx->pc = 0x31486Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314868u;
            // 0x31486c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314858;
        }
    }
    ctx->pc = 0x314870u;
    // 0x314870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314874:
    // 0x314874: 0x54400075  bnel        $v0, $zero, . + 4 + (0x75 << 2)
    ctx->pc = 0x314874u;
    {
        const bool branch_taken_0x314874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314874) {
            ctx->pc = 0x314878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314874u;
            // 0x314878: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314A4Cu;
            goto label_314a4c;
        }
    }
    ctx->pc = 0x31487Cu;
    // 0x31487c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x31487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x314880: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x314880u;
    SET_GPR_U32(ctx, 31, 0x314888u);
    ctx->pc = 0x314884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314880u;
    // 0x314884: 0x26102190  addiu       $s0, $s0, 0x2190 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x314880u, 0x314888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314888u;
label_314888:
    // 0x314888: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x314888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x31488c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x31488cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314890: 0x24634440  addiu       $v1, $v1, 0x4440
    ctx->pc = 0x314890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17472));
    // 0x314894: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x314894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x314898: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x314898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x31489c: 0xafb10024  sw          $s1, 0x24($sp)
    ctx->pc = 0x31489cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 17));
    // 0x3148a0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3148a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3148a4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3148a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3148a8: 0xc0c514c  jal         func_314530
    ctx->pc = 0x3148A8u;
    SET_GPR_U32(ctx, 31, 0x3148B0u);
    ctx->pc = 0x3148ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3148A8u;
    // 0x3148ac: 0xafb50000  sw          $s5, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314530u, 0x3148A8u, 0x3148B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3148B0u;
label_3148b0:
    // 0x3148b0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3148b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3148b4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3148B4u;
    {
        const bool branch_taken_0x3148b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3148b4) {
            ctx->pc = 0x3148B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3148B4u;
            // 0x3148b8: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3148BCu;
            goto label_3148bc;
        }
    }
    ctx->pc = 0x3148BCu;
label_3148bc:
    // 0x3148bc: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3148bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3148c0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3148c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3148c4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x3148c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x3148c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3148c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3148cc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3148ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3148d0: 0x508821  addu        $s1, $v0, $s0
    ctx->pc = 0x3148d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3148d4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3148d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3148d8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3148d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3148dc: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3148DCu;
    {
        const bool branch_taken_0x3148dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3148E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148DCu;
        // 0x3148e0: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148dc) {
            ctx->pc = 0x314908u;
            goto label_314908;
        }
    }
    ctx->pc = 0x3148E4u;
    // 0x3148e4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3148E4u;
    {
        const bool branch_taken_0x3148e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3148e4) {
            ctx->pc = 0x3148E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3148E4u;
            // 0x3148e8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3148FCu;
            goto label_3148fc;
        }
    }
    ctx->pc = 0x3148ECu;
    // 0x3148ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3148ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3148f0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3148f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3148f4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3148f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3148f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3148f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3148fc:
    // 0x3148fc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3148fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x314900: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x314900u;
    {
        const bool branch_taken_0x314900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314900u;
        // 0x314904: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314900) {
            ctx->pc = 0x314A5Cu;
            goto label_314a5c;
        }
    }
    ctx->pc = 0x314908u;
label_314908:
    // 0x314908: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x314908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31490c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31490cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314914: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x314914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x314918: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x314918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x31491c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x31491cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x314920: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x314920u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x314924: 0x27a2002c  addiu       $v0, $sp, 0x2C
    ctx->pc = 0x314924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x314928: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x314928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x31492c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x31492cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x314930: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x314930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x314934: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x314934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x314938: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x314938u;
    {
        const bool branch_taken_0x314938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314938u;
        // 0x31493c: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314938) {
            ctx->pc = 0x314954u;
            goto label_314954;
        }
    }
    ctx->pc = 0x314940u;
    // 0x314940: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x314940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314944: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x314944u;
    SET_GPR_U32(ctx, 31, 0x31494Cu);
    ctx->pc = 0x314948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314944u;
    // 0x314948: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x314944u, 0x31494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31494Cu;
label_31494c:
    // 0x31494c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31494Cu;
    {
        const bool branch_taken_0x31494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31494Cu;
        // 0x314950: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31494c) {
            ctx->pc = 0x314960u;
            goto label_314960;
        }
    }
    ctx->pc = 0x314954u;
label_314954:
    // 0x314954: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314958: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x314958u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31495c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31495cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314960:
    // 0x314960: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x314960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x314964: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x314964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314968: 0x1093000a  beq         $a0, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x314968u;
    {
        const bool branch_taken_0x314968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x31496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314968u;
        // 0x31496c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314968) {
            ctx->pc = 0x314994u;
            goto label_314994;
        }
    }
    ctx->pc = 0x314970u;
label_314970:
    // 0x314970: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x314970u;
    {
        const bool branch_taken_0x314970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x314970) {
            ctx->pc = 0x314974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314970u;
            // 0x314974: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31498Cu;
            goto label_31498c;
        }
    }
    ctx->pc = 0x314978u;
    // 0x314978: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x314978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31497c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x31497cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x314980: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x314980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x314984: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x314984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x314988: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x314988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_31498c:
    // 0x31498c: 0x1493fff8  bne         $a0, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x31498Cu;
    {
        const bool branch_taken_0x31498c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x314990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31498Cu;
        // 0x314990: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31498c) {
            ctx->pc = 0x314970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314970;
        }
    }
    ctx->pc = 0x314994u;
label_314994:
    // 0x314994: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x314994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x314998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31499c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31499Cu;
    {
        const bool branch_taken_0x31499c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3149A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31499Cu;
        // 0x3149a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31499c) {
            ctx->pc = 0x3149C4u;
            goto label_3149c4;
        }
    }
    ctx->pc = 0x3149A4u;
    // 0x3149a4: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3149A4u;
    {
        const bool branch_taken_0x3149a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3149a4) {
            ctx->pc = 0x3149A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3149A4u;
            // 0x3149a8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3149F8u;
            goto label_3149f8;
        }
    }
    ctx->pc = 0x3149ACu;
    // 0x3149ac: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3149acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3149b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3149b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3149b4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3149b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3149b8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3149b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3149bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3149BCu;
    {
        const bool branch_taken_0x3149bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149BCu;
        // 0x3149c0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149bc) {
            ctx->pc = 0x3149F8u;
            goto label_3149f8;
        }
    }
    ctx->pc = 0x3149C4u;
label_3149c4:
    // 0x3149c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3149c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3149c8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3149C8u;
    {
        const bool branch_taken_0x3149c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149C8u;
        // 0x3149cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149c8) {
            ctx->pc = 0x3149F0u;
            goto label_3149f0;
        }
    }
    ctx->pc = 0x3149D0u;
label_3149d0:
    // 0x3149d0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3149D0u;
    {
        const bool branch_taken_0x3149d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149D0u;
        // 0x3149d4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149d0) {
            ctx->pc = 0x3149E8u;
            goto label_3149e8;
        }
    }
    ctx->pc = 0x3149D8u;
    // 0x3149d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3149d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3149dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3149dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3149e0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3149e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3149e4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3149e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_3149e8:
    // 0x3149e8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3149E8u;
    {
        const bool branch_taken_0x3149e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3149ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149E8u;
        // 0x3149ec: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149e8) {
            ctx->pc = 0x3149D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3149d0;
        }
    }
    ctx->pc = 0x3149F0u;
label_3149f0:
    // 0x3149f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3149f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3149f4: 0x0  nop
    ctx->pc = 0x3149f4u;
    // NOP
label_3149f8:
    // 0x3149f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3149f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3149fc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3149fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x314a00: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x314A00u;
    {
        const bool branch_taken_0x314a00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x314A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A00u;
        // 0x314a04: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a00) {
            ctx->pc = 0x314A28u;
            goto label_314a28;
        }
    }
    ctx->pc = 0x314A08u;
    // 0x314a08: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x314a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x314a0c: 0x0  nop
    ctx->pc = 0x314a0cu;
    // NOP
label_314a10:
    // 0x314a10: 0x0  nop
    ctx->pc = 0x314a10u;
    // NOP
    // 0x314a14: 0x0  nop
    ctx->pc = 0x314a14u;
    // NOP
    // 0x314a18: 0x0  nop
    ctx->pc = 0x314a18u;
    // NOP
    // 0x314a1c: 0x0  nop
    ctx->pc = 0x314a1cu;
    // NOP
    // 0x314a20: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x314A20u;
    {
        const bool branch_taken_0x314a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x314A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A20u;
        // 0x314a24: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a20) {
            ctx->pc = 0x314A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314a10;
        }
    }
    ctx->pc = 0x314A28u;
label_314a28:
    // 0x314a28: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x314A28u;
    {
        const bool branch_taken_0x314a28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A28u;
        // 0x314a2c: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a28) {
            ctx->pc = 0x314A3Cu;
            goto label_314a3c;
        }
    }
    ctx->pc = 0x314A30u;
    // 0x314a30: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x314A30u;
    SET_GPR_U32(ctx, 31, 0x314A38u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x314A30u, 0x314A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314A38u;
label_314a38:
    // 0x314a38: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x314a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_314a3c:
    // 0x314a3c: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x314a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x314a40: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x314a40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x314a44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x314A44u;
    {
        const bool branch_taken_0x314a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A44u;
        // 0x314a48: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a44) {
            ctx->pc = 0x314A5Cu;
            goto label_314a5c;
        }
    }
    ctx->pc = 0x314A4Cu;
label_314a4c:
    // 0x314a4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x314a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x314a50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x314A50u;
    {
        const bool branch_taken_0x314a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A50u;
        // 0x314a54: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a50) {
            ctx->pc = 0x314A64u;
            goto label_314a64;
        }
    }
    ctx->pc = 0x314A58u;
    // 0x314a58: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x314a58u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_314a5c:
    // 0x314a5c: 0xaeb70008  sw          $s7, 0x8($s5)
    ctx->pc = 0x314a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 23));
    // 0x314a60: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x314a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_314a64:
    // 0x314a64: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x314a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x314a68: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x314a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314a6c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x314a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x314a70: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x314a70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314a74: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x314a74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x314a78: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x314a78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314a7c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x314a7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x314a80: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x314a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x314a84: 0x3e00008  jr          $ra
    ctx->pc = 0x314A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A84u;
        // 0x314a88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314A8Cu;
    // 0x314a8c: 0x0  nop
    ctx->pc = 0x314a8cu;
    // NOP
    ctx->pc = 0x314a90u;
}
