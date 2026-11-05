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

// Function: sub_0016F2F0
// Address: 0x16f2f0 - 0x16f3a0
void sub_0016F2F0_0x16f2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F2F0_0x16f2f0");
#endif

    switch (ctx->pc) {
        case 0x16f37cu: goto label_16f37c;
        case 0x16f390u: goto label_16f390;
        default: break;
    }

    ctx->pc = 0x16f2f0u;

    // 0x16f2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16f2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16f2f8: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x16f2f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x16f2fc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x16F2FCu;
    {
        const bool branch_taken_0x16f2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F2FCu;
        // 0x16f300: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2fc) {
            ctx->pc = 0x16F394u;
            goto label_16f394;
        }
    }
    ctx->pc = 0x16F304u;
    // 0x16f304: 0x908200f8  lbu         $v0, 0xF8($a0)
    ctx->pc = 0x16f304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x16f308: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x16f308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16f30c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f314: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f318: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x16F318u;
    {
        const bool branch_taken_0x16f318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F318u;
        // 0x16f31c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f318) {
            ctx->pc = 0x16F394u;
            goto label_16f394;
        }
    }
    ctx->pc = 0x16F320u;
    // 0x16f320: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16f320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f324: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x16f324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16f328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f32c: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x16f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16f330: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x16F330u;
    {
        const bool branch_taken_0x16f330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f330) {
            ctx->pc = 0x16F394u;
            goto label_16f394;
        }
    }
    ctx->pc = 0x16F338u;
    // 0x16f338: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x16f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x16f33c: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x16f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x16f340: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x16f340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x16f344: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F344u;
    {
        const bool branch_taken_0x16f344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f344) {
            ctx->pc = 0x16F348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F344u;
            // 0x16f348: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F364u;
            goto label_16f364;
        }
    }
    ctx->pc = 0x16F34Cu;
    // 0x16f34c: 0x5c800009  bgtzl       $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F34Cu;
    {
        const bool branch_taken_0x16f34c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x16f34c) {
            ctx->pc = 0x16F350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F34Cu;
            // 0x16f350: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F374u;
            goto label_16f374;
        }
    }
    ctx->pc = 0x16F354u;
    // 0x16f354: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x16F354u;
    {
        const bool branch_taken_0x16f354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F354u;
        // 0x16f358: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f354) {
            ctx->pc = 0x16F388u;
            goto label_16f388;
        }
    }
    ctx->pc = 0x16F35Cu;
    // 0x16f35c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16F35Cu;
    {
        const bool branch_taken_0x16f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f35c) {
            ctx->pc = 0x16F394u;
            goto label_16f394;
        }
    }
    ctx->pc = 0x16F364u;
label_16f364:
    // 0x16f364: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F364u;
    {
        const bool branch_taken_0x16f364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F364u;
        // 0x16f368: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f364) {
            ctx->pc = 0x16F384u;
            goto label_16f384;
        }
    }
    ctx->pc = 0x16F36Cu;
    // 0x16f36c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16F36Cu;
    {
        const bool branch_taken_0x16f36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f36c) {
            ctx->pc = 0x16F394u;
            goto label_16f394;
        }
    }
    ctx->pc = 0x16F374u;
label_16f374:
    // 0x16f374: 0xc04398a  jal         func_10E628
    ctx->pc = 0x16F374u;
    SET_GPR_U32(ctx, 31, 0x16F37Cu);
    ctx->pc = 0x16F378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F374u;
    // 0x16f378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x16F374u, 0x16F37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F37Cu;
label_16f37c:
    // 0x16f37c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16F37Cu;
    {
        const bool branch_taken_0x16f37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F37Cu;
        // 0x16f380: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f37c) {
            ctx->pc = 0x16F394u;
            goto label_16f394;
        }
    }
    ctx->pc = 0x16F384u;
label_16f384:
    // 0x16f384: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16f384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16f388:
    // 0x16f388: 0xc04398a  jal         func_10E628
    ctx->pc = 0x16F388u;
    SET_GPR_U32(ctx, 31, 0x16F390u);
    ctx->pc = 0x16F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F388u;
    // 0x16f38c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x16F388u, 0x16F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F390u;
label_16f390:
    // 0x16f390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16f390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16f394:
    // 0x16f394: 0x3e00008  jr          $ra
    ctx->pc = 0x16F394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F394u;
        // 0x16f398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F39Cu;
    // 0x16f39c: 0x0  nop
    ctx->pc = 0x16f39cu;
    // NOP
    ctx->pc = 0x16f3a0u;
}
