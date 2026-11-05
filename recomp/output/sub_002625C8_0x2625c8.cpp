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

// Function: sub_002625C8
// Address: 0x2625c8 - 0x262660
void sub_002625C8_0x2625c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002625C8_0x2625c8");
#endif

    switch (ctx->pc) {
        case 0x262650u: goto label_262650;
        default: break;
    }

    ctx->pc = 0x2625c8u;

    // 0x2625c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2625c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2625cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2625ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2625d0: 0x8c820234  lw          $v0, 0x234($a0)
    ctx->pc = 0x2625d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x2625d4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2625D4u;
    {
        const bool branch_taken_0x2625d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2625D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625D4u;
        // 0x2625d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625d4) {
            ctx->pc = 0x262654u;
            goto label_262654;
        }
    }
    ctx->pc = 0x2625DCu;
    // 0x2625dc: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x2625dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2625e0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2625e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2625e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2625E4u;
    {
        const bool branch_taken_0x2625e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2625E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625E4u;
        // 0x2625e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625e4) {
            ctx->pc = 0x2625F8u;
            goto label_2625f8;
        }
    }
    ctx->pc = 0x2625ECu;
    // 0x2625ec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2625ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2625f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2625F0u;
    {
        const bool branch_taken_0x2625f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2625f0) {
            ctx->pc = 0x2625FCu;
            goto label_2625fc;
        }
    }
    ctx->pc = 0x2625F8u;
label_2625f8:
    // 0x2625f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2625f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2625fc:
    // 0x2625fc: 0x14a00015  bnez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2625FCu;
    {
        const bool branch_taken_0x2625fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x262600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2625FCu;
        // 0x262600: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2625fc) {
            ctx->pc = 0x262654u;
            goto label_262654;
        }
    }
    ctx->pc = 0x262604u;
    // 0x262604: 0x8c860298  lw          $a2, 0x298($a0)
    ctx->pc = 0x262604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x262608: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x262608u;
    {
        const bool branch_taken_0x262608 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x262608) {
            ctx->pc = 0x262654u;
            goto label_262654;
        }
    }
    ctx->pc = 0x262610u;
    // 0x262610: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x262610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x262614: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x262614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x262618: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x262618u;
    {
        const bool branch_taken_0x262618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262618) {
            ctx->pc = 0x262654u;
            goto label_262654;
        }
    }
    ctx->pc = 0x262620u;
    // 0x262620: 0xac800294  sw          $zero, 0x294($a0)
    ctx->pc = 0x262620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 660), GPR_U32(ctx, 0));
    // 0x262624: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x262624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x262628: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x262628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x26262c: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x26262cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x262630: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x262630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x262634: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x262634u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
    // 0x262638: 0x8c850298  lw          $a1, 0x298($a0)
    ctx->pc = 0x262638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x26263c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x26263cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x262640: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x262640u;
    {
        const bool branch_taken_0x262640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x262640) {
            ctx->pc = 0x262654u;
            goto label_262654;
        }
    }
    ctx->pc = 0x262648u;
    // 0x262648: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x262648u;
    SET_GPR_U32(ctx, 31, 0x262650u);
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x262648u, 0x262650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262650u;
label_262650:
    // 0x262650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x262650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_262654:
    // 0x262654: 0x3e00008  jr          $ra
    ctx->pc = 0x262654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262654u;
        // 0x262658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26265Cu;
    // 0x26265c: 0x0  nop
    ctx->pc = 0x26265cu;
    // NOP
    ctx->pc = 0x262660u;
}
