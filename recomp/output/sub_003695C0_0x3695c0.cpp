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

// Function: sub_003695C0
// Address: 0x3695c0 - 0x369668
void sub_003695C0_0x3695c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003695C0_0x3695c0");
#endif

    switch (ctx->pc) {
        case 0x3695f4u: goto label_3695f4;
        case 0x369610u: goto label_369610;
        case 0x36961cu: goto label_36961c;
        default: break;
    }

    ctx->pc = 0x3695c0u;

    // 0x3695c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3695c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3695c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3695c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3695c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3695c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3695cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3695ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3695d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3695d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3695d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3695d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3695d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3695d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3695dc: 0x2451ca60  addiu       $s1, $v0, -0x35A0
    ctx->pc = 0x3695dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x3695e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3695e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3695e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3695e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3695e8: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x3695e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x6BCA80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA80u, _value); } while (0);
    // 0x3695ec: 0xc0db160  jal         func_36C580
    ctx->pc = 0x3695ECu;
    SET_GPR_U32(ctx, 31, 0x3695F4u);
    ctx->pc = 0x3695F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3695ECu;
    // 0x3695f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x3695ECu, 0x3695F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3695F4u;
label_3695f4:
    // 0x3695f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3695f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3695f8: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3695F8u;
    {
        const bool branch_taken_0x3695f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x3695FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3695F8u;
        // 0x3695fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3695f8) {
            ctx->pc = 0x36961Cu;
            goto label_36961c;
        }
    }
    ctx->pc = 0x369600u;
    // 0x369600: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x369600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369604: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x369604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369608: 0xc0dd636  jal         func_3758D8
    ctx->pc = 0x369608u;
    SET_GPR_U32(ctx, 31, 0x369610u);
    ctx->pc = 0x36960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369608u;
    // 0x36960c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3758D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3758D8u, 0x369608u, 0x369610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369610u;
label_369610:
    // 0x369610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x369610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369614: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x369614u;
    SET_GPR_U32(ctx, 31, 0x36961Cu);
    ctx->pc = 0x369618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369614u;
    // 0x369618: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x369614u, 0x36961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36961Cu;
label_36961c:
    // 0x36961c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x36961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x369620: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x369620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x369624: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x369624u;
    {
        const bool branch_taken_0x369624 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x369628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369624u;
        // 0x369628: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369624) {
            ctx->pc = 0x36963Cu;
            goto label_36963c;
        }
    }
    ctx->pc = 0x36962Cu;
    // 0x36962c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369630: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369630u;
    {
        const bool branch_taken_0x369630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x369634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369630u;
        // 0x369634: 0x2643ca60  addiu       $v1, $s2, -0x35A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369630) {
            ctx->pc = 0x369644u;
            goto label_369644;
        }
    }
    ctx->pc = 0x369638u;
    // 0x369638: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x369638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_36963c:
    // 0x36963c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x36963cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x369640: 0x2643ca60  addiu       $v1, $s2, -0x35A0
    ctx->pc = 0x369640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953568));
label_369644:
    // 0x369644: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x369644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x369648: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x369648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x36964c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36964cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x369650: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x369650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x369654: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x369654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x369658: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x369658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x36965c: 0x3e00008  jr          $ra
    ctx->pc = 0x36965Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36965Cu;
        // 0x369660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36965Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369664u;
    // 0x369664: 0x0  nop
    ctx->pc = 0x369664u;
    // NOP
    ctx->pc = 0x369668u;
}
