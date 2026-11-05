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

// Function: sub_001EDD08
// Address: 0x1edd08 - 0x1ee058
void sub_001EDD08_0x1edd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDD08_0x1edd08");
#endif

    switch (ctx->pc) {
        case 0x1eddd4u: goto label_1eddd4;
        case 0x1edde0u: goto label_1edde0;
        case 0x1eddf4u: goto label_1eddf4;
        case 0x1ede14u: goto label_1ede14;
        case 0x1ede24u: goto label_1ede24;
        case 0x1ede44u: goto label_1ede44;
        case 0x1ede54u: goto label_1ede54;
        case 0x1ede74u: goto label_1ede74;
        case 0x1ede84u: goto label_1ede84;
        case 0x1edea4u: goto label_1edea4;
        case 0x1edeb4u: goto label_1edeb4;
        case 0x1edec8u: goto label_1edec8;
        case 0x1edee8u: goto label_1edee8;
        case 0x1edef8u: goto label_1edef8;
        case 0x1edf18u: goto label_1edf18;
        case 0x1edf28u: goto label_1edf28;
        case 0x1edf38u: goto label_1edf38;
        case 0x1edf54u: goto label_1edf54;
        case 0x1edf78u: goto label_1edf78;
        case 0x1edf88u: goto label_1edf88;
        case 0x1edfa8u: goto label_1edfa8;
        case 0x1edfb8u: goto label_1edfb8;
        case 0x1edfd8u: goto label_1edfd8;
        case 0x1edfe8u: goto label_1edfe8;
        case 0x1ee008u: goto label_1ee008;
        case 0x1ee020u: goto label_1ee020;
        default: break;
    }

    ctx->pc = 0x1edd08u;

    // 0x1edd08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1edd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1edd0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1edd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1edd10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1edd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1edd14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1edd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1edd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1edd1c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1edd1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1edd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1edd24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1edd24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd28: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1edd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1edd2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1edd2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd30: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1edd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1edd34: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1edd34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1edd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1edd3c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1edd3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd40: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1edd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1edd44: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x1edd44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1edd48: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1edd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1edd4c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1edd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1edd50: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1edd50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1edd54: 0x10470008  beq         $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDD54u;
    {
        const bool branch_taken_0x1edd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1EDD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD54u;
        // 0x1edd58: 0x92430009  lbu         $v1, 0x9($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd54) {
            ctx->pc = 0x1EDD78u;
            goto label_1edd78;
        }
    }
    ctx->pc = 0x1EDD5Cu;
    // 0x1edd5c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1edd5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1edd60: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDD60u;
    {
        const bool branch_taken_0x1edd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1EDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD60u;
        // 0x1edd64: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd60) {
            ctx->pc = 0x1EDD78u;
            goto label_1edd78;
        }
    }
    ctx->pc = 0x1EDD68u;
    // 0x1edd68: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDD68u;
    {
        const bool branch_taken_0x1edd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1EDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD68u;
        // 0x1edd6c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd68) {
            ctx->pc = 0x1EDD78u;
            goto label_1edd78;
        }
    }
    ctx->pc = 0x1EDD70u;
    // 0x1edd70: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EDD70u;
    {
        const bool branch_taken_0x1edd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1edd70) {
            ctx->pc = 0x1EDD80u;
            goto label_1edd80;
        }
    }
    ctx->pc = 0x1EDD78u;
label_1edd78:
    // 0x1edd78: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1EDD78u;
    {
        const bool branch_taken_0x1edd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD78u;
        // 0x1edd7c: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd78) {
            ctx->pc = 0x1EDDA4u;
            goto label_1edda4;
        }
    }
    ctx->pc = 0x1EDD80u;
