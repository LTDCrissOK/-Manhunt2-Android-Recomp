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

// Function: sub_001318C0
// Address: 0x1318c0 - 0x131988
void sub_001318C0_0x1318c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001318C0_0x1318c0");
#endif

    switch (ctx->pc) {
        case 0x1318c0u: goto label_1318c0;
        case 0x1318c4u: goto label_1318c4;
        case 0x1318c8u: goto label_1318c8;
        case 0x1318ccu: goto label_1318cc;
        case 0x1318d0u: goto label_1318d0;
        case 0x1318d4u: goto label_1318d4;
        case 0x1318d8u: goto label_1318d8;
        case 0x1318dcu: goto label_1318dc;
        case 0x1318e0u: goto label_1318e0;
        case 0x1318e4u: goto label_1318e4;
        case 0x1318e8u: goto label_1318e8;
        case 0x1318ecu: goto label_1318ec;
        case 0x1318f0u: goto label_1318f0;
        case 0x1318f4u: goto label_1318f4;
        case 0x1318f8u: goto label_1318f8;
        case 0x1318fcu: goto label_1318fc;
        case 0x131900u: goto label_131900;
        case 0x131904u: goto label_131904;
        case 0x131908u: goto label_131908;
        case 0x13190cu: goto label_13190c;
        case 0x131910u: goto label_131910;
        case 0x131914u: goto label_131914;
        case 0x131918u: goto label_131918;
        case 0x13191cu: goto label_13191c;
        case 0x131920u: goto label_131920;
        case 0x131924u: goto label_131924;
        case 0x131928u: goto label_131928;
        case 0x13192cu: goto label_13192c;
        case 0x131930u: goto label_131930;
        case 0x131934u: goto label_131934;
        case 0x131938u: goto label_131938;
        case 0x13193cu: goto label_13193c;
        case 0x131940u: goto label_131940;
        case 0x131944u: goto label_131944;
        case 0x131948u: goto label_131948;
        case 0x13194cu: goto label_13194c;
        case 0x131950u: goto label_131950;
        case 0x131954u: goto label_131954;
        case 0x131958u: goto label_131958;
        case 0x13195cu: goto label_13195c;
        case 0x131960u: goto label_131960;
        case 0x131964u: goto label_131964;
        case 0x131968u: goto label_131968;
        case 0x13196cu: goto label_13196c;
        case 0x131970u: goto label_131970;
        case 0x131974u: goto label_131974;
        case 0x131978u: goto label_131978;
        case 0x13197cu: goto label_13197c;
        case 0x131980u: goto label_131980;
        case 0x131984u: goto label_131984;
        default: break;
    }

    ctx->pc = 0x1318c0u;

label_1318c0:
    // 0x1318c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1318c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1318c4:
    // 0x1318c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1318c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1318c8:
    // 0x1318c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1318c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1318cc:
    // 0x1318cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1318ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1318d0:
    // 0x1318d0: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x1318d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_1318d4:
    // 0x1318d4: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
label_1318d8:
    if (ctx->pc == 0x1318D8u) {
        ctx->pc = 0x1318D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318D4u;
        // 0x1318d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1318DCu;
        goto label_1318dc;
    }
    ctx->pc = 0x1318D4u;
    {
        const bool branch_taken_0x1318d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1318d4) {
            ctx->pc = 0x1318D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1318D4u;
            // 0x1318d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131978u;
            goto label_131978;
        }
    }
    ctx->pc = 0x1318DCu;
label_1318dc:
    // 0x1318dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1318dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1318e0:
    // 0x1318e0: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_1318e4:
    if (ctx->pc == 0x1318E4u) {
        ctx->pc = 0x1318E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318E0u;
        // 0x1318e4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1318E8u;
        goto label_1318e8;
    }
    ctx->pc = 0x1318E0u;
    {
        const bool branch_taken_0x1318e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1318e0) {
            ctx->pc = 0x1318E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1318E0u;
            // 0x1318e4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131910u;
            goto label_131910;
        }
    }
    ctx->pc = 0x1318E8u;
label_1318e8:
    // 0x1318e8: 0xc04b39e  jal         func_12CE78
label_1318ec:
    if (ctx->pc == 0x1318ECu) {
        ctx->pc = 0x1318F0u;
        goto label_1318f0;
    }
    ctx->pc = 0x1318E8u;
    SET_GPR_U32(ctx, 31, 0x1318F0u);
    ctx->pc = 0x12CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE78u, 0x1318E8u, 0x1318F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318F0u;
label_1318f0:
    // 0x1318f0: 0x54500007  bnel        $v0, $s0, . + 4 + (0x7 << 2)
label_1318f4:
    if (ctx->pc == 0x1318F4u) {
        ctx->pc = 0x1318F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318F0u;
        // 0x1318f4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1318F8u;
        goto label_1318f8;
    }
    ctx->pc = 0x1318F0u;
    {
        const bool branch_taken_0x1318f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1318f0) {
            ctx->pc = 0x1318F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1318F0u;
            // 0x1318f4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131910u;
            goto label_131910;
        }
    }
    ctx->pc = 0x1318F8u;
