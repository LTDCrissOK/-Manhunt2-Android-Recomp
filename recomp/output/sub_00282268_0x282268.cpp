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

// Function: sub_00282268
// Address: 0x282268 - 0x282338
void sub_00282268_0x282268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282268_0x282268");
#endif

    switch (ctx->pc) {
        case 0x2822c0u: goto label_2822c0;
        case 0x2822ccu: goto label_2822cc;
        case 0x2822f0u: goto label_2822f0;
        default: break;
    }

    ctx->pc = 0x282268u;

    // 0x282268: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x282268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28226c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28226cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x282270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282274: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x282274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x282278: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x282278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28227c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28227cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x282280: 0x2451a370  addiu       $s1, $v0, -0x5C90
    ctx->pc = 0x282280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943600));
    // 0x282284: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x282284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x282288: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x282288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28228c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28228cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x282290: 0x2413002b  addiu       $s3, $zero, 0x2B
    ctx->pc = 0x282290u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x282294: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x282294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x282298: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x282298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28229c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x28229cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2822a0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2822a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822a4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2822a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2822a8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2822a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822ac: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2822acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2822b0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2822b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822b4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2822b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2822b8: 0x3c1e006c  lui         $fp, 0x6C
    ctx->pc = 0x2822b8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
    // 0x2822bc: 0x0  nop
    ctx->pc = 0x2822bcu;
    // NOP
label_2822c0:
    // 0x2822c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2822c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2822c4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2822C4u;
    SET_GPR_U32(ctx, 31, 0x2822CCu);
    ctx->pc = 0x2822C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2822C4u;
    // 0x2822c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2822C4u, 0x2822CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2822CCu;
label_2822cc:
    // 0x2822cc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2822CCu;
    {
        const bool branch_taken_0x2822cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2822cc) {
            ctx->pc = 0x2822D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2822CCu;
            // 0x2822d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2822F8u;
            goto label_2822f8;
        }
    }
    ctx->pc = 0x2822D4u;
    // 0x2822d4: 0x27c4bf78  addiu       $a0, $fp, -0x4088
    ctx->pc = 0x2822d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294950776));
    // 0x2822d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2822d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2822dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822e0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2822e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822e4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2822e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822e8: 0xc0a0892  jal         func_282248
    ctx->pc = 0x2822E8u;
    SET_GPR_U32(ctx, 31, 0x2822F0u);
    ctx->pc = 0x2822ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2822E8u;
    // 0x2822ec: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282248u, 0x2822E8u, 0x2822F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2822F0u;
label_2822f0:
    // 0x2822f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2822F0u;
    {
        const bool branch_taken_0x2822f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2822F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822F0u;
        // 0x2822f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822f0) {
            ctx->pc = 0x282304u;
            goto label_282304;
        }
    }
    ctx->pc = 0x2822F8u;
label_2822f8:
    // 0x2822f8: 0x1613fff1  bne         $s0, $s3, . + 4 + (-0xF << 2)
    ctx->pc = 0x2822F8u;
    {
        const bool branch_taken_0x2822f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x2822FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2822F8u;
        // 0x2822fc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2822f8) {
            ctx->pc = 0x2822C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2822c0;
        }
    }
    ctx->pc = 0x282300u;
    // 0x282300: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282300u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282304:
    // 0x282304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x282308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28230c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28230cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282310: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x282310u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282314: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x282314u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282318: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x282318u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28231c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x28231cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282320: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x282320u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x282324: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x282324u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282328: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x282328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28232c: 0x3e00008  jr          $ra
    ctx->pc = 0x28232Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28232Cu;
        // 0x282330: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28232Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282334u;
    // 0x282334: 0x0  nop
    ctx->pc = 0x282334u;
    // NOP
    ctx->pc = 0x282338u;
}