label_1edd80:
    // 0x1edd80: 0x50670008  beql        $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDD80u;
    {
        const bool branch_taken_0x1edd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1edd80) {
            ctx->pc = 0x1EDD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDD80u;
            // 0x1edd84: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDDA4u;
            goto label_1edda4;
        }
    }
    ctx->pc = 0x1EDD88u;
    // 0x1edd88: 0x50660006  beql        $v1, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDD88u;
    {
        const bool branch_taken_0x1edd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1edd88) {
            ctx->pc = 0x1EDD8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDD88u;
            // 0x1edd8c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDDA4u;
            goto label_1edda4;
        }
    }
    ctx->pc = 0x1EDD90u;
    // 0x1edd90: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDD90u;
    {
        const bool branch_taken_0x1edd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1edd90) {
            ctx->pc = 0x1EDD94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDD90u;
            // 0x1edd94: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDDA4u;
            goto label_1edda4;
        }
    }
    ctx->pc = 0x1EDD98u;
    // 0x1edd98: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EDD98u;
    {
        const bool branch_taken_0x1edd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1edd98) {
            ctx->pc = 0x1EDDB8u;
            goto label_1eddb8;
        }
    }
    ctx->pc = 0x1EDDA0u;
    // 0x1edda0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1edda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1edda4:
    // 0x1edda4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1edda4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edda8: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1edda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1eddac: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x1eddacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x1eddb0: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1eddb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1eddb4: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1eddb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1eddb8:
    // 0x1eddb8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EDDB8u;
    {
        const bool branch_taken_0x1eddb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDB8u;
        // 0x1eddbc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddb8) {
            ctx->pc = 0x1EDDC4u;
            goto label_1eddc4;
        }
    }
    ctx->pc = 0x1EDDC0u;
    // 0x1eddc0: 0x8e110274  lw          $s1, 0x274($s0)
    ctx->pc = 0x1eddc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_1eddc4:
    // 0x1eddc4: 0x12200097  beqz        $s1, . + 4 + (0x97 << 2)
    ctx->pc = 0x1EDDC4u;
    {
        const bool branch_taken_0x1eddc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDC4u;
        // 0x1eddc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddc4) {
            ctx->pc = 0x1EE024u;
            goto label_1ee024;
        }
    }
    ctx->pc = 0x1EDDCCu;
    // 0x1eddcc: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1EDDCCu;
    SET_GPR_U32(ctx, 31, 0x1EDDD4u);
    ctx->pc = 0x1EDDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDDCCu;
    // 0x1eddd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1EDDCCu, 0x1EDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDDD4u;
label_1eddd4:
    // 0x1eddd4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1eddd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eddd8: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1EDDD8u;
    SET_GPR_U32(ctx, 31, 0x1EDDE0u);
    ctx->pc = 0x1EDDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDDD8u;
    // 0x1edddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1EDDD8u, 0x1EDDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDDE0u;
label_1edde0:
    // 0x1edde0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1edde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1edde4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1EDDE4u;
    {
        const bool branch_taken_0x1edde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edde4) {
            ctx->pc = 0x1EDEACu;
            goto label_1edeac;
        }
    }
    ctx->pc = 0x1EDDECu;
    // 0x1eddec: 0xc098b72  jal         func_262DC8
    ctx->pc = 0x1EDDECu;
    SET_GPR_U32(ctx, 31, 0x1EDDF4u);
    ctx->pc = 0x1EDDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDDECu;
    // 0x1eddf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DC8u, 0x1EDDECu, 0x1EDDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDDF4u;
label_1eddf4:
    // 0x1eddf4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EDDF4u;
    {
        const bool branch_taken_0x1eddf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDF4u;
        // 0x1eddf8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddf4) {
            ctx->pc = 0x1EDE1Cu;
            goto label_1ede1c;
        }
    }
    ctx->pc = 0x1EDDFCu;
    // 0x1eddfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1eddfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede00: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ede00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede04: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ede04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede08: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1ede08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede0c: 0xc07b484  jal         func_1ED210
    ctx->pc = 0x1EDE0Cu;
    SET_GPR_U32(ctx, 31, 0x1EDE14u);
    ctx->pc = 0x1EDE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE0Cu;
    // 0x1ede10: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED210u, 0x1EDE0Cu, 0x1EDE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE14u;
label_1ede14:
    // 0x1ede14: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1EDE14u;
    {
        const bool branch_taken_0x1ede14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ede14) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDE1Cu;
label_1ede1c:
    // 0x1ede1c: 0xc098b78  jal         func_262DE0
    ctx->pc = 0x1EDE1Cu;
    SET_GPR_U32(ctx, 31, 0x1EDE24u);
    ctx->pc = 0x1EDE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE1Cu;
    // 0x1ede20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DE0u, 0x1EDE1Cu, 0x1EDE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE24u;
label_1ede24:
    // 0x1ede24: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EDE24u;
    {
        const bool branch_taken_0x1ede24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE24u;
        // 0x1ede28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede24) {
            ctx->pc = 0x1EDE4Cu;
            goto label_1ede4c;
        }
    }
    ctx->pc = 0x1EDE2Cu;
    // 0x1ede2c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ede2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede30: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ede30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede34: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ede34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede38: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1ede38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede3c: 0xc07b4b2  jal         func_1ED2C8
    ctx->pc = 0x1EDE3Cu;
    SET_GPR_U32(ctx, 31, 0x1EDE44u);
    ctx->pc = 0x1EDE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE3Cu;
    // 0x1ede40: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED2C8u, 0x1EDE3Cu, 0x1EDE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE44u;
