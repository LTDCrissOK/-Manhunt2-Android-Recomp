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

// Function: sub_002176D0
// Address: 0x2176d0 - 0x217798
void sub_002176D0_0x2176d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002176D0_0x2176d0");
#endif

    switch (ctx->pc) {
        case 0x2176f4u: goto label_2176f4;
        case 0x217708u: goto label_217708;
        case 0x217720u: goto label_217720;
        case 0x217738u: goto label_217738;
        case 0x21774cu: goto label_21774c;
        case 0x217768u: goto label_217768;
        case 0x21777cu: goto label_21777c;
        default: break;
    }

    ctx->pc = 0x2176d0u;

label_2176d0:
    // 0x2176d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2176d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2176d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2176d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2176d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2176d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2176dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2176dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2176e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2176e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2176e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2176e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2176ec: 0xc0c4882  jal         func_312208
    ctx->pc = 0x2176ECu;
    SET_GPR_U32(ctx, 31, 0x2176F4u);
    ctx->pc = 0x2176F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2176ECu;
    // 0x2176f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312208u, 0x2176ECu, 0x2176F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2176F4u;
label_2176f4:
    // 0x2176f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2176f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2176f8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2176f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2176fc: 0x24a515d8  addiu       $a1, $a1, 0x15D8
    ctx->pc = 0x2176fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5592));
    // 0x217700: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x217700u;
    SET_GPR_U32(ctx, 31, 0x217708u);
    ctx->pc = 0x217704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217700u;
    // 0x217704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x217700u, 0x217708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217708u;
label_217708:
    // 0x217708: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x217708u;
    {
        const bool branch_taken_0x217708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217708) {
            ctx->pc = 0x21770Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217708u;
            // 0x21770c: 0x3c050021  lui         $a1, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217728u;
            goto label_217728;
        }
    }
    ctx->pc = 0x217710u;
    // 0x217710: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x217710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x217714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217718: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x217718u;
    SET_GPR_U32(ctx, 31, 0x217720u);
    ctx->pc = 0x21771Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217718u;
    // 0x21771c: 0x24a515e0  addiu       $a1, $a1, 0x15E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x217718u, 0x217720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217720u;
label_217720:
    // 0x217720: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x217720u;
    {
        const bool branch_taken_0x217720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217720u;
        // 0x217724: 0x3c050021  lui         $a1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217720) {
            ctx->pc = 0x217754u;
            goto label_217754;
        }
    }
    ctx->pc = 0x217728u;
label_217728:
    // 0x217728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x217728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21772c: 0x24a57698  addiu       $a1, $a1, 0x7698
    ctx->pc = 0x21772cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30360));
    // 0x217730: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x217730u;
    SET_GPR_U32(ctx, 31, 0x217738u);
    ctx->pc = 0x217734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217730u;
    // 0x217734: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x217730u, 0x217738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217738u;
label_217738:
    // 0x217738: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x217738u;
    {
        const bool branch_taken_0x217738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x217738) {
            ctx->pc = 0x21773Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217738u;
            // 0x21773c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217780u;
            goto label_217780;
        }
    }
    ctx->pc = 0x217740u;
    // 0x217740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217744: 0xc0c4858  jal         func_312160
    ctx->pc = 0x217744u;
    SET_GPR_U32(ctx, 31, 0x21774Cu);
    ctx->pc = 0x217748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217744u;
    // 0x217748: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x217744u, 0x21774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21774Cu;
label_21774c:
    // 0x21774c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21774Cu;
    {
        const bool branch_taken_0x21774c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21774Cu;
        // 0x217750: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21774c) {
            ctx->pc = 0x217780u;
            goto label_217780;
        }
    }
    ctx->pc = 0x217754u;
label_217754:
    // 0x217754: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x217754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x217758: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x217758u;
    {
        const bool branch_taken_0x217758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x217758) {
            ctx->pc = 0x21775Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217758u;
            // 0x21775c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21776Cu;
            goto label_21776c;
        }
    }
    ctx->pc = 0x217760u;
    // 0x217760: 0xc085db4  jal         func_2176D0
    ctx->pc = 0x217760u;
    SET_GPR_U32(ctx, 31, 0x217768u);
    ctx->pc = 0x217764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217760u;
    // 0x217764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2176D0u;
    goto label_2176d0;
    ctx->pc = 0x217768u;
label_217768:
    // 0x217768: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x217768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_21776c:
    // 0x21776c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21776Cu;
    {
        const bool branch_taken_0x21776c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x217770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21776Cu;
        // 0x217770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21776c) {
            ctx->pc = 0x217780u;
            goto label_217780;
        }
    }
    ctx->pc = 0x217774u;
    // 0x217774: 0xc085db4  jal         func_2176D0
    ctx->pc = 0x217774u;
    SET_GPR_U32(ctx, 31, 0x21777Cu);
    ctx->pc = 0x217778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217774u;
    // 0x217778: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2176D0u;
    goto label_2176d0;
    ctx->pc = 0x21777Cu;
label_21777c:
    // 0x21777c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21777cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_217780:
    // 0x217780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217784: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217788: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x217788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21778c: 0x3e00008  jr          $ra
    ctx->pc = 0x21778Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21778Cu;
        // 0x217790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21778Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217794u;
    // 0x217794: 0x0  nop
    ctx->pc = 0x217794u;
    // NOP
    ctx->pc = 0x217798u;
}
