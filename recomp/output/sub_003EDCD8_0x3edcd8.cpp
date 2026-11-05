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

// Function: sub_003EDCD8
// Address: 0x3edcd8 - 0x3edf28
void sub_003EDCD8_0x3edcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDCD8_0x3edcd8");
#endif

    switch (ctx->pc) {
        case 0x3edd44u: goto label_3edd44;
        case 0x3edd68u: goto label_3edd68;
        case 0x3edd9cu: goto label_3edd9c;
        case 0x3eddd8u: goto label_3eddd8;
        case 0x3ede08u: goto label_3ede08;
        case 0x3ede18u: goto label_3ede18;
        case 0x3ede34u: goto label_3ede34;
        case 0x3ede50u: goto label_3ede50;
        default: break;
    }

    ctx->pc = 0x3edcd8u;

    // 0x3edcd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3edcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3edcdc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3edcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3edce0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3edce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3edce4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3edce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edce8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3edce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3edcec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3edcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3edcf0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3edcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3edcf4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3edcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3edcf8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3edcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3edcfc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x3edcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x3edd00: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3edd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3edd04: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x3edd04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3edd08: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3edd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3edd0c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3edd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3edd10: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3edd10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3edd14: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x3edd14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3edd18: 0x50400059  beql        $v0, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x3EDD18u;
    {
        const bool branch_taken_0x3edd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edd18) {
            ctx->pc = 0x3EDD1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDD18u;
            // 0x3edd1c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDE80u;
            goto label_3ede80;
        }
    }
    ctx->pc = 0x3EDD20u;
    // 0x3edd20: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x3edd20u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3edd24: 0x2901023  subu        $v0, $s4, $s0
    ctx->pc = 0x3edd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x3edd28: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3EDD28u;
    {
        const bool branch_taken_0x3edd28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD28u;
        // 0x3edd2c: 0x28903  sra         $s1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edd28) {
            ctx->pc = 0x3EDE3Cu;
            goto label_3ede3c;
        }
    }
    ctx->pc = 0x3EDD30u;
    // 0x3edd30: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EDD30u;
    {
        const bool branch_taken_0x3edd30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD30u;
        // 0x3edd34: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edd30) {
            ctx->pc = 0x3EDD4Cu;
            goto label_3edd4c;
        }
    }
    ctx->pc = 0x3EDD38u;
    // 0x3edd38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3edd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edd3c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EDD3Cu;
    SET_GPR_U32(ctx, 31, 0x3EDD44u);
    ctx->pc = 0x3EDD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDD3Cu;
    // 0x3edd40: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EDD3Cu, 0x3EDD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDD44u;
label_3edd44:
    // 0x3edd44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDD44u;
    {
        const bool branch_taken_0x3edd44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD44u;
        // 0x3edd48: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edd44) {
            ctx->pc = 0x3EDD54u;
            goto label_3edd54;
        }
    }
    ctx->pc = 0x3EDD4Cu;
label_3edd4c:
    // 0x3edd4c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3edd4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edd50: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3edd50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3edd54:
    // 0x3edd54: 0x11b900  sll         $s7, $s1, 4
    ctx->pc = 0x3edd54u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3edd58: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3edd58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edd5c: 0x12540025  beq         $s2, $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x3EDD5Cu;
    {
        const bool branch_taken_0x3edd5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x3EDD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD5Cu;
        // 0x3edd60: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edd5c) {
            ctx->pc = 0x3EDDF4u;
            goto label_3eddf4;
        }
    }
    ctx->pc = 0x3EDD64u;
    // 0x3edd64: 0x0  nop
    ctx->pc = 0x3edd64u;
    // NOP
label_3edd68:
    // 0x3edd68: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x3EDD68u;
    {
        const bool branch_taken_0x3edd68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edd68) {
            ctx->pc = 0x3EDD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDD68u;
            // 0x3edd6c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDDECu;
            goto label_3eddec;
        }
    }
    ctx->pc = 0x3EDD70u;
    // 0x3edd70: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3edd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3edd74: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3edd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3edd78: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3edd78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x3edd7c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3edd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3edd80: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3edd80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3edd84: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3edd84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3edd88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EDD88u;
    {
        const bool branch_taken_0x3edd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD88u;
        // 0x3edd8c: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edd88) {
            ctx->pc = 0x3EDDA4u;
            goto label_3edda4;
        }
    }
    ctx->pc = 0x3EDD90u;
    // 0x3edd90: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x3edd90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3edd94: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EDD94u;
    SET_GPR_U32(ctx, 31, 0x3EDD9Cu);
    ctx->pc = 0x3EDD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDD94u;
    // 0x3edd98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EDD94u, 0x3EDD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDD9Cu;