label_1ede44:
    // 0x1ede44: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1EDE44u;
    {
        const bool branch_taken_0x1ede44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ede44) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDE4Cu;
label_1ede4c:
    // 0x1ede4c: 0xc098b88  jal         func_262E20
    ctx->pc = 0x1EDE4Cu;
    SET_GPR_U32(ctx, 31, 0x1EDE54u);
    ctx->pc = 0x1EDE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE4Cu;
    // 0x1ede50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E20u, 0x1EDE4Cu, 0x1EDE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE54u;
label_1ede54:
    // 0x1ede54: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EDE54u;
    {
        const bool branch_taken_0x1ede54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE54u;
        // 0x1ede58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede54) {
            ctx->pc = 0x1EDE7Cu;
            goto label_1ede7c;
        }
    }
    ctx->pc = 0x1EDE5Cu;
    // 0x1ede5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ede5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede60: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ede60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede64: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ede64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede68: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1ede68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede6c: 0xc07b4c0  jal         func_1ED300
    ctx->pc = 0x1EDE6Cu;
    SET_GPR_U32(ctx, 31, 0x1EDE74u);
    ctx->pc = 0x1EDE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE6Cu;
    // 0x1ede70: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED300u, 0x1EDE6Cu, 0x1EDE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE74u;
label_1ede74:
    // 0x1ede74: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x1EDE74u;
    {
        const bool branch_taken_0x1ede74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ede74) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDE7Cu;
label_1ede7c:
    // 0x1ede7c: 0xc098b98  jal         func_262E60
    ctx->pc = 0x1EDE7Cu;
    SET_GPR_U32(ctx, 31, 0x1EDE84u);
    ctx->pc = 0x1EDE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE7Cu;
    // 0x1ede80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E60u, 0x1EDE7Cu, 0x1EDE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE84u;
label_1ede84:
    // 0x1ede84: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1EDE84u;
    {
        const bool branch_taken_0x1ede84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE84u;
        // 0x1ede88: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede84) {
            ctx->pc = 0x1EE020u;
            goto label_1ee020;
        }
    }
    ctx->pc = 0x1EDE8Cu;
    // 0x1ede8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ede8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede90: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1ede90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ede94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede98: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1ede98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede9c: 0xc07b4c8  jal         func_1ED320
    ctx->pc = 0x1EDE9Cu;
    SET_GPR_U32(ctx, 31, 0x1EDEA4u);
    ctx->pc = 0x1EDEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE9Cu;
    // 0x1edea0: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED320u, 0x1EDE9Cu, 0x1EDEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDEA4u;
label_1edea4:
    // 0x1edea4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1EDEA4u;
    {
        const bool branch_taken_0x1edea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edea4) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDEACu;
label_1edeac:
    // 0x1edeac: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1EDEACu;
    SET_GPR_U32(ctx, 31, 0x1EDEB4u);
    ctx->pc = 0x1EDEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDEACu;
    // 0x1edeb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1EDEACu, 0x1EDEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDEB4u;
label_1edeb4:
    // 0x1edeb4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1edeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1edeb8: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EDEB8u;
    {
        const bool branch_taken_0x1edeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEB8u;
        // 0x1edebc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edeb8) {
            ctx->pc = 0x1EDF20u;
            goto label_1edf20;
        }
    }
    ctx->pc = 0x1EDEC0u;
    // 0x1edec0: 0xc098b72  jal         func_262DC8
    ctx->pc = 0x1EDEC0u;
    SET_GPR_U32(ctx, 31, 0x1EDEC8u);
    ctx->pc = 0x1EDEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDEC0u;
    // 0x1edec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DC8u, 0x1EDEC0u, 0x1EDEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDEC8u;
label_1edec8:
    // 0x1edec8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EDEC8u;
    {
        const bool branch_taken_0x1edec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEC8u;
        // 0x1edecc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edec8) {
            ctx->pc = 0x1EDEF0u;
            goto label_1edef0;
        }
    }
    ctx->pc = 0x1EDED0u;
    // 0x1eded0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1eded0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eded4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1eded4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eded8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1eded8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ededc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1ededcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edee0: 0xc07b4e8  jal         func_1ED3A0
    ctx->pc = 0x1EDEE0u;
    SET_GPR_U32(ctx, 31, 0x1EDEE8u);
    ctx->pc = 0x1EDEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDEE0u;
    // 0x1edee4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED3A0u, 0x1EDEE0u, 0x1EDEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDEE8u;
