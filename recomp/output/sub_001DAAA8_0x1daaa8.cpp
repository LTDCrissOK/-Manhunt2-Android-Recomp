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

// Function: sub_001DAAA8
// Address: 0x1daaa8 - 0x1dabe8
void sub_001DAAA8_0x1daaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAAA8_0x1daaa8");
#endif

    switch (ctx->pc) {
        case 0x1dab38u: goto label_1dab38;
        case 0x1dab98u: goto label_1dab98;
        case 0x1dabc0u: goto label_1dabc0;
        default: break;
    }

    ctx->pc = 0x1daaa8u;

    // 0x1daaa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1daaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1daaac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1daaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1daab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1daab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1daab4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1daab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1daab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1daabc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1daabcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1daac0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1daac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1daac4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1daac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1daac8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1daac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1daacc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1daaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1daad0: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1daad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1daad4: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x1daad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1daad8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAAD8u;
    {
        const bool branch_taken_0x1daad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAD8u;
        // 0x1daadc: 0x8c520ffc  lw          $s2, 0xFFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daad8) {
            ctx->pc = 0x1DAAF0u;
            goto label_1daaf0;
        }
    }
    ctx->pc = 0x1DAAE0u;
    // 0x1daae0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1daae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1daae4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1daae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1daae8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAAE8u;
    {
        const bool branch_taken_0x1daae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAE8u;
        // 0x1daaec: 0x3442fdef  ori         $v0, $v0, 0xFDEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65007);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daae8) {
            ctx->pc = 0x1DAAFCu;
            goto label_1daafc;
        }
    }
    ctx->pc = 0x1DAAF0u;
label_1daaf0:
    // 0x1daaf0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1daaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1daaf4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1daaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1daaf8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1daaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_1daafc:
    // 0x1daafc: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x1daafcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab00: 0xac62fff4  sw          $v0, -0xC($v1)
    ctx->pc = 0x1dab00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
    // 0x1dab04: 0x26420034  addiu       $v0, $s2, 0x34
    ctx->pc = 0x1dab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x1dab08: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x1dab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1dab0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1dab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dab10: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1dab10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab14: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1dab14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dab18: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1dab18u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1dab1c: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DAB1Cu;
    {
        const bool branch_taken_0x1dab1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB1Cu;
        // 0x1dab20: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab1c) {
            ctx->pc = 0x1DABB8u;
            goto label_1dabb8;
        }
    }
    ctx->pc = 0x1DAB24u;
    // 0x1dab24: 0x3c110010  lui         $s1, 0x10
    ctx->pc = 0x1dab24u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16 << 16));
    // 0x1dab28: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x1dab28u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x1dab2c: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x1dab2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1dab30: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x1dab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1dab34: 0x0  nop
    ctx->pc = 0x1dab34u;
    // NOP
label_1dab38:
    // 0x1dab38: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1dab38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1dab3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dab40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dab40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dab44: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DAB44u;
    {
        const bool branch_taken_0x1dab44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB44u;
        // 0x1dab48: 0x8ec3fff4  lw          $v1, -0xC($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294967284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab44) {
            ctx->pc = 0x1DAB98u;
            goto label_1dab98;
        }
    }
    ctx->pc = 0x1DAB4Cu;
    // 0x1dab4c: 0x8ca200b8  lw          $v0, 0xB8($a1)
    ctx->pc = 0x1dab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
    // 0x1dab50: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1dab50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dab54: 0x34630210  ori         $v1, $v1, 0x210
    ctx->pc = 0x1dab54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)528);
    // 0x1dab58: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1dab58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1dab5c: 0x5480000f  bnel        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1DAB5Cu;
    {
        const bool branch_taken_0x1dab5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dab5c) {
            ctx->pc = 0x1DAB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAB5Cu;
            // 0x1dab60: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAB9Cu;
            goto label_1dab9c;
        }
    }
    ctx->pc = 0x1DAB64u;
    // 0x1dab64: 0x8ea291ac  lw          $v0, -0x6E54($s5)
    ctx->pc = 0x1dab64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294939052)));
    // 0x1dab68: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAB68u;
    {
        const bool branch_taken_0x1dab68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dab68) {
            ctx->pc = 0x1DAB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAB68u;
            // 0x1dab6c: 0x8ca200c0  lw          $v0, 0xC0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAB80u;
            goto label_1dab80;
        }
    }
    ctx->pc = 0x1DAB70u;
    // 0x1dab70: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x1dab70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x1dab74: 0x50510009  beql        $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DAB74u;
    {
        const bool branch_taken_0x1dab74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1dab74) {
            ctx->pc = 0x1DAB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAB74u;
            // 0x1dab78: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAB9Cu;
            goto label_1dab9c;
        }
    }
    ctx->pc = 0x1DAB7Cu;
    // 0x1dab7c: 0x8ca200c0  lw          $v0, 0xC0($a1)
    ctx->pc = 0x1dab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
label_1dab80:
    // 0x1dab80: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1dab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1dab84: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAB84u;
    {
        const bool branch_taken_0x1dab84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dab84) {
            ctx->pc = 0x1DAB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DAB84u;
            // 0x1dab88: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAB9Cu;
            goto label_1dab9c;
        }
    }
    ctx->pc = 0x1DAB8Cu;
    // 0x1dab8c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1dab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1dab90: 0xc079966  jal         func_1E6598
    ctx->pc = 0x1DAB90u;
    SET_GPR_U32(ctx, 31, 0x1DAB98u);
    ctx->pc = 0x1DAB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB90u;
    // 0x1dab94: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6598u, 0x1DAB90u, 0x1DAB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB98u;
label_1dab98:
    // 0x1dab98: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1dab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1dab9c:
    // 0x1dab9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1dab9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1daba0: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1daba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1daba4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1daba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1daba8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1daba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1dabac: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1dabacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dabb0: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1DABB0u;
    {
        const bool branch_taken_0x1dabb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dabb0) {
            ctx->pc = 0x1DABB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DABB0u;
            // 0x1dabb4: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DAB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dab38;
        }
    }
    ctx->pc = 0x1DABB8u;
label_1dabb8:
    // 0x1dabb8: 0xc0797fe  jal         func_1E5FF8
    ctx->pc = 0x1DABB8u;
    SET_GPR_U32(ctx, 31, 0x1DABC0u);
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x1DABB8u, 0x1DABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABC0u;
label_1dabc0:
    // 0x1dabc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dabc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dabc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dabc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dabc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dabc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dabcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dabccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dabd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dabd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dabd4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1dabd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dabd8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1dabd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dabdc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1dabdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dabe0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DABE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DABE0u;
        // 0x1dabe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DABE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DABE8u;
}