label_3edd9c:
    // 0x3edd9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDD9Cu;
    {
        const bool branch_taken_0x3edd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDD9Cu;
        // 0x3edda0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edd9c) {
            ctx->pc = 0x3EDDACu;
            goto label_3eddac;
        }
    }
    ctx->pc = 0x3EDDA4u;
label_3edda4:
    // 0x3edda4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3edda4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edda8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3edda8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eddac:
    // 0x3eddac: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3eddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3eddb0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3eddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3eddb4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3eddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3eddb8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3eddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x3eddbc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3eddbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3eddc0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x3eddc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3eddc4: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EDDC4u;
    {
        const bool branch_taken_0x3eddc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x3EDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDDC4u;
        // 0x3eddc8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eddc4) {
            ctx->pc = 0x3EDDE0u;
            goto label_3edde0;
        }
    }
    ctx->pc = 0x3EDDCCu;
    // 0x3eddcc: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x3eddccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3eddd0: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x3EDDD0u;
    SET_GPR_U32(ctx, 31, 0x3EDDD8u);
    ctx->pc = 0x3EDDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDDD0u;
    // 0x3eddd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3EDDD0u, 0x3EDDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDDD8u;
label_3eddd8:
    // 0x3eddd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EDDD8u;
    {
        const bool branch_taken_0x3eddd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDDD8u;
        // 0x3edddc: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eddd8) {
            ctx->pc = 0x3EDDE4u;
            goto label_3edde4;
        }
    }
    ctx->pc = 0x3EDDE0u;
label_3edde0:
    // 0x3edde0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3edde0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3edde4:
    // 0x3edde4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3edde4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3edde8: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x3edde8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3eddec:
    // 0x3eddec: 0x1654ffde  bne         $s2, $s4, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3EDDECu;
    {
        const bool branch_taken_0x3eddec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x3EDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDDECu;
        // 0x3eddf0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eddec) {
            ctx->pc = 0x3EDD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3edd68;
        }
    }
    ctx->pc = 0x3EDDF4u;
label_3eddf4:
    // 0x3eddf4: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x3eddf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3eddf8: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x3eddf8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3eddfc: 0x12110008  beq         $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EDDFCu;
    {
        const bool branch_taken_0x3eddfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3EDE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDDFCu;
        // 0x3ede00: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eddfc) {
            ctx->pc = 0x3EDE20u;
            goto label_3ede20;
        }
    }
    ctx->pc = 0x3EDE04u;
    // 0x3ede04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ede04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ede08:
    // 0x3ede08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EDE08u;
    {
        const bool branch_taken_0x3ede08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE08u;
        // 0x3ede0c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede08) {
            ctx->pc = 0x3EDE18u;
            goto label_3ede18;
        }
    }
    ctx->pc = 0x3EDE10u;
    // 0x3ede10: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EDE10u;
    SET_GPR_U32(ctx, 31, 0x3EDE18u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EDE10u, 0x3EDE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDE18u;
label_3ede18:
    // 0x3ede18: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3EDE18u;
    {
        const bool branch_taken_0x3ede18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x3ede18) {
            ctx->pc = 0x3EDE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDE18u;
            // 0x3ede1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ede08;
        }
    }
    ctx->pc = 0x3EDE20u;
label_3ede20:
    // 0x3ede20: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3ede20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3ede24: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EDE24u;
    {
        const bool branch_taken_0x3ede24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE24u;
        // 0x3ede28: 0x2f21821  addu        $v1, $s7, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede24) {
            ctx->pc = 0x3EDE6Cu;
            goto label_3ede6c;
        }
    }
    ctx->pc = 0x3EDE2Cu;
    // 0x3ede2c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EDE2Cu;
    SET_GPR_U32(ctx, 31, 0x3EDE34u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EDE2Cu, 0x3EDE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDE34u;
label_3ede34:
    // 0x3ede34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3EDE34u;
    {
        const bool branch_taken_0x3ede34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE34u;
        // 0x3ede38: 0x2f21821  addu        $v1, $s7, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede34) {
            ctx->pc = 0x3EDE6Cu;
            goto label_3ede6c;
        }
    }
    ctx->pc = 0x3EDE3Cu;