label_1edee8:
    // 0x1edee8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1EDEE8u;
    {
        const bool branch_taken_0x1edee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edee8) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDEF0u;
label_1edef0:
    // 0x1edef0: 0xc098b88  jal         func_262E20
    ctx->pc = 0x1EDEF0u;
    SET_GPR_U32(ctx, 31, 0x1EDEF8u);
    ctx->pc = 0x1EDEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDEF0u;
    // 0x1edef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E20u, 0x1EDEF0u, 0x1EDEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDEF8u;
label_1edef8:
    // 0x1edef8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1EDEF8u;
    {
        const bool branch_taken_0x1edef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDEF8u;
        // 0x1edefc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edef8) {
            ctx->pc = 0x1EE020u;
            goto label_1ee020;
        }
    }
    ctx->pc = 0x1EDF00u;
    // 0x1edf00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1edf00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf04: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1edf04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf08: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1edf08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf0c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1edf0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf10: 0xc07b738  jal         func_1EDCE0
    ctx->pc = 0x1EDF10u;
    SET_GPR_U32(ctx, 31, 0x1EDF18u);
    ctx->pc = 0x1EDF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF10u;
    // 0x1edf14: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDCE0u, 0x1EDF10u, 0x1EDF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF18u;
label_1edf18:
    // 0x1edf18: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1EDF18u;
    {
        const bool branch_taken_0x1edf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edf18) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDF20u;
label_1edf20:
    // 0x1edf20: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1EDF20u;
    SET_GPR_U32(ctx, 31, 0x1EDF28u);
    ctx->pc = 0x1EDF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF20u;
    // 0x1edf24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1EDF20u, 0x1EDF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF28u;
label_1edf28:
    // 0x1edf28: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDF28u;
    {
        const bool branch_taken_0x1edf28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edf28) {
            ctx->pc = 0x1EDF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDF28u;
            // 0x1edf2c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDF44u;
            goto label_1edf44;
        }
    }
    ctx->pc = 0x1EDF30u;
    // 0x1edf30: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1EDF30u;
    SET_GPR_U32(ctx, 31, 0x1EDF38u);
    ctx->pc = 0x1EDF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF30u;
    // 0x1edf34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1EDF30u, 0x1EDF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF38u;
label_1edf38:
    // 0x1edf38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1edf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edf3c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EDF3Cu;
    {
        const bool branch_taken_0x1edf3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1edf3c) {
            ctx->pc = 0x1EDF40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDF3Cu;
            // 0x1edf40: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EDF44u;
            goto label_1edf44;
        }
    }
    ctx->pc = 0x1EDF44u;
label_1edf44:
    // 0x1edf44: 0x13c00034  beqz        $fp, . + 4 + (0x34 << 2)
    ctx->pc = 0x1EDF44u;
    {
        const bool branch_taken_0x1edf44 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edf44) {
            ctx->pc = 0x1EE018u;
            goto label_1ee018;
        }
    }
    ctx->pc = 0x1EDF4Cu;
    // 0x1edf4c: 0xc098b72  jal         func_262DC8
    ctx->pc = 0x1EDF4Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF54u);
    ctx->pc = 0x1EDF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF4Cu;
    // 0x1edf50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DC8u, 0x1EDF4Cu, 0x1EDF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF54u;
label_1edf54:
    // 0x1edf54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EDF54u;
    {
        const bool branch_taken_0x1edf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF54u;
        // 0x1edf58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf54) {
            ctx->pc = 0x1EDF80u;
            goto label_1edf80;
        }
    }
    ctx->pc = 0x1EDF5Cu;
    // 0x1edf5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1edf5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf60: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1edf60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf64: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1edf64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf68: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1edf68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf6c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1edf6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf70: 0xc07b52e  jal         func_1ED4B8
    ctx->pc = 0x1EDF70u;
    SET_GPR_U32(ctx, 31, 0x1EDF78u);
    ctx->pc = 0x1EDF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF70u;
    // 0x1edf74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED4B8u, 0x1EDF70u, 0x1EDF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF78u;
label_1edf78:
    // 0x1edf78: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1EDF78u;
    {
        const bool branch_taken_0x1edf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edf78) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDF80u;
label_1edf80:
    // 0x1edf80: 0xc098b78  jal         func_262DE0
    ctx->pc = 0x1EDF80u;
    SET_GPR_U32(ctx, 31, 0x1EDF88u);
    ctx->pc = 0x1EDF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF80u;
    // 0x1edf84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DE0u, 0x1EDF80u, 0x1EDF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF88u;
