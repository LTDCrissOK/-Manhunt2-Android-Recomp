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

// Function: sub_0015A220
// Address: 0x15a220 - 0x15a2f8
void sub_0015A220_0x15a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A220_0x15a220");
#endif

    switch (ctx->pc) {
        case 0x15a248u: goto label_15a248;
        case 0x15a260u: goto label_15a260;
        case 0x15a270u: goto label_15a270;
        case 0x15a284u: goto label_15a284;
        case 0x15a298u: goto label_15a298;
        case 0x15a2a8u: goto label_15a2a8;
        case 0x15a2c4u: goto label_15a2c4;
        case 0x15a2ccu: goto label_15a2cc;
        case 0x15a2d4u: goto label_15a2d4;
        default: break;
    }

    ctx->pc = 0x15a220u;

    // 0x15a220: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x15a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x15a224: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x15a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x15a228: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15a228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a22c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x15a22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x15a230: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x15a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x15a234: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x15a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x15a238: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x15a238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x15a23c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x15a23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x15a240: 0xc056bb4  jal         func_15AED0
    ctx->pc = 0x15A240u;
    SET_GPR_U32(ctx, 31, 0x15A248u);
    ctx->pc = 0x15A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A240u;
    // 0x15a244: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AED0u, 0x15A240u, 0x15A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A248u;
label_15a248:
    // 0x15a248: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x15a248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x15a24c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15a250: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x15a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x15a254: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15a254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a258: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x15A258u;
    SET_GPR_U32(ctx, 31, 0x15A260u);
    ctx->pc = 0x15A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A258u;
    // 0x15a25c: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B958u, 0x15A258u, 0x15A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A260u;
label_15a260:
    // 0x15a260: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15a260u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a264: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x15A264u;
    {
        const bool branch_taken_0x15a264 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A264u;
        // 0x15a268: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a264) {
            ctx->pc = 0x15A2BCu;
            goto label_15a2bc;
        }
    }
    ctx->pc = 0x15A26Cu;
    // 0x15a26c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15a270:
    // 0x15a270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a274: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x15a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x15a278: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x15a278u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a27c: 0xc056c32  jal         func_15B0C8
    ctx->pc = 0x15A27Cu;
    SET_GPR_U32(ctx, 31, 0x15A284u);
    ctx->pc = 0x15A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A27Cu;
    // 0x15a280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0C8u, 0x15A27Cu, 0x15A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A284u;
label_15a284:
    // 0x15a284: 0x14540006  bne         $v0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A284u;
    {
        const bool branch_taken_0x15a284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x15A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A284u;
        // 0x15a288: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a284) {
            ctx->pc = 0x15A2A0u;
            goto label_15a2a0;
        }
    }
    ctx->pc = 0x15A28Cu;
    // 0x15a28c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a290: 0xc056c4a  jal         func_15B128
    ctx->pc = 0x15A290u;
    SET_GPR_U32(ctx, 31, 0x15A298u);
    ctx->pc = 0x15A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A290u;
    // 0x15a294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B128u, 0x15A290u, 0x15A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A298u;
label_15a298:
    // 0x15a298: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15A298u;
    {
        const bool branch_taken_0x15a298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A298u;
        // 0x15a29c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a298) {
            ctx->pc = 0x15A2ACu;
            goto label_15a2ac;
        }
    }
    ctx->pc = 0x15A2A0u;
label_15a2a0:
    // 0x15a2a0: 0xc056ce0  jal         func_15B380
    ctx->pc = 0x15A2A0u;
    SET_GPR_U32(ctx, 31, 0x15A2A8u);
    ctx->pc = 0x15A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A2A0u;
    // 0x15a2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B380u, 0x15A2A0u, 0x15A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A2A8u;
label_15a2a8:
    // 0x15a2a8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15a2ac:
    // 0x15a2ac: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x15a2acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15a2b0: 0x253182b  sltu        $v1, $s2, $s3
    ctx->pc = 0x15a2b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x15a2b4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15A2B4u;
    {
        const bool branch_taken_0x15a2b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A2B4u;
        // 0x15a2b8: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a2b4) {
            ctx->pc = 0x15A270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a270;
        }
    }
    ctx->pc = 0x15A2BCu;
label_15a2bc:
    // 0x15a2bc: 0xc056bc4  jal         func_15AF10
    ctx->pc = 0x15A2BCu;
    SET_GPR_U32(ctx, 31, 0x15A2C4u);
    ctx->pc = 0x15A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A2BCu;
    // 0x15a2c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AF10u, 0x15A2BCu, 0x15A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A2C4u;
label_15a2c4:
    // 0x15a2c4: 0xc0569cc  jal         func_15A730
    ctx->pc = 0x15A2C4u;
    SET_GPR_U32(ctx, 31, 0x15A2CCu);
    ctx->pc = 0x15A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A2C4u;
    // 0x15a2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A730u, 0x15A2C4u, 0x15A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A2CCu;
label_15a2cc:
    // 0x15a2cc: 0xc056d06  jal         func_15B418
    ctx->pc = 0x15A2CCu;
    SET_GPR_U32(ctx, 31, 0x15A2D4u);
    ctx->pc = 0x15A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A2CCu;
    // 0x15a2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B418u, 0x15A2CCu, 0x15A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A2D4u;
label_15a2d4:
    // 0x15a2d4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x15a2d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15a2d8: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x15a2d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x15a2dc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x15a2dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15a2e0: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x15a2e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x15a2e4: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x15a2e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15a2e8: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x15a2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x15a2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15A2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A2ECu;
        // 0x15a2f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A2F4u;
    // 0x15a2f4: 0x0  nop
    ctx->pc = 0x15a2f4u;
    // NOP
    ctx->pc = 0x15a2f8u;
}
