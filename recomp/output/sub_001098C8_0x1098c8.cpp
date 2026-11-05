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

// Function: sub_001098C8
// Address: 0x1098c8 - 0x109968
void sub_001098C8_0x1098c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001098C8_0x1098c8");
#endif

    switch (ctx->pc) {
        case 0x1098f0u: goto label_1098f0;
        case 0x109920u: goto label_109920;
        case 0x109948u: goto label_109948;
        default: break;
    }

    ctx->pc = 0x1098c8u;

    // 0x1098c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1098c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1098cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1098ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1098d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1098d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1098d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1098d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1098d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1098dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1098dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1098e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1098e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1098e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1098e8: 0xc043366  jal         func_10CD98
    ctx->pc = 0x1098E8u;
    SET_GPR_U32(ctx, 31, 0x1098F0u);
    ctx->pc = 0x1098ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098E8u;
    // 0x1098ec: 0x2612000c  addiu       $s2, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x1098E8u, 0x1098F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098F0u;
label_1098f0:
    // 0x1098f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1098f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1098f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1098f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1098f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1098f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1098fc: 0x8c71001c  lw          $s1, 0x1C($v1)
    ctx->pc = 0x1098fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109900: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x109900u;
    {
        const bool branch_taken_0x109900 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x109904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109900u;
        // 0x109904: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109900) {
            ctx->pc = 0x10994Cu;
            goto label_10994c;
        }
    }
    ctx->pc = 0x109908u;
    // 0x109908: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x109908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
    // 0x10990c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10990Cu;
    {
        const bool branch_taken_0x10990c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10990Cu;
        // 0x109910: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10990c) {
            ctx->pc = 0x10994Cu;
            goto label_10994c;
        }
    }
    ctx->pc = 0x109914u;
    // 0x109914: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109918: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109918u;
    SET_GPR_U32(ctx, 31, 0x109920u);
    ctx->pc = 0x10991Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109918u;
    // 0x10991c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109918u, 0x109920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109920u;
label_109920:
    // 0x109920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109924: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x109924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x109928: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10992c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x10992cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109930: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x109930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x109934: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109934u;
    {
        const bool branch_taken_0x109934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109934u;
        // 0x109938: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109934) {
            ctx->pc = 0x10994Cu;
            goto label_10994c;
        }
    }
    ctx->pc = 0x10993Cu;
    // 0x10993c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x10993cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x109940: 0xc0440c8  jal         func_110320
    ctx->pc = 0x109940u;
    SET_GPR_U32(ctx, 31, 0x109948u);
    ctx->pc = 0x109944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109940u;
    // 0x109944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110320u, 0x109940u, 0x109948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109948u;
label_109948:
    // 0x109948: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10994c:
    // 0x10994c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10994cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109950: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x109950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x109954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109958: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x109958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10995c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10995cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109960: 0x3e00008  jr          $ra
    ctx->pc = 0x109960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109960u;
        // 0x109964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109968u;
}
