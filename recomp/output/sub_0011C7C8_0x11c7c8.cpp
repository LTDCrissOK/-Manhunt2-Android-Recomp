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

// Function: sub_0011C7C8
// Address: 0x11c7c8 - 0x11c8b0
void sub_0011C7C8_0x11c7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C7C8_0x11c7c8");
#endif

    switch (ctx->pc) {
        case 0x11c7c8u: goto label_11c7c8;
        case 0x11c7ccu: goto label_11c7cc;
        case 0x11c7d0u: goto label_11c7d0;
        case 0x11c7d4u: goto label_11c7d4;
        case 0x11c7d8u: goto label_11c7d8;
        case 0x11c7dcu: goto label_11c7dc;
        case 0x11c7e0u: goto label_11c7e0;
        case 0x11c7e4u: goto label_11c7e4;
        case 0x11c7e8u: goto label_11c7e8;
        case 0x11c7ecu: goto label_11c7ec;
        case 0x11c7f0u: goto label_11c7f0;
        case 0x11c7f4u: goto label_11c7f4;
        case 0x11c7f8u: goto label_11c7f8;
        case 0x11c7fcu: goto label_11c7fc;
        case 0x11c800u: goto label_11c800;
        case 0x11c804u: goto label_11c804;
        case 0x11c808u: goto label_11c808;
        case 0x11c80cu: goto label_11c80c;
        case 0x11c810u: goto label_11c810;
        case 0x11c814u: goto label_11c814;
        case 0x11c818u: goto label_11c818;
        case 0x11c81cu: goto label_11c81c;
        case 0x11c820u: goto label_11c820;
        case 0x11c824u: goto label_11c824;
        case 0x11c828u: goto label_11c828;
        case 0x11c82cu: goto label_11c82c;
        case 0x11c830u: goto label_11c830;
        case 0x11c834u: goto label_11c834;
        case 0x11c838u: goto label_11c838;
        case 0x11c83cu: goto label_11c83c;
        case 0x11c840u: goto label_11c840;
        case 0x11c844u: goto label_11c844;
        case 0x11c848u: goto label_11c848;
        case 0x11c84cu: goto label_11c84c;
        case 0x11c850u: goto label_11c850;
        case 0x11c854u: goto label_11c854;
        case 0x11c858u: goto label_11c858;
        case 0x11c85cu: goto label_11c85c;
        case 0x11c860u: goto label_11c860;
        case 0x11c864u: goto label_11c864;
        case 0x11c868u: goto label_11c868;
        case 0x11c86cu: goto label_11c86c;
        case 0x11c870u: goto label_11c870;
        case 0x11c874u: goto label_11c874;
        case 0x11c878u: goto label_11c878;
        case 0x11c87cu: goto label_11c87c;
        case 0x11c880u: goto label_11c880;
        case 0x11c884u: goto label_11c884;
        case 0x11c888u: goto label_11c888;
        case 0x11c88cu: goto label_11c88c;
        case 0x11c890u: goto label_11c890;
        case 0x11c894u: goto label_11c894;
        case 0x11c898u: goto label_11c898;
        case 0x11c89cu: goto label_11c89c;
        case 0x11c8a0u: goto label_11c8a0;
        case 0x11c8a4u: goto label_11c8a4;
        case 0x11c8a8u: goto label_11c8a8;
        case 0x11c8acu: goto label_11c8ac;
        default: break;
    }

    ctx->pc = 0x11c7c8u;

label_11c7c8:
    // 0x11c7c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11c7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11c7cc:
    // 0x11c7cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11c7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_11c7d0:
    // 0x11c7d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11c7d4:
    // 0x11c7d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11c7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11c7d8:
    // 0x11c7d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11c7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_11c7dc:
    // 0x11c7dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_11c7e0:
    // 0x11c7e0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x11c7e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_11c7e4:
    // 0x11c7e4: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_11c7e8:
    if (ctx->pc == 0x11C7E8u) {
        ctx->pc = 0x11C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7E4u;
        // 0x11c7e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C7ECu;
        goto label_11c7ec;
    }
    ctx->pc = 0x11C7E4u;
    {
        const bool branch_taken_0x11c7e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7E4u;
        // 0x11c7e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7e4) {
            ctx->pc = 0x11C898u;
            goto label_11c898;
        }
    }
    ctx->pc = 0x11C7ECu;
label_11c7ec:
    // 0x11c7ec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x11c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_11c7f0:
    // 0x11c7f0: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
label_11c7f4:
    if (ctx->pc == 0x11C7F4u) {
        ctx->pc = 0x11C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7F0u;
        // 0x11c7f4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C7F8u;
        goto label_11c7f8;
    }
    ctx->pc = 0x11C7F0u;
    {
        const bool branch_taken_0x11c7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c7f0) {
            ctx->pc = 0x11C7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C7F0u;
            // 0x11c7f4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C89Cu;
            goto label_11c89c;
        }
    }
    ctx->pc = 0x11C7F8u;
label_11c7f8:
    // 0x11c7f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_11c7fc:
    if (ctx->pc == 0x11C7FCu) {
        ctx->pc = 0x11C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7F8u;
        // 0x11c7fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C800u;
        goto label_11c800;
    }
    ctx->pc = 0x11C7F8u;
    {
        const bool branch_taken_0x11c7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7F8u;
        // 0x11c7fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7f8) {
            ctx->pc = 0x11C838u;
            goto label_11c838;
        }
    }
    ctx->pc = 0x11C800u;
