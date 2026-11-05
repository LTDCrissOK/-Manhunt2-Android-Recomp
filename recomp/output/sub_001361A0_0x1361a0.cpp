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

// Function: sub_001361A0
// Address: 0x1361a0 - 0x136228
void sub_001361A0_0x1361a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001361A0_0x1361a0");
#endif

    switch (ctx->pc) {
        case 0x1361a0u: goto label_1361a0;
        case 0x1361a4u: goto label_1361a4;
        case 0x1361a8u: goto label_1361a8;
        case 0x1361acu: goto label_1361ac;
        case 0x1361b0u: goto label_1361b0;
        case 0x1361b4u: goto label_1361b4;
        case 0x1361b8u: goto label_1361b8;
        case 0x1361bcu: goto label_1361bc;
        case 0x1361c0u: goto label_1361c0;
        case 0x1361c4u: goto label_1361c4;
        case 0x1361c8u: goto label_1361c8;
        case 0x1361ccu: goto label_1361cc;
        case 0x1361d0u: goto label_1361d0;
        case 0x1361d4u: goto label_1361d4;
        case 0x1361d8u: goto label_1361d8;
        case 0x1361dcu: goto label_1361dc;
        case 0x1361e0u: goto label_1361e0;
        case 0x1361e4u: goto label_1361e4;
        case 0x1361e8u: goto label_1361e8;
        case 0x1361ecu: goto label_1361ec;
        case 0x1361f0u: goto label_1361f0;
        case 0x1361f4u: goto label_1361f4;
        case 0x1361f8u: goto label_1361f8;
        case 0x1361fcu: goto label_1361fc;
        case 0x136200u: goto label_136200;
        case 0x136204u: goto label_136204;
        case 0x136208u: goto label_136208;
        case 0x13620cu: goto label_13620c;
        case 0x136210u: goto label_136210;
        case 0x136214u: goto label_136214;
        case 0x136218u: goto label_136218;
        case 0x13621cu: goto label_13621c;
        case 0x136220u: goto label_136220;
        case 0x136224u: goto label_136224;
        default: break;
    }

    ctx->pc = 0x1361a0u;

label_1361a0:
    // 0x1361a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1361a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1361a4:
    // 0x1361a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1361a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1361a8:
    // 0x1361a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1361a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1361ac:
    // 0x1361ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1361acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1361b0:
    // 0x1361b0: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1361b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1361b4:
    // 0x1361b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1361b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1361b8:
    // 0x1361b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1361b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1361bc:
    // 0x1361bc: 0xc04d8dc  jal         func_136370
label_1361c0:
    if (ctx->pc == 0x1361C0u) {
        ctx->pc = 0x1361C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361BCu;
        // 0x1361c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1361C4u;
        goto label_1361c4;
    }
    ctx->pc = 0x1361BCu;
    SET_GPR_U32(ctx, 31, 0x1361C4u);
    ctx->pc = 0x1361C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1361BCu;
    // 0x1361c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x1361BCu, 0x1361C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1361C4u;
label_1361c4:
    // 0x1361c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1361c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1361c8:
    // 0x1361c8: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_1361cc:
    if (ctx->pc == 0x1361CCu) {
        ctx->pc = 0x1361CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361C8u;
        // 0x1361cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1361D0u;
        goto label_1361d0;
    }
    ctx->pc = 0x1361C8u;
    {
        const bool branch_taken_0x1361c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1361CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361C8u;
        // 0x1361cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1361c8) {
            ctx->pc = 0x136214u;
            goto label_136214;
        }
    }
    ctx->pc = 0x1361D0u;
label_1361d0:
    // 0x1361d0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1361d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1361d4:
    // 0x1361d4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1361d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1361d8:
    // 0x1361d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1361d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1361dc:
    // 0x1361dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1361dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1361e0:
    // 0x1361e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1361e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1361e4:
    // 0x1361e4: 0xc04d8f8  jal         func_1363E0
label_1361e8:
    if (ctx->pc == 0x1361E8u) {
        ctx->pc = 0x1361E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361E4u;
        // 0x1361e8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1361ECu;
        goto label_1361ec;
    }
    ctx->pc = 0x1361E4u;
    SET_GPR_U32(ctx, 31, 0x1361ECu);
    ctx->pc = 0x1361E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1361E4u;
    // 0x1361e8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x1361E4u, 0x1361ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1361ECu;
label_1361ec:
    // 0x1361ec: 0x8e240464  lw          $a0, 0x464($s1)
    ctx->pc = 0x1361ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1124)));
label_1361f0:
    // 0x1361f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1361f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1361f4:
    // 0x1361f4: 0xc043bb6  jal         func_10EED8
label_1361f8:
    if (ctx->pc == 0x1361F8u) {
        ctx->pc = 0x1361F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1361F4u;
        // 0x1361f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1361FCu;
        goto label_1361fc;
    }
    ctx->pc = 0x1361F4u;
    SET_GPR_U32(ctx, 31, 0x1361FCu);
    ctx->pc = 0x1361F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1361F4u;
    // 0x1361f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EED8u, 0x1361F4u, 0x1361FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1361FCu;
label_1361fc:
    // 0x1361fc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1361fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_136200:
    // 0x136200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136204:
    // 0x136204: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x136204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_136208:
    // 0x136208: 0x40f809  jalr        $v0
label_13620c:
    if (ctx->pc == 0x13620Cu) {
        ctx->pc = 0x13620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136208u;
        // 0x13620c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136210u;
        goto label_136210;
    }
    ctx->pc = 0x136208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x136210u);
        ctx->pc = 0x13620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136208u;
        // 0x13620c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136208u, 0x136210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136210u;
label_136210:
    // 0x136210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_136214:
    // 0x136214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_136218:
    // 0x136218: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13621c:
    // 0x13621c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13621cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_136220:
    // 0x136220: 0x3e00008  jr          $ra
label_136224:
    if (ctx->pc == 0x136224u) {
        ctx->pc = 0x136224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136220u;
        // 0x136224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136228u;
        goto label_fallthrough_0x136220;
    }
    ctx->pc = 0x136220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136220u;
        // 0x136224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x136220:
    ctx->pc = 0x136228u;
}
