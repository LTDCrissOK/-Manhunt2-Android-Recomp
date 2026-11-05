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

// Function: sub_003977B0
// Address: 0x3977b0 - 0x3978f8
void sub_003977B0_0x3977b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003977B0_0x3977b0");
#endif

    switch (ctx->pc) {
        case 0x3977b0u: goto label_3977b0;
        case 0x3977b4u: goto label_3977b4;
        case 0x3977b8u: goto label_3977b8;
        case 0x3977bcu: goto label_3977bc;
        case 0x3977c0u: goto label_3977c0;
        case 0x3977c4u: goto label_3977c4;
        case 0x3977c8u: goto label_3977c8;
        case 0x3977ccu: goto label_3977cc;
        case 0x3977d0u: goto label_3977d0;
        case 0x3977d4u: goto label_3977d4;
        case 0x3977d8u: goto label_3977d8;
        case 0x3977dcu: goto label_3977dc;
        case 0x3977e0u: goto label_3977e0;
        case 0x3977e4u: goto label_3977e4;
        case 0x3977e8u: goto label_3977e8;
        case 0x3977ecu: goto label_3977ec;
        case 0x3977f0u: goto label_3977f0;
        case 0x3977f4u: goto label_3977f4;
        case 0x3977f8u: goto label_3977f8;
        case 0x3977fcu: goto label_3977fc;
        case 0x397800u: goto label_397800;
        case 0x397804u: goto label_397804;
        case 0x397808u: goto label_397808;
        case 0x39780cu: goto label_39780c;
        case 0x397810u: goto label_397810;
        case 0x397814u: goto label_397814;
        case 0x397818u: goto label_397818;
        case 0x39781cu: goto label_39781c;
        case 0x397820u: goto label_397820;
        case 0x397824u: goto label_397824;
        case 0x397828u: goto label_397828;
        case 0x39782cu: goto label_39782c;
        case 0x397830u: goto label_397830;
        case 0x397834u: goto label_397834;
        case 0x397838u: goto label_397838;
        case 0x39783cu: goto label_39783c;
        case 0x397840u: goto label_397840;
        case 0x397844u: goto label_397844;
        case 0x397848u: goto label_397848;
        case 0x39784cu: goto label_39784c;
        case 0x397850u: goto label_397850;
        case 0x397854u: goto label_397854;
        case 0x397858u: goto label_397858;
        case 0x39785cu: goto label_39785c;
        case 0x397860u: goto label_397860;
        case 0x397864u: goto label_397864;
        case 0x397868u: goto label_397868;
        case 0x39786cu: goto label_39786c;
        case 0x397870u: goto label_397870;
        case 0x397874u: goto label_397874;
        case 0x397878u: goto label_397878;
        case 0x39787cu: goto label_39787c;
        case 0x397880u: goto label_397880;
        case 0x397884u: goto label_397884;
        case 0x397888u: goto label_397888;
        case 0x39788cu: goto label_39788c;
        case 0x397890u: goto label_397890;
        case 0x397894u: goto label_397894;
        case 0x397898u: goto label_397898;
        case 0x39789cu: goto label_39789c;
        case 0x3978a0u: goto label_3978a0;
        case 0x3978a4u: goto label_3978a4;
        case 0x3978a8u: goto label_3978a8;
        case 0x3978acu: goto label_3978ac;
        case 0x3978b0u: goto label_3978b0;
        case 0x3978b4u: goto label_3978b4;
        case 0x3978b8u: goto label_3978b8;
        case 0x3978bcu: goto label_3978bc;
        case 0x3978c0u: goto label_3978c0;
        case 0x3978c4u: goto label_3978c4;
        case 0x3978c8u: goto label_3978c8;
        case 0x3978ccu: goto label_3978cc;
        case 0x3978d0u: goto label_3978d0;
        case 0x3978d4u: goto label_3978d4;
        case 0x3978d8u: goto label_3978d8;
        case 0x3978dcu: goto label_3978dc;
        case 0x3978e0u: goto label_3978e0;
        case 0x3978e4u: goto label_3978e4;
        case 0x3978e8u: goto label_3978e8;
        case 0x3978ecu: goto label_3978ec;
        case 0x3978f0u: goto label_3978f0;
        case 0x3978f4u: goto label_3978f4;
        default: break;
    }

    ctx->pc = 0x3977b0u;

