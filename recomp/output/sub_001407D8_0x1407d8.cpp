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

// Function: sub_001407D8
// Address: 0x1407d8 - 0x140890
void sub_001407D8_0x1407d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001407D8_0x1407d8");
#endif

    switch (ctx->pc) {
        case 0x140824u: goto label_140824;
        case 0x140834u: goto label_140834;
        case 0x140864u: goto label_140864;
        case 0x14087cu: goto label_14087c;
        default: break;
    }

    ctx->pc = 0x1407d8u;

    // 0x1407d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1407d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1407dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1407dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1407e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1407e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1407e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1407e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1407e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1407e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1407ec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1407ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1407f0: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1407f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x1407f4: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x1407f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1407f8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1407f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1407fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1407fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140804: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x140804u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140808: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x140808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14080c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x140810: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x140810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x140814: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x140814u;
    {
        const bool branch_taken_0x140814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x140814) {
            ctx->pc = 0x140818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140814u;
            // 0x140818: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140880u;
            goto label_140880;
        }
    }
    ctx->pc = 0x14081Cu;
    // 0x14081c: 0xc043996  jal         func_10E658
    ctx->pc = 0x14081Cu;
    SET_GPR_U32(ctx, 31, 0x140824u);
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x14081Cu, 0x140824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140824u;
label_140824:
    // 0x140824: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x140824u;
    {
        const bool branch_taken_0x140824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140824u;
        // 0x140828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140824) {
            ctx->pc = 0x14086Cu;
            goto label_14086c;
        }
    }
    ctx->pc = 0x14082Cu;
    // 0x14082c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x14082Cu;
    SET_GPR_U32(ctx, 31, 0x140834u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x14082Cu, 0x140834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140834u;
label_140834:
    // 0x140834: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x140834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x140838: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x140838u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14083c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14083Cu;
    {
        const bool branch_taken_0x14083c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14083c) {
            ctx->pc = 0x140840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14083Cu;
            // 0x140840: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x140844u;
            goto label_140844;
        }
    }
    ctx->pc = 0x140844u;
label_140844:
    // 0x140844: 0x2010  mfhi        $a0
    ctx->pc = 0x140844u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x140848: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x140848u;
    {
        const bool branch_taken_0x140848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x140848) {
            ctx->pc = 0x14084Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140848u;
            // 0x14084c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140880u;
            goto label_140880;
        }
    }
    ctx->pc = 0x140850u;
    // 0x140850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x140850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140854: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x140854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140858: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x140858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14085c: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x14085Cu;
    SET_GPR_U32(ctx, 31, 0x140864u);
    ctx->pc = 0x140860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14085Cu;
    // 0x140860: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x14085Cu, 0x140864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140864u;
label_140864:
    // 0x140864: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x140864u;
    {
        const bool branch_taken_0x140864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140864u;
        // 0x140868: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140864) {
            ctx->pc = 0x140880u;
            goto label_140880;
        }
    }
    ctx->pc = 0x14086Cu;
label_14086c:
    // 0x14086c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14086cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140870: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x140870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x140874: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x140874u;
    SET_GPR_U32(ctx, 31, 0x14087Cu);
    ctx->pc = 0x140878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140874u;
    // 0x140878: 0x24070017  addiu       $a3, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x140874u, 0x14087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14087Cu;
label_14087c:
    // 0x14087c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14087cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140880:
    // 0x140880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x140880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140884: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140888: 0x3e00008  jr          $ra
    ctx->pc = 0x140888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140888u;
        // 0x14088c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140890u;
}
