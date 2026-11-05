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

// Function: sub_0011DFB0
// Address: 0x11dfb0 - 0x11e098
void sub_0011DFB0_0x11dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DFB0_0x11dfb0");
#endif

    switch (ctx->pc) {
        case 0x11dfdcu: goto label_11dfdc;
        case 0x11dff0u: goto label_11dff0;
        case 0x11e02cu: goto label_11e02c;
        case 0x11e068u: goto label_11e068;
        default: break;
    }

    ctx->pc = 0x11dfb0u;

    // 0x11dfb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x11dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x11dfb4: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11dfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11dfb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11dfb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfbc: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x11dfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x11dfc0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11dfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfc4: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x11dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x11dfc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11dfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfcc: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x11dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x11dfd0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x11dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x11dfd4: 0xc0ab004  jal         func_2AC010
    ctx->pc = 0x11DFD4u;
    SET_GPR_U32(ctx, 31, 0x11DFDCu);
    ctx->pc = 0x11DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFD4u;
    // 0x11dfd8: 0x24120009  addiu       $s2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC010u, 0x11DFD4u, 0x11DFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFDCu;
label_11dfdc:
    // 0x11dfdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11dfdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfe0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11dfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11dfe4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11dfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dfe8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11DFE8u;
    SET_GPR_U32(ctx, 31, 0x11DFF0u);
    ctx->pc = 0x11DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFE8u;
    // 0x11dfec: 0x24a5c3b8  addiu       $a1, $a1, -0x3C48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11DFE8u, 0x11DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DFF0u;
label_11dff0:
    // 0x11dff0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DFF0u;
    {
        const bool branch_taken_0x11dff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11dff0) {
            ctx->pc = 0x11E004u;
            goto label_11e004;
        }
    }
    ctx->pc = 0x11DFF8u;
    // 0x11dff8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11dff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dffc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11dffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e000: 0xae110410  sw          $s1, 0x410($s0)
    ctx->pc = 0x11e000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 17));
label_11e004:
    // 0x11e004: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E004u;
    {
        const bool branch_taken_0x11e004 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E004u;
        // 0x11e008: 0x26130434  addiu       $s3, $s0, 0x434 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1076));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e004) {
            ctx->pc = 0x11E05Cu;
            goto label_11e05c;
        }
    }
    ctx->pc = 0x11E00Cu;
    // 0x11e00c: 0x8e020414  lw          $v0, 0x414($s0)
    ctx->pc = 0x11e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1044)));
    // 0x11e010: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E010u;
    {
        const bool branch_taken_0x11e010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E010u;
        // 0x11e014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e010) {
            ctx->pc = 0x11E028u;
            goto label_11e028;
        }
    }
    ctx->pc = 0x11E018u;
    // 0x11e018: 0xae050414  sw          $a1, 0x414($s0)
    ctx->pc = 0x11e018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 5));
    // 0x11e01c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11E01Cu;
    {
        const bool branch_taken_0x11e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E01Cu;
        // 0x11e020: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e01c) {
            ctx->pc = 0x11E05Cu;
            goto label_11e05c;
        }
    }
    ctx->pc = 0x11E024u;
    // 0x11e024: 0x0  nop
    ctx->pc = 0x11e024u;
    // NOP
label_11e028:
    // 0x11e028: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x11e028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11e02c:
    // 0x11e02c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x11e02cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x11e030: 0x2ca30009  sltiu       $v1, $a1, 0x9
    ctx->pc = 0x11e030u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x11e034: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11E034u;
    {
        const bool branch_taken_0x11e034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E034u;
        // 0x11e038: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e034) {
            ctx->pc = 0x11E05Cu;
            goto label_11e05c;
        }
    }
    ctx->pc = 0x11E03Cu;
    // 0x11e03c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x11e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x11e040: 0x8c430410  lw          $v1, 0x410($v0)
    ctx->pc = 0x11e040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
    // 0x11e044: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11E044u;
    {
        const bool branch_taken_0x11e044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e044) {
            ctx->pc = 0x11E048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E044u;
            // 0x11e048: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E02Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e02c;
        }
    }
    ctx->pc = 0x11E04Cu;
    // 0x11e04c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11e04cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e050: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11e050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e058: 0xac620410  sw          $v0, 0x410($v1)
    ctx->pc = 0x11e058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1040), GPR_U32(ctx, 2));
label_11e05c:
    // 0x11e05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11e05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e060: 0xc047f34  jal         func_11FCD0
    ctx->pc = 0x11E060u;
    SET_GPR_U32(ctx, 31, 0x11E068u);
    ctx->pc = 0x11E064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E060u;
    // 0x11e064: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FCD0u, 0x11E060u, 0x11E068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E068u;
label_11e068:
    // 0x11e068: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x11e068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11e06c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11e06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11e070: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x11e070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x11e074: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x11e074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11e078: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11e078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x11e07c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x11e07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e080: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x11e080u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x11e084: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x11e084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11e088: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x11e088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11e08c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E08Cu;
        // 0x11e090: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E094u;
    // 0x11e094: 0x0  nop
    ctx->pc = 0x11e094u;
    // NOP
    ctx->pc = 0x11e098u;
}