label_3977b0:
    // 0x3977b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3977b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3977b4:
    // 0x3977b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3977b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3977b8:
    // 0x3977b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3977b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3977bc:
    // 0x3977bc: 0x80eb274  j           func_3AC9D0
label_3977c0:
    if (ctx->pc == 0x3977C0u) {
        ctx->pc = 0x3977C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3977BCu;
        // 0x3977c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3977C4u;
        goto label_3977c4;
    }
    ctx->pc = 0x3977BCu;
    ctx->pc = 0x3977C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3977BCu;
    // 0x3977c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9D0u;
    sub_003AC9D0_0x3ac9d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3977C4u;
label_3977c4:
    // 0x3977c4: 0x0  nop
    ctx->pc = 0x3977c4u;
    // NOP
label_3977c8:
    // 0x3977c8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3977c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3977cc:
    // 0x3977cc: 0x0  nop
    ctx->pc = 0x3977ccu;
    // NOP
label_3977d0:
    // 0x3977d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3977d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3977d4:
    // 0x3977d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3977d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3977d8:
    // 0x3977d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3977d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3977dc:
    // 0x3977dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3977dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3977e0:
    // 0x3977e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3977e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3977e4:
    // 0x3977e4: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3977e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_3977e8:
    // 0x3977e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3977e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3977ec:
    // 0x3977ec: 0x24420c20  addiu       $v0, $v0, 0xC20
    ctx->pc = 0x3977ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3104));
label_3977f0:
    // 0x3977f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3977f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3977f4:
    // 0x3977f4: 0x264519dc  addiu       $a1, $s2, 0x19DC
    ctx->pc = 0x3977f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 6620));
label_3977f8:
    // 0x3977f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3977f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3977fc:
    // 0x3977fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3977fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_397800:
    // 0x397800: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x397800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_397804:
    // 0x397804: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x397804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_397808:
    // 0x397808: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
label_39780c:
    if (ctx->pc == 0x39780Cu) {
        ctx->pc = 0x39780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397808u;
        // 0x39780c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397810u;
        goto label_397810;
    }
    ctx->pc = 0x397808u;
    {
        const bool branch_taken_0x397808 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397808u;
        // 0x39780c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397808) {
            ctx->pc = 0x3978C0u;
            goto label_3978c0;
        }
    }
    ctx->pc = 0x397810u;
label_397810:
    // 0x397810: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_397814:
    // 0x397814: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x397814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_397818:
    // 0x397818: 0x8c4318c4  lw          $v1, 0x18C4($v0)
    ctx->pc = 0x397818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6340)));
label_39781c:
    // 0x39781c: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x39781cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_397820:
    // 0x397820: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
label_397824:
    if (ctx->pc == 0x397824u) {
        ctx->pc = 0x397824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397820u;
        // 0x397824: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397828u;
        goto label_397828;
    }
    ctx->pc = 0x397820u;
    {
        const bool branch_taken_0x397820 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x397824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397820u;
        // 0x397824: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397820) {
            ctx->pc = 0x3978ACu;
            goto label_3978ac;
        }
    }
    ctx->pc = 0x397828u;
label_397828:
    // 0x397828: 0x24421908  addiu       $v0, $v0, 0x1908
    ctx->pc = 0x397828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6408));
label_39782c:
    // 0x39782c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39782cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_397830:
    // 0x397830: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_397834:
    if (ctx->pc == 0x397834u) {
        ctx->pc = 0x397834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397830u;
        // 0x397834: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397838u;
        goto label_397838;
    }
    ctx->pc = 0x397830u;
    {
        const bool branch_taken_0x397830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x397834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397830u;
        // 0x397834: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397830) {
            ctx->pc = 0x397844u;
            goto label_397844;
        }
    }
    ctx->pc = 0x397838u;