label_3ede3c:
    // 0x3ede3c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EDE3Cu;
    {
        const bool branch_taken_0x3ede3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE3Cu;
        // 0x3ede40: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede3c) {
            ctx->pc = 0x3EDE58u;
            goto label_3ede58;
        }
    }
    ctx->pc = 0x3EDE44u;
    // 0x3ede44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ede44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede48: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EDE48u;
    SET_GPR_U32(ctx, 31, 0x3EDE50u);
    ctx->pc = 0x3EDE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDE48u;
    // 0x3ede4c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EDE48u, 0x3EDE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDE50u;
label_3ede50:
    // 0x3ede50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3EDE50u;
    {
        const bool branch_taken_0x3ede50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDE50u;
        // 0x3ede54: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ede50) {
            ctx->pc = 0x3EDE64u;
            goto label_3ede64;
        }
    }
    ctx->pc = 0x3EDE58u;
label_3ede58:
    // 0x3ede58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ede58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede5c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3ede5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ede60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3ede60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ede64:
    // 0x3ede64: 0x11b900  sll         $s7, $s1, 4
    ctx->pc = 0x3ede64u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3ede68: 0x2f21821  addu        $v1, $s7, $s2
    ctx->pc = 0x3ede68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_3ede6c:
    // 0x3ede6c: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x3ede6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x3ede70: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x3ede70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x3ede74: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x3ede74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
    // 0x3ede78: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x3ede78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x3ede7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3ede7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ede80:
    // 0x3ede80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3ede80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ede84: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ede84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ede88: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3ede88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3ede8c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3ede8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ede90: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3ede90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3ede94: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3ede94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ede98: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3ede98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3ede9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3ede9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3edea0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDEA0u;
        // 0x3edea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDEA8u;
    // 0x3edea8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3edea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3edeac: 0x0  nop
    ctx->pc = 0x3edeacu;
    // NOP
    // 0x3edeb0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3edeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3edeb4: 0x0  nop
    ctx->pc = 0x3edeb4u;
    // NOP
    // 0x3edeb8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3edeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3edebc: 0x0  nop
    ctx->pc = 0x3edebcu;
    // NOP
    // 0x3edec0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3edec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3edec4: 0x0  nop
    ctx->pc = 0x3edec4u;
    // NOP
    // 0x3edec8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3edec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3edecc: 0x0  nop
    ctx->pc = 0x3edeccu;
    // NOP
    // 0x3eded0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3eded0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3eded4: 0x0  nop
    ctx->pc = 0x3eded4u;
    // NOP
    // 0x3eded8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3eded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3ededc: 0x0  nop
    ctx->pc = 0x3ededcu;
    // NOP
    // 0x3edee0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3edee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3edee4: 0x0  nop
    ctx->pc = 0x3edee4u;
    // NOP
    // 0x3edee8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3edee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3edeec: 0x0  nop
    ctx->pc = 0x3edeecu;
    // NOP
    // 0x3edef0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3edef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3edef4: 0x0  nop
    ctx->pc = 0x3edef4u;
    // NOP
    // 0x3edef8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x3edef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x3edefc: 0x0  nop
    ctx->pc = 0x3edefcu;
    // NOP
    // 0x3edf00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3edf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3edf04: 0x0  nop
    ctx->pc = 0x3edf04u;
    // NOP
    // 0x3edf08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3edf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3edf0c: 0x0  nop
    ctx->pc = 0x3edf0cu;
    // NOP
    // 0x3edf10: 0xe48c63c8  swc1        $f12, 0x63C8($a0)
    ctx->pc = 0x3edf10u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 25544), bits); }
    // 0x3edf14: 0x0  nop
    ctx->pc = 0x3edf14u;
    // NOP
    // 0x3edf18: 0xe4810434  swc1        $f1, 0x434($a0)
    ctx->pc = 0x3edf18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1076), bits); }
    // 0x3edf1c: 0x0  nop
    ctx->pc = 0x3edf1cu;
    // NOP
    // 0x3edf20: 0xa085043c  sb          $a1, 0x43C($a0)
    ctx->pc = 0x3edf20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1084), (uint8_t)GPR_U32(ctx, 5));
    // 0x3edf24: 0x0  nop
    ctx->pc = 0x3edf24u;
    // NOP
    ctx->pc = 0x3edf28u;
}
