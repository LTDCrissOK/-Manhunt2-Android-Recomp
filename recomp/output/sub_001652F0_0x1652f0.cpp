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

// Function: sub_001652F0
// Address: 0x1652f0 - 0x165408
void sub_001652F0_0x1652f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001652F0_0x1652f0");
#endif

    switch (ctx->pc) {
        case 0x165320u: goto label_165320;
        case 0x16532cu: goto label_16532c;
        case 0x165348u: goto label_165348;
        case 0x165358u: goto label_165358;
        case 0x165364u: goto label_165364;
        case 0x16537cu: goto label_16537c;
        case 0x16538cu: goto label_16538c;
        case 0x1653a4u: goto label_1653a4;
        case 0x1653acu: goto label_1653ac;
        case 0x1653b4u: goto label_1653b4;
        case 0x1653c0u: goto label_1653c0;
        case 0x1653d8u: goto label_1653d8;
        case 0x1653e8u: goto label_1653e8;
        case 0x1653f0u: goto label_1653f0;
        default: break;
    }

    ctx->pc = 0x1652f0u;

    // 0x1652f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1652f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1652f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1652f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1652f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1652f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1652fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1652fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165300: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x165300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165304: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x165304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165308: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x165308u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x16530c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x165310: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x165310u;
    {
        const bool branch_taken_0x165310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165310u;
        // 0x165314: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165310) {
            ctx->pc = 0x165334u;
            goto label_165334;
        }
    }
    ctx->pc = 0x165318u;
    // 0x165318: 0xc059718  jal         func_165C60
    ctx->pc = 0x165318u;
    SET_GPR_U32(ctx, 31, 0x165320u);
    ctx->pc = 0x165C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C60u, 0x165318u, 0x165320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165320u;
label_165320:
    // 0x165320: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x165320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x165324: 0xc059634  jal         func_1658D0
    ctx->pc = 0x165324u;
    SET_GPR_U32(ctx, 31, 0x16532Cu);
    ctx->pc = 0x165328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165324u;
    // 0x165328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1658D0u, 0x165324u, 0x16532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16532Cu;
label_16532c:
    // 0x16532c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x16532Cu;
    {
        const bool branch_taken_0x16532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16532Cu;
        // 0x165330: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16532c) {
            ctx->pc = 0x1653F4u;
            goto label_1653f4;
        }
    }
    ctx->pc = 0x165334u;
label_165334:
    // 0x165334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165338: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x165338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16533c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16533cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165340: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x165340u;
    SET_GPR_U32(ctx, 31, 0x165348u);
    ctx->pc = 0x165344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165340u;
    // 0x165344: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x165340u, 0x165348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165348u;
label_165348:
    // 0x165348: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165348u;
    {
        const bool branch_taken_0x165348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165348) {
            ctx->pc = 0x16534Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165348u;
            // 0x16534c: 0x8e0203b8  lw          $v0, 0x3B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16536Cu;
            goto label_16536c;
        }
    }
    ctx->pc = 0x165350u;
    // 0x165350: 0xc059718  jal         func_165C60
    ctx->pc = 0x165350u;
    SET_GPR_U32(ctx, 31, 0x165358u);
    ctx->pc = 0x165354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165350u;
    // 0x165354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C60u, 0x165350u, 0x165358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165358u;
label_165358:
    // 0x165358: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x165358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x16535c: 0xc059670  jal         func_1659C0
    ctx->pc = 0x16535Cu;
    SET_GPR_U32(ctx, 31, 0x165364u);
    ctx->pc = 0x165360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16535Cu;
    // 0x165360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659C0u, 0x16535Cu, 0x165364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165364u;
label_165364:
    // 0x165364: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x165364u;
    {
        const bool branch_taken_0x165364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165364u;
        // 0x165368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165364) {
            ctx->pc = 0x1653F4u;
            goto label_1653f4;
        }
    }
    ctx->pc = 0x16536Cu;
label_16536c:
    // 0x16536c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x16536Cu;
    {
        const bool branch_taken_0x16536c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16536c) {
            ctx->pc = 0x165370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16536Cu;
            // 0x165370: 0x8e0203b8  lw          $v0, 0x3B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165394u;
            goto label_165394;
        }
    }
    ctx->pc = 0x165374u;
    // 0x165374: 0xc059b1a  jal         func_166C68
    ctx->pc = 0x165374u;
    SET_GPR_U32(ctx, 31, 0x16537Cu);
    ctx->pc = 0x165378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165374u;
    // 0x165378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C68u, 0x165374u, 0x16537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16537Cu;