label_397838:
    // 0x397838: 0x24421960  addiu       $v0, $v0, 0x1960
    ctx->pc = 0x397838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6496));
label_39783c:
    // 0x39783c: 0xc0e5b5a  jal         func_396D68
label_397840:
    if (ctx->pc == 0x397840u) {
        ctx->pc = 0x397840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39783Cu;
        // 0x397840: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397844u;
        goto label_397844;
    }
    ctx->pc = 0x39783Cu;
    SET_GPR_U32(ctx, 31, 0x397844u);
    ctx->pc = 0x397840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39783Cu;
    // 0x397840: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396D68u, 0x39783Cu, 0x397844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397844u;
label_397844:
    // 0x397844: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_397848:
    // 0x397848: 0x24421910  addiu       $v0, $v0, 0x1910
    ctx->pc = 0x397848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
label_39784c:
    // 0x39784c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x39784cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_397850:
    // 0x397850: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_397854:
    if (ctx->pc == 0x397854u) {
        ctx->pc = 0x397854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397850u;
        // 0x397854: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397858u;
        goto label_397858;
    }
    ctx->pc = 0x397850u;
    {
        const bool branch_taken_0x397850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x397854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397850u;
        // 0x397854: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397850) {
            ctx->pc = 0x397864u;
            goto label_397864;
        }
    }
    ctx->pc = 0x397858u;
label_397858:
    // 0x397858: 0x24421964  addiu       $v0, $v0, 0x1964
    ctx->pc = 0x397858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6500));
label_39785c:
    // 0x39785c: 0xc0e5b5a  jal         func_396D68
label_397860:
    if (ctx->pc == 0x397860u) {
        ctx->pc = 0x397860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39785Cu;
        // 0x397860: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397864u;
        goto label_397864;
    }
    ctx->pc = 0x39785Cu;
    SET_GPR_U32(ctx, 31, 0x397864u);
    ctx->pc = 0x397860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39785Cu;
    // 0x397860: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396D68u, 0x39785Cu, 0x397864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397864u;
label_397864:
    // 0x397864: 0xc0e5c4e  jal         func_397138
label_397868:
    if (ctx->pc == 0x397868u) {
        ctx->pc = 0x39786Cu;
        goto label_39786c;
    }
    ctx->pc = 0x397864u;
    SET_GPR_U32(ctx, 31, 0x39786Cu);
    ctx->pc = 0x397138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397138u, 0x397864u, 0x39786Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39786Cu;
label_39786c:
    // 0x39786c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39786cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397870:
    // 0x397870: 0x1490000a  bne         $a0, $s0, . + 4 + (0xA << 2)
label_397874:
    if (ctx->pc == 0x397874u) {
        ctx->pc = 0x397874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397870u;
        // 0x397874: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397878u;
        goto label_397878;
    }
    ctx->pc = 0x397870u;
    {
        const bool branch_taken_0x397870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x397874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397870u;
        // 0x397874: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397870) {
            ctx->pc = 0x39789Cu;
            goto label_39789c;
        }
    }
    ctx->pc = 0x397878u;
label_397878:
    // 0x397878: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x397878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_39787c:
    // 0x39787c: 0x2442190c  addiu       $v0, $v0, 0x190C
    ctx->pc = 0x39787cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6412));
label_397880:
    // 0x397880: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x397880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_397884:
    // 0x397884: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_397888:
    if (ctx->pc == 0x397888u) {
        ctx->pc = 0x397888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397884u;
        // 0x397888: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39788Cu;
        goto label_39788c;
    }
    ctx->pc = 0x397884u;
    {
        const bool branch_taken_0x397884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x397888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397884u;
        // 0x397888: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397884) {
            ctx->pc = 0x397898u;
            goto label_397898;
        }
    }
    ctx->pc = 0x39788Cu;
label_39788c:
    // 0x39788c: 0x2442195c  addiu       $v0, $v0, 0x195C
    ctx->pc = 0x39788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6492));