label_11c800:
    // 0x11c800: 0x24120060  addiu       $s2, $zero, 0x60
    ctx->pc = 0x11c800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_11c804:
    // 0x11c804: 0x2122018  mult        $a0, $s0, $s2
    ctx->pc = 0x11c804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_11c808:
    // 0x11c808: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x11c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_11c80c:
    // 0x11c80c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11c80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11c810:
    // 0x11c810: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x11c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_11c814:
    // 0x11c814: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x11c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_11c818:
    // 0x11c818: 0x40f809  jalr        $v0
label_11c81c:
    if (ctx->pc == 0x11C81Cu) {
        ctx->pc = 0x11C820u;
        goto label_11c820;
    }
    ctx->pc = 0x11C818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C820u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C818u, 0x11C820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C820u;
label_11c820:
    // 0x11c820: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x11c820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_11c824:
    // 0x11c824: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x11c824u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_11c828:
    // 0x11c828: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x11c828u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_11c82c:
    // 0x11c82c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x11c82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_11c830:
    // 0x11c830: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_11c834:
    if (ctx->pc == 0x11C834u) {
        ctx->pc = 0x11C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C830u;
        // 0x11c834: 0x2122018  mult        $a0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C838u;
        goto label_11c838;
    }
    ctx->pc = 0x11C830u;
    {
        const bool branch_taken_0x11c830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C830u;
        // 0x11c834: 0x2122018  mult        $a0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c830) {
            ctx->pc = 0x11C808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c808;
        }
    }
    ctx->pc = 0x11C838u;
label_11c838:
    // 0x11c838: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x11c838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_11c83c:
    // 0x11c83c: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_11c840:
    if (ctx->pc == 0x11C840u) {
        ctx->pc = 0x11C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C83Cu;
        // 0x11c840: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C844u;
        goto label_11c844;
    }
    ctx->pc = 0x11C83Cu;
    {
        const bool branch_taken_0x11c83c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C83Cu;
        // 0x11c840: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c83c) {
            ctx->pc = 0x11C88Cu;
            goto label_11c88c;
        }
    }
    ctx->pc = 0x11C844u;
label_11c844:
    // 0x11c844: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x11c844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
label_11c848:
    // 0x11c848: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x11c848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_11c84c:
    // 0x11c84c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x11c84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_11c850:
    // 0x11c850: 0x50b0000c  beql        $a1, $s0, . + 4 + (0xC << 2)
label_11c854:
    if (ctx->pc == 0x11C854u) {
        ctx->pc = 0x11C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C850u;
        // 0x11c854: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C858u;
        goto label_11c858;
    }
    ctx->pc = 0x11C850u;
    {
        const bool branch_taken_0x11c850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x11c850) {
            ctx->pc = 0x11C854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C850u;
            // 0x11c854: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C884u;
            goto label_11c884;
        }
    }
    ctx->pc = 0x11C858u;
label_11c858:
    // 0x11c858: 0x2610ffa0  addiu       $s0, $s0, -0x60
    ctx->pc = 0x11c858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967200));
label_11c85c:
    // 0x11c85c: 0x0  nop
    ctx->pc = 0x11c85cu;
    // NOP
label_11c860:
    // 0x11c860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11c864:
    // 0x11c864: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x11c864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_11c868:
    // 0x11c868: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x11c868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_11c86c:
    // 0x11c86c: 0x60f809  jalr        $v1
label_11c870:
    if (ctx->pc == 0x11C870u) {
        ctx->pc = 0x11C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C86Cu;
        // 0x11c870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C874u;
        goto label_11c874;
    }
    ctx->pc = 0x11C86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11C874u);
        ctx->pc = 0x11C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C86Cu;
        // 0x11c870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C86Cu, 0x11C874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11C874u;
label_11c874:
    // 0x11c874: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x11c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_11c878:
    // 0x11c878: 0x1450fff9  bne         $v0, $s0, . + 4 + (-0x7 << 2)
label_11c87c:
    if (ctx->pc == 0x11C87Cu) {
        ctx->pc = 0x11C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C878u;
        // 0x11c87c: 0x2610ffa0  addiu       $s0, $s0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C880u;
        goto label_11c880;
    }
    ctx->pc = 0x11C878u;
    {
        const bool branch_taken_0x11c878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x11C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C878u;
        // 0x11c87c: 0x2610ffa0  addiu       $s0, $s0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c878) {
            ctx->pc = 0x11C860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c860;
        }
    }
    ctx->pc = 0x11C880u;
label_11c880:
    // 0x11c880: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x11c880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_11c884:
    // 0x11c884: 0xc0f528a  jal         func_3D4A28
label_11c888:
    if (ctx->pc == 0x11C888u) {
        ctx->pc = 0x11C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C884u;
        // 0x11c888: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C88Cu;
        goto label_11c88c;
    }
    ctx->pc = 0x11C884u;
    SET_GPR_U32(ctx, 31, 0x11C88Cu);
    ctx->pc = 0x11C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C884u;
    // 0x11c888: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x11C884u, 0x11C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C88Cu;
label_11c88c:
    // 0x11c88c: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x11c88cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_11c890:
    // 0x11c890: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x11c890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_11c894:
    // 0x11c894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11c898:
    // 0x11c898: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11c898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_11c89c:
    // 0x11c89c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11c89cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11c8a0:
    // 0x11c8a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11c8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_11c8a4:
    // 0x11c8a4: 0x3e00008  jr          $ra
label_11c8a8:
    if (ctx->pc == 0x11C8A8u) {
        ctx->pc = 0x11C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8A4u;
        // 0x11c8a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11C8ACu;
        goto label_11c8ac;
    }
    ctx->pc = 0x11C8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C8A4u;
        // 0x11c8a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C8ACu;
label_11c8ac:
    // 0x11c8ac: 0x0  nop
    ctx->pc = 0x11c8acu;
    // NOP
    ctx->pc = 0x11c8b0u;
}