label_1edf88:
    // 0x1edf88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EDF88u;
    {
        const bool branch_taken_0x1edf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF88u;
        // 0x1edf8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf88) {
            ctx->pc = 0x1EDFB0u;
            goto label_1edfb0;
        }
    }
    ctx->pc = 0x1EDF90u;
    // 0x1edf90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1edf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf94: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1edf94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf98: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1edf98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf9c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1edf9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfa0: 0xc07b72a  jal         func_1EDCA8
    ctx->pc = 0x1EDFA0u;
    SET_GPR_U32(ctx, 31, 0x1EDFA8u);
    ctx->pc = 0x1EDFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFA0u;
    // 0x1edfa4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDCA8u, 0x1EDFA0u, 0x1EDFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFA8u;
label_1edfa8:
    // 0x1edfa8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1EDFA8u;
    {
        const bool branch_taken_0x1edfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edfa8) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDFB0u;
label_1edfb0:
    // 0x1edfb0: 0xc098b88  jal         func_262E20
    ctx->pc = 0x1EDFB0u;
    SET_GPR_U32(ctx, 31, 0x1EDFB8u);
    ctx->pc = 0x1EDFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFB0u;
    // 0x1edfb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E20u, 0x1EDFB0u, 0x1EDFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFB8u;
label_1edfb8:
    // 0x1edfb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EDFB8u;
    {
        const bool branch_taken_0x1edfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFB8u;
        // 0x1edfbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfb8) {
            ctx->pc = 0x1EDFE0u;
            goto label_1edfe0;
        }
    }
    ctx->pc = 0x1EDFC0u;
    // 0x1edfc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1edfc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfc4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1edfc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfc8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1edfc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfcc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1edfccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfd0: 0xc07b738  jal         func_1EDCE0
    ctx->pc = 0x1EDFD0u;
    SET_GPR_U32(ctx, 31, 0x1EDFD8u);
    ctx->pc = 0x1EDFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFD0u;
    // 0x1edfd4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDCE0u, 0x1EDFD0u, 0x1EDFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFD8u;
label_1edfd8:
    // 0x1edfd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EDFD8u;
    {
        const bool branch_taken_0x1edfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edfd8) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDFE0u;
label_1edfe0:
    // 0x1edfe0: 0xc098b98  jal         func_262E60
    ctx->pc = 0x1EDFE0u;
    SET_GPR_U32(ctx, 31, 0x1EDFE8u);
    ctx->pc = 0x1EDFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFE0u;
    // 0x1edfe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E60u, 0x1EDFE0u, 0x1EDFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFE8u;
label_1edfe8:
    // 0x1edfe8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EDFE8u;
    {
        const bool branch_taken_0x1edfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFE8u;
        // 0x1edfec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfe8) {
            ctx->pc = 0x1EE020u;
            goto label_1ee020;
        }
    }
    ctx->pc = 0x1EDFF0u;
    // 0x1edff0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1edff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edff4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1edff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edff8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1edff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edffc: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1edffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee000: 0xc07b740  jal         func_1EDD00
    ctx->pc = 0x1EE000u;
    SET_GPR_U32(ctx, 31, 0x1EE008u);
    ctx->pc = 0x1EE004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE000u;
    // 0x1ee004: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDD00u, 0x1EE000u, 0x1EE008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE008u;
label_1ee008:
    // 0x1ee008: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE008u;
    {
        const bool branch_taken_0x1ee008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE008u;
        // 0x1ee00c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee008) {
            ctx->pc = 0x1EE020u;
            goto label_1ee020;
        }
    }
    ctx->pc = 0x1EE010u;
    // 0x1ee010: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE010u;
    {
        const bool branch_taken_0x1ee010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE010u;
        // 0x1ee014: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee010) {
            ctx->pc = 0x1EE028u;
            goto label_1ee028;
        }
    }
    ctx->pc = 0x1EE018u;
label_1ee018:
    // 0x1ee018: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1EE018u;
    SET_GPR_U32(ctx, 31, 0x1EE020u);
    ctx->pc = 0x1EE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE018u;
    // 0x1ee01c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1EE018u, 0x1EE020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE020u;
label_1ee020:
    // 0x1ee020: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ee020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ee024:
    // 0x1ee024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ee024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ee028:
    // 0x1ee028: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ee028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ee02c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ee02cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee030: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ee030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ee034: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ee034u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee038: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ee038u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee03c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ee03cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee040: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ee040u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ee044: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ee044u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee048: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ee048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ee04c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE04Cu;
        // 0x1ee050: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE054u;
    // 0x1ee054: 0x0  nop
    ctx->pc = 0x1ee054u;
    // NOP
    ctx->pc = 0x1ee058u;
}