label_397890:
    // 0x397890: 0xc0e5b5a  jal         func_396D68
label_397894:
    if (ctx->pc == 0x397894u) {
        ctx->pc = 0x397894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397890u;
        // 0x397894: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397898u;
        goto label_397898;
    }
    ctx->pc = 0x397890u;
    SET_GPR_U32(ctx, 31, 0x397898u);
    ctx->pc = 0x397894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397890u;
    // 0x397894: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396D68u, 0x397890u, 0x397898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397898u;
label_397898:
    // 0x397898: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x397898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_39789c:
    // 0x39789c: 0x24631950  addiu       $v1, $v1, 0x1950
    ctx->pc = 0x39789cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6480));
label_3978a0:
    // 0x3978a0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x3978a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_3978a4:
    // 0x3978a4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3978a4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_3978a8:
    // 0x3978a8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x3978a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_3978ac:
    // 0x3978ac: 0xc0ec342  jal         func_3B0D08
label_3978b0:
    if (ctx->pc == 0x3978B0u) {
        ctx->pc = 0x3978B4u;
        goto label_3978b4;
    }
    ctx->pc = 0x3978ACu;
    SET_GPR_U32(ctx, 31, 0x3978B4u);
    ctx->pc = 0x3B0D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0D08u, 0x3978ACu, 0x3978B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3978B4u;
label_3978b4:
    // 0x3978b4: 0x264319dc  addiu       $v1, $s2, 0x19DC
    ctx->pc = 0x3978b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6620));
label_3978b8:
    // 0x3978b8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3978b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3978bc:
    // 0x3978bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3978bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3978c0:
    // 0x3978c0: 0x8c4219e0  lw          $v0, 0x19E0($v0)
    ctx->pc = 0x3978c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6624)));
label_3978c4:
    // 0x3978c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3978c8:
    if (ctx->pc == 0x3978C8u) {
        ctx->pc = 0x3978C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978C4u;
        // 0x3978c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3978CCu;
        goto label_3978cc;
    }
    ctx->pc = 0x3978C4u;
    {
        const bool branch_taken_0x3978c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3978c4) {
            ctx->pc = 0x3978C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3978C4u;
            // 0x3978c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3978E0u;
            goto label_3978e0;
        }
    }
    ctx->pc = 0x3978CCu;
label_3978cc:
    // 0x3978cc: 0x40f809  jalr        $v0
label_3978d0:
    if (ctx->pc == 0x3978D0u) {
        ctx->pc = 0x3978D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978CCu;
        // 0x3978d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3978D4u;
        goto label_3978d4;
    }
    ctx->pc = 0x3978CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3978D4u);
        ctx->pc = 0x3978D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978CCu;
        // 0x3978d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3978CCu, 0x3978D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3978D4u;
label_3978d4:
    // 0x3978d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3978d8:
    if (ctx->pc == 0x3978D8u) {
        ctx->pc = 0x3978D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978D4u;
        // 0x3978d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3978DCu;
        goto label_3978dc;
    }
    ctx->pc = 0x3978D4u;
    {
        const bool branch_taken_0x3978d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3978D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978D4u;
        // 0x3978d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3978d4) {
            ctx->pc = 0x3978E4u;
            goto label_3978e4;
        }
    }
    ctx->pc = 0x3978DCu;
label_3978dc:
    // 0x3978dc: 0x0  nop
    ctx->pc = 0x3978dcu;
    // NOP
label_3978e0:
    // 0x3978e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3978e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3978e4:
    // 0x3978e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3978e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3978e8:
    // 0x3978e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3978e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3978ec:
    // 0x3978ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3978ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3978f0:
    // 0x3978f0: 0x3e00008  jr          $ra
label_3978f4:
    if (ctx->pc == 0x3978F4u) {
        ctx->pc = 0x3978F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978F0u;
        // 0x3978f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3978F8u;
        goto label_fallthrough_0x3978f0;
    }
    ctx->pc = 0x3978F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3978F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3978F0u;
        // 0x3978f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3978F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3978f0:
    ctx->pc = 0x3978F8u;
}