label_1318f8:
    // 0x1318f8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1318f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1318fc:
    // 0x1318fc: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1318fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_131900:
    // 0x131900: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x131900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_131904:
    // 0x131904: 0x40f809  jalr        $v0
label_131908:
    if (ctx->pc == 0x131908u) {
        ctx->pc = 0x13190Cu;
        goto label_13190c;
    }
    ctx->pc = 0x131904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13190Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131904u, 0x13190Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13190Cu;
label_13190c:
    // 0x13190c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x13190cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_131910:
    // 0x131910: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
label_131914:
    if (ctx->pc == 0x131914u) {
        ctx->pc = 0x131914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131910u;
        // 0x131914: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131918u;
        goto label_131918;
    }
    ctx->pc = 0x131910u;
    {
        const bool branch_taken_0x131910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131910) {
            ctx->pc = 0x131914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131910u;
            // 0x131914: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131940u;
            goto label_131940;
        }
    }
    ctx->pc = 0x131918u;
label_131918:
    // 0x131918: 0xc04b39e  jal         func_12CE78
label_13191c:
    if (ctx->pc == 0x13191Cu) {
        ctx->pc = 0x131920u;
        goto label_131920;
    }
    ctx->pc = 0x131918u;
    SET_GPR_U32(ctx, 31, 0x131920u);
    ctx->pc = 0x12CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE78u, 0x131918u, 0x131920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131920u;
label_131920:
    // 0x131920: 0x54500007  bnel        $v0, $s0, . + 4 + (0x7 << 2)
label_131924:
    if (ctx->pc == 0x131924u) {
        ctx->pc = 0x131924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131920u;
        // 0x131924: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131928u;
        goto label_131928;
    }
    ctx->pc = 0x131920u;
    {
        const bool branch_taken_0x131920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x131920) {
            ctx->pc = 0x131924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131920u;
            // 0x131924: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131940u;
            goto label_131940;
        }
    }
    ctx->pc = 0x131928u;
label_131928:
    // 0x131928: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x131928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_13192c:
    // 0x13192c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x13192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_131930:
    // 0x131930: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x131930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_131934:
    // 0x131934: 0x40f809  jalr        $v0
label_131938:
    if (ctx->pc == 0x131938u) {
        ctx->pc = 0x13193Cu;
        goto label_13193c;
    }
    ctx->pc = 0x131934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13193Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131934u, 0x13193Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13193Cu;
label_13193c:
    // 0x13193c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x13193cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_131940:
    // 0x131940: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_131944:
    if (ctx->pc == 0x131944u) {
        ctx->pc = 0x131948u;
        goto label_131948;
    }
    ctx->pc = 0x131940u;
    {
        const bool branch_taken_0x131940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131940) {
            ctx->pc = 0x13196Cu;
            goto label_13196c;
        }
    }
    ctx->pc = 0x131948u;
label_131948:
    // 0x131948: 0xc04b39e  jal         func_12CE78
label_13194c:
    if (ctx->pc == 0x13194Cu) {
        ctx->pc = 0x131950u;
        goto label_131950;
    }
    ctx->pc = 0x131948u;
    SET_GPR_U32(ctx, 31, 0x131950u);
    ctx->pc = 0x12CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE78u, 0x131948u, 0x131950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131950u;
label_131950:
    // 0x131950: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
label_131954:
    if (ctx->pc == 0x131954u) {
        ctx->pc = 0x131958u;
        goto label_131958;
    }
    ctx->pc = 0x131950u;
    {
        const bool branch_taken_0x131950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x131950) {
            ctx->pc = 0x13196Cu;
            goto label_13196c;
        }
    }
    ctx->pc = 0x131958u;
label_131958:
    // 0x131958: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x131958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13195c:
    // 0x13195c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x13195cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_131960:
    // 0x131960: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x131960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_131964:
    // 0x131964: 0x40f809  jalr        $v0
label_131968:
    if (ctx->pc == 0x131968u) {
        ctx->pc = 0x13196Cu;
        goto label_13196c;
    }
    ctx->pc = 0x131964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13196Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131964u, 0x13196Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13196Cu;
label_13196c:
    // 0x13196c: 0xc04c82c  jal         func_1320B0
label_131970:
    if (ctx->pc == 0x131970u) {
        ctx->pc = 0x131970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13196Cu;
        // 0x131970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131974u;
        goto label_131974;
    }
    ctx->pc = 0x13196Cu;
    SET_GPR_U32(ctx, 31, 0x131974u);
    ctx->pc = 0x131970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13196Cu;
    // 0x131970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1320B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1320B0u, 0x13196Cu, 0x131974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131974u;
label_131974:
    // 0x131974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131978:
    // 0x131978: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x131978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13197c:
    // 0x13197c: 0x3e00008  jr          $ra
label_131980:
    if (ctx->pc == 0x131980u) {
        ctx->pc = 0x131980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13197Cu;
        // 0x131980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131984u;
        goto label_131984;
    }
    ctx->pc = 0x13197Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13197Cu;
        // 0x131980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13197Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131984u;
label_131984:
    // 0x131984: 0x0  nop
    ctx->pc = 0x131984u;
    // NOP
    ctx->pc = 0x131988u;
}
