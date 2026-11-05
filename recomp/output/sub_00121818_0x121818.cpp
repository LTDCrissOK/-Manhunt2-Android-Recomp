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

// Function: sub_00121818
// Address: 0x121818 - 0x1218b8
void sub_00121818_0x121818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121818_0x121818");
#endif

    switch (ctx->pc) {
        case 0x121848u: goto label_121848;
        case 0x121858u: goto label_121858;
        case 0x121868u: goto label_121868;
        case 0x121878u: goto label_121878;
        case 0x121890u: goto label_121890;
        default: break;
    }

    ctx->pc = 0x121818u;

    // 0x121818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12181c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x121820: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121824: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x121824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121828: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12182c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12182cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121830: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x121830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x121834: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x121834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12183c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12183cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121840: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121840u;
    SET_GPR_U32(ctx, 31, 0x121848u);
    ctx->pc = 0x121844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121840u;
    // 0x121844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121840u, 0x121848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121848u;
label_121848:
    // 0x121848: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x121848u;
    {
        const bool branch_taken_0x121848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121848u;
        // 0x12184c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121848) {
            ctx->pc = 0x12189Cu;
            goto label_12189c;
        }
    }
    ctx->pc = 0x121850u;
    // 0x121850: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121850u;
    SET_GPR_U32(ctx, 31, 0x121858u);
    ctx->pc = 0x121854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121850u;
    // 0x121854: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121850u, 0x121858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121858u;
label_121858:
    // 0x121858: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x121858u;
    {
        const bool branch_taken_0x121858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121858u;
        // 0x12185c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121858) {
            ctx->pc = 0x12189Cu;
            goto label_12189c;
        }
    }
    ctx->pc = 0x121860u;
    // 0x121860: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121860u;
    SET_GPR_U32(ctx, 31, 0x121868u);
    ctx->pc = 0x121864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121860u;
    // 0x121864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121860u, 0x121868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121868u;
label_121868:
    // 0x121868: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121868u;
    {
        const bool branch_taken_0x121868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121868u;
        // 0x12186c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121868) {
            ctx->pc = 0x121898u;
            goto label_121898;
        }
    }
    ctx->pc = 0x121870u;
    // 0x121870: 0xc049986  jal         func_126618
    ctx->pc = 0x121870u;
    SET_GPR_U32(ctx, 31, 0x121878u);
    ctx->pc = 0x121874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121870u;
    // 0x121874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126618u, 0x121870u, 0x121878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121878u;
label_121878:
    // 0x121878: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x121878u;
    {
        const bool branch_taken_0x121878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121878u;
        // 0x12187c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121878) {
            ctx->pc = 0x121898u;
            goto label_121898;
        }
    }
    ctx->pc = 0x121880u;
    // 0x121880: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x121880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x121884: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x121884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121888: 0xc042782  jal         func_109E08
    ctx->pc = 0x121888u;
    SET_GPR_U32(ctx, 31, 0x121890u);
    ctx->pc = 0x12188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121888u;
    // 0x12188c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109E08u, 0x121888u, 0x121890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121890u;
label_121890:
    // 0x121890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121890u;
    {
        const bool branch_taken_0x121890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121890u;
        // 0x121894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121890) {
            ctx->pc = 0x1218A0u;
            goto label_1218a0;
        }
    }
    ctx->pc = 0x121898u;
label_121898:
    // 0x121898: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x121898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12189c:
    // 0x12189c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12189cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1218a0:
    // 0x1218a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1218a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1218a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1218a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1218a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1218a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1218ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1218acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1218b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1218B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1218B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1218B0u;
        // 0x1218b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1218B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1218B8u;
}
