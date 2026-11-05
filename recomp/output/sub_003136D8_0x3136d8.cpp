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

// Function: sub_003136D8
// Address: 0x3136d8 - 0x313768
void sub_003136D8_0x3136d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003136D8_0x3136d8");
#endif

    switch (ctx->pc) {
        case 0x3136fcu: goto label_3136fc;
        case 0x313718u: goto label_313718;
        case 0x313734u: goto label_313734;
        case 0x31375cu: goto label_31375c;
        default: break;
    }

    ctx->pc = 0x3136d8u;

    // 0x3136d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3136d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3136dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3136dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3136e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3136e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3136e4: 0x8c45bcec  lw          $a1, -0x4314($v0)
    ctx->pc = 0x3136e4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBCECu));
    // 0x3136e8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3136e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3136ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3136ECu;
    {
        const bool branch_taken_0x3136ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136ECu;
        // 0x3136f0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136ec) {
            ctx->pc = 0x313700u;
            goto label_313700;
        }
    }
    ctx->pc = 0x3136F4u;
    // 0x3136f4: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x3136F4u;
    SET_GPR_U32(ctx, 31, 0x3136FCu);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x3136F4u, 0x3136FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136FCu;
label_3136fc:
    // 0x3136fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3136fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_313700:
    // 0x313700: 0x8c45bcf8  lw          $a1, -0x4308($v0)
    ctx->pc = 0x313700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x313704: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x313704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x313708: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x313708u;
    {
        const bool branch_taken_0x313708 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313708u;
        // 0x31370c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313708) {
            ctx->pc = 0x31371Cu;
            goto label_31371c;
        }
    }
    ctx->pc = 0x313710u;
    // 0x313710: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x313710u;
    SET_GPR_U32(ctx, 31, 0x313718u);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x313710u, 0x313718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313718u;
label_313718:
    // 0x313718: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x313718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_31371c:
    // 0x31371c: 0x8c45bcf0  lw          $a1, -0x4310($v0)
    ctx->pc = 0x31371cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
    // 0x313720: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x313720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x313724: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x313724u;
    {
        const bool branch_taken_0x313724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x313728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313724u;
        // 0x313728: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313724) {
            ctx->pc = 0x313738u;
            goto label_313738;
        }
    }
    ctx->pc = 0x31372Cu;
    // 0x31372c: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x31372Cu;
    SET_GPR_U32(ctx, 31, 0x313734u);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x31372Cu, 0x313734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313734u;
label_313734:
    // 0x313734: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x313734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_313738:
    // 0x313738: 0x9043bd00  lbu         $v1, -0x4300($v0)
    ctx->pc = 0x313738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950144)));
    // 0x31373c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31373Cu;
    {
        const bool branch_taken_0x31373c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31373Cu;
        // 0x313740: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31373c) {
            ctx->pc = 0x31375Cu;
            goto label_31375c;
        }
    }
    ctx->pc = 0x313744u;
    // 0x313744: 0x8c45bcf4  lw          $a1, -0x430C($v0)
    ctx->pc = 0x313744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950132)));
    // 0x313748: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x313748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31374c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31374Cu;
    {
        const bool branch_taken_0x31374c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x313750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31374Cu;
        // 0x313750: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31374c) {
            ctx->pc = 0x313760u;
            goto label_313760;
        }
    }
    ctx->pc = 0x313754u;
    // 0x313754: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x313754u;
    SET_GPR_U32(ctx, 31, 0x31375Cu);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x313754u, 0x31375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31375Cu;
label_31375c:
    // 0x31375c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31375cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_313760:
    // 0x313760: 0x3e00008  jr          $ra
    ctx->pc = 0x313760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313760u;
        // 0x313764: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313768u;
}
