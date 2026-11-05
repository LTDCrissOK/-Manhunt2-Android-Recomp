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

// Function: sub_00220448
// Address: 0x220448 - 0x220548
void sub_00220448_0x220448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220448_0x220448");
#endif

    switch (ctx->pc) {
        case 0x22046cu: goto label_22046c;
        case 0x22048cu: goto label_22048c;
        case 0x22049cu: goto label_22049c;
        case 0x2204acu: goto label_2204ac;
        case 0x2204bcu: goto label_2204bc;
        case 0x2204c4u: goto label_2204c4;
        case 0x2204d0u: goto label_2204d0;
        case 0x220500u: goto label_220500;
        case 0x220514u: goto label_220514;
        default: break;
    }

    ctx->pc = 0x220448u;

    // 0x220448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x220448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22044c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x220450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220454: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x220454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x220458: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x220458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22045c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22045cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x220460: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x220460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x220464: 0xc0878f2  jal         func_21E3C8
    ctx->pc = 0x220464u;
    SET_GPR_U32(ctx, 31, 0x22046Cu);
    ctx->pc = 0x220468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220464u;
    // 0x220468: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E3C8u, 0x220464u, 0x22046Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22046Cu;
label_22046c:
    // 0x22046c: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x22046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x220470: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x220470u;
    {
        const bool branch_taken_0x220470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220470u;
        // 0x220474: 0x3c10006c  lui         $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220470) {
            ctx->pc = 0x2204BCu;
            goto label_2204bc;
        }
    }
    ctx->pc = 0x220478u;
    // 0x220478: 0x8e2601b8  lw          $a2, 0x1B8($s1)
    ctx->pc = 0x220478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x22047c: 0x2610ac40  addiu       $s0, $s0, -0x53C0
    ctx->pc = 0x22047cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945856));
    // 0x220480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220484: 0xc087996  jal         func_21E658
    ctx->pc = 0x220484u;
    SET_GPR_U32(ctx, 31, 0x22048Cu);
    ctx->pc = 0x220488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220484u;
    // 0x220488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x220484u, 0x22048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22048Cu;
label_22048c:
    // 0x22048c: 0x8e2601c0  lw          $a2, 0x1C0($s1)
    ctx->pc = 0x22048cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 448)));
    // 0x220490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220494: 0xc087996  jal         func_21E658
    ctx->pc = 0x220494u;
    SET_GPR_U32(ctx, 31, 0x22049Cu);
    ctx->pc = 0x220498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220494u;
    // 0x220498: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x220494u, 0x22049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22049Cu;
label_22049c:
    // 0x22049c: 0x8e2601c8  lw          $a2, 0x1C8($s1)
    ctx->pc = 0x22049cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x2204a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2204a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204a4: 0xc087996  jal         func_21E658
    ctx->pc = 0x2204A4u;
    SET_GPR_U32(ctx, 31, 0x2204ACu);
    ctx->pc = 0x2204A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204A4u;
    // 0x2204a8: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x2204A4u, 0x2204ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2204ACu;
label_2204ac:
    // 0x2204ac: 0x8e2601d0  lw          $a2, 0x1D0($s1)
    ctx->pc = 0x2204acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 464)));
    // 0x2204b0: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x2204b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2204b4: 0xc087996  jal         func_21E658
    ctx->pc = 0x2204B4u;
    SET_GPR_U32(ctx, 31, 0x2204BCu);
    ctx->pc = 0x2204B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204B4u;
    // 0x2204b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x2204B4u, 0x2204BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2204BCu;
label_2204bc:
    // 0x2204bc: 0xc0c3158  jal         func_30C560
    ctx->pc = 0x2204BCu;
    SET_GPR_U32(ctx, 31, 0x2204C4u);
    ctx->pc = 0x2204C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204BCu;
    // 0x2204c0: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x2204BCu, 0x2204C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2204C4u;
label_2204c4:
    // 0x2204c4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2204c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2204c8: 0xc0c49d2  jal         func_312748
    ctx->pc = 0x2204C8u;
    SET_GPR_U32(ctx, 31, 0x2204D0u);
    ctx->pc = 0x2204CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204C8u;
    // 0x2204cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312748u, 0x2204C8u, 0x2204D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2204D0u;
label_2204d0:
    // 0x2204d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2204d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204d4: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x2204d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2204d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2204D8u;
    {
        const bool branch_taken_0x2204d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2204DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204D8u;
        // 0x2204dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204d8) {
            ctx->pc = 0x2204E4u;
            goto label_2204e4;
        }
    }
    ctx->pc = 0x2204E0u;
    // 0x2204e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2204e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2204e4:
    // 0x2204e4: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x2204e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x2204e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2204e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2204ECu;
    {
        const bool branch_taken_0x2204ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2204F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204ECu;
        // 0x2204f0: 0xae2401f0  sw          $a0, 0x1F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204ec) {
            ctx->pc = 0x220528u;
            goto label_220528;
        }
    }
    ctx->pc = 0x2204F4u;
    // 0x2204f4: 0x3c14004a  lui         $s4, 0x4A
    ctx->pc = 0x2204f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)74 << 16));
    // 0x2204f8: 0x263201f4  addiu       $s2, $s1, 0x1F4
    ctx->pc = 0x2204f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 500));
    // 0x2204fc: 0x263001d8  addiu       $s0, $s1, 0x1D8
    ctx->pc = 0x2204fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
label_220500:
    // 0x220500: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x220500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x220504: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x220504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x220508: 0x8e843578  lw          $a0, 0x3578($s4)
    ctx->pc = 0x220508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 13688)));
    // 0x22050c: 0xc0c7a76  jal         func_31E9D8
    ctx->pc = 0x22050Cu;
    SET_GPR_U32(ctx, 31, 0x220514u);
    ctx->pc = 0x220510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22050Cu;
    // 0x220510: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x22050Cu, 0x220514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220514u;
label_220514:
    // 0x220514: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x220514u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x220518: 0x8e220200  lw          $v0, 0x200($s1)
    ctx->pc = 0x220518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x22051c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x22051cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x220520: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x220520u;
    {
        const bool branch_taken_0x220520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220520u;
        // 0x220524: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220520) {
            ctx->pc = 0x220500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220500;
        }
    }
    ctx->pc = 0x220528u;
label_220528:
    // 0x220528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22052c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22052cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220530: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x220530u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220534: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x220534u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220538: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x220538u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22053c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x22053cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x220540: 0x3e00008  jr          $ra
    ctx->pc = 0x220540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220540u;
        // 0x220544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220548u;
}