label_16537c:
    // 0x16537c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16537Cu;
    {
        const bool branch_taken_0x16537c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16537c) {
            ctx->pc = 0x165380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16537Cu;
            // 0x165380: 0x8e0203b8  lw          $v0, 0x3B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165394u;
            goto label_165394;
        }
    }
    ctx->pc = 0x165384u;
    // 0x165384: 0xc059abe  jal         func_166AF8
    ctx->pc = 0x165384u;
    SET_GPR_U32(ctx, 31, 0x16538Cu);
    ctx->pc = 0x165388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165384u;
    // 0x165388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166AF8u, 0x165384u, 0x16538Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16538Cu;
label_16538c:
    // 0x16538c: 0xae0203b8  sw          $v0, 0x3B8($s0)
    ctx->pc = 0x16538cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 2));
    // 0x165390: 0x8e0203b8  lw          $v0, 0x3B8($s0)
    ctx->pc = 0x165390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
label_165394:
    // 0x165394: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x165394u;
    {
        const bool branch_taken_0x165394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165394u;
        // 0x165398: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165394) {
            ctx->pc = 0x1653C8u;
            goto label_1653c8;
        }
    }
    ctx->pc = 0x16539Cu;
    // 0x16539c: 0xc059718  jal         func_165C60
    ctx->pc = 0x16539Cu;
    SET_GPR_U32(ctx, 31, 0x1653A4u);
    ctx->pc = 0x1653A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16539Cu;
    // 0x1653a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C60u, 0x16539Cu, 0x1653A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653A4u;
label_1653a4:
    // 0x1653a4: 0xc059cbe  jal         func_1672F8
    ctx->pc = 0x1653A4u;
    SET_GPR_U32(ctx, 31, 0x1653ACu);
    ctx->pc = 0x1653A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653A4u;
    // 0x1653a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672F8u, 0x1653A4u, 0x1653ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653ACu;
label_1653ac:
    // 0x1653ac: 0xc059606  jal         func_165818
    ctx->pc = 0x1653ACu;
    SET_GPR_U32(ctx, 31, 0x1653B4u);
    ctx->pc = 0x1653B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653ACu;
    // 0x1653b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165818u, 0x1653ACu, 0x1653B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653B4u;
label_1653b4:
    // 0x1653b4: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x1653b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x1653b8: 0xc059ce4  jal         func_167390
    ctx->pc = 0x1653B8u;
    SET_GPR_U32(ctx, 31, 0x1653C0u);
    ctx->pc = 0x1653BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653B8u;
    // 0x1653bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167390u, 0x1653B8u, 0x1653C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653C0u;
label_1653c0:
    // 0x1653c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1653C0u;
    {
        const bool branch_taken_0x1653c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653C0u;
        // 0x1653c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653c0) {
            ctx->pc = 0x1653F4u;
            goto label_1653f4;
        }
    }
    ctx->pc = 0x1653C8u;
label_1653c8:
    // 0x1653c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1653c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1653cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1653ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1653d0: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x1653D0u;
    SET_GPR_U32(ctx, 31, 0x1653D8u);
    ctx->pc = 0x1653D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653D0u;
    // 0x1653d4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x1653D0u, 0x1653D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653D8u;
label_1653d8:
    // 0x1653d8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1653D8u;
    {
        const bool branch_taken_0x1653d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1653d8) {
            ctx->pc = 0x1653DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1653D8u;
            // 0x1653dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1653F4u;
            goto label_1653f4;
        }
    }
    ctx->pc = 0x1653E0u;
    // 0x1653e0: 0xc059718  jal         func_165C60
    ctx->pc = 0x1653E0u;
    SET_GPR_U32(ctx, 31, 0x1653E8u);
    ctx->pc = 0x1653E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653E0u;
    // 0x1653e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C60u, 0x1653E0u, 0x1653E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653E8u;
label_1653e8:
    // 0x1653e8: 0xc059670  jal         func_1659C0
    ctx->pc = 0x1653E8u;
    SET_GPR_U32(ctx, 31, 0x1653F0u);
    ctx->pc = 0x1653ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1653E8u;
    // 0x1653ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659C0u, 0x1653E8u, 0x1653F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1653F0u;
label_1653f0:
    // 0x1653f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1653f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1653f4:
    // 0x1653f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1653f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1653f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1653f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1653fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1653FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653FCu;
        // 0x165400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1653FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165404u;
    // 0x165404: 0x0  nop
    ctx->pc = 0x165404u;
    // NOP
    ctx->pc = 0x165408u;
}
