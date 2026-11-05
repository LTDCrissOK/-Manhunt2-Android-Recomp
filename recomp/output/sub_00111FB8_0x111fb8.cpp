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

// Function: sub_00111FB8
// Address: 0x111fb8 - 0x112068
void sub_00111FB8_0x111fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111FB8_0x111fb8");
#endif

    switch (ctx->pc) {
        case 0x112058u: goto label_112058;
        default: break;
    }

    ctx->pc = 0x111fb8u;

    // 0x111fb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x111fbc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x111fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111fc4: 0x8ca2023c  lw          $v0, 0x23C($a1)
    ctx->pc = 0x111fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 572)));
    // 0x111fc8: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x111FC8u;
    {
        const bool branch_taken_0x111fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FC8u;
        // 0x111fcc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fc8) {
            ctx->pc = 0x11205Cu;
            goto label_11205c;
        }
    }
    ctx->pc = 0x111FD0u;
    // 0x111fd0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x111fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x111fd4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x111fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x111fd8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x111fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x111fdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x111fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x111fe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x111fe4: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x111fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x111fe8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x111FE8u;
    {
        const bool branch_taken_0x111fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FE8u;
        // 0x111fec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111fe8) {
            ctx->pc = 0x11205Cu;
            goto label_11205c;
        }
    }
    ctx->pc = 0x111FF0u;
    // 0x111ff0: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x111ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x111ff4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x111ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x111ff8: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x111ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x111ffc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x111FFCu;
    {
        const bool branch_taken_0x111ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x112000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111FFCu;
        // 0x112000: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ffc) {
            ctx->pc = 0x112018u;
            goto label_112018;
        }
    }
    ctx->pc = 0x112004u;
    // 0x112004: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x112004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x112008: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112008u;
    {
        const bool branch_taken_0x112008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11200Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112008u;
        // 0x11200c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112008) {
            ctx->pc = 0x112018u;
            goto label_112018;
        }
    }
    ctx->pc = 0x112010u;
    // 0x112010: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x112010u;
    {
        const bool branch_taken_0x112010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x112010) {
            ctx->pc = 0x11201Cu;
            goto label_11201c;
        }
    }
    ctx->pc = 0x112018u;
label_112018:
    // 0x112018: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x112018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11201c:
    // 0x11201c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11201Cu;
    {
        const bool branch_taken_0x11201c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11201c) {
            ctx->pc = 0x112040u;
            goto label_112040;
        }
    }
    ctx->pc = 0x112024u;
    // 0x112024: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x112024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x112028: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x112028u;
    {
        const bool branch_taken_0x112028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112028) {
            ctx->pc = 0x11202Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112028u;
            // 0x11202c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112040u;
            goto label_112040;
        }
    }
    ctx->pc = 0x112030u;
    // 0x112030: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x112030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x112034: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x112034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x112038: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x112038u;
    {
        const bool branch_taken_0x112038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112038) {
            ctx->pc = 0x11203Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112038u;
            // 0x11203c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112040u;
            goto label_112040;
        }
    }
    ctx->pc = 0x112040u;
label_112040:
    // 0x112040: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x112040u;
    {
        const bool branch_taken_0x112040 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x112044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112040u;
        // 0x112044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112040) {
            ctx->pc = 0x112058u;
            goto label_112058;
        }
    }
    ctx->pc = 0x112048u;
    // 0x112048: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x112048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11204c: 0xaca2023c  sw          $v0, 0x23C($a1)
    ctx->pc = 0x11204cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 572), GPR_U32(ctx, 2));
    // 0x112050: 0xc043c56  jal         func_10F158
    ctx->pc = 0x112050u;
    SET_GPR_U32(ctx, 31, 0x112058u);
    ctx->pc = 0x112054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112050u;
    // 0x112054: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x112050u, 0x112058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112058u;
label_112058:
    // 0x112058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11205c:
    // 0x11205c: 0x3e00008  jr          $ra
    ctx->pc = 0x11205Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11205Cu;
        // 0x112060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11205Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112064u;
    // 0x112064: 0x0  nop
    ctx->pc = 0x112064u;
    // NOP
    ctx->pc = 0x112068u;
}
