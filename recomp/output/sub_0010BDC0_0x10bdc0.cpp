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

// Function: sub_0010BDC0
// Address: 0x10bdc0 - 0x10bf60
void sub_0010BDC0_0x10bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BDC0_0x10bdc0");
#endif

    switch (ctx->pc) {
        case 0x10be08u: goto label_10be08;
        case 0x10be30u: goto label_10be30;
        case 0x10be58u: goto label_10be58;
        case 0x10bee0u: goto label_10bee0;
        default: break;
    }

    ctx->pc = 0x10bdc0u;

    // 0x10bdc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10bdc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10bdc8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x10bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x10bdcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10bdccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bdd0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x10bdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x10bdd4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x10bdd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bdd8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10bddc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x10bddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x10bde0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x10bde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x10bde4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x10bde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x10bde8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x10bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x10bdec: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10bdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10bdf0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x10bdf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x10bdf4: 0x924200cc  lbu         $v0, 0xCC($s2)
    ctx->pc = 0x10bdf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x10bdf8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BDF8u;
    {
        const bool branch_taken_0x10bdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BDF8u;
        // 0x10bdfc: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bdf8) {
            ctx->pc = 0x10BE10u;
            goto label_10be10;
        }
    }
    ctx->pc = 0x10BE00u;
    // 0x10be00: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x10BE00u;
    {
        const bool branch_taken_0x10be00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE00u;
        // 0x10be04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be00) {
            ctx->pc = 0x10BF20u;
            goto label_10bf20;
        }
    }
    ctx->pc = 0x10BE08u;
label_10be08:
    // 0x10be08: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x10BE08u;
    {
        const bool branch_taken_0x10be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE08u;
        // 0x10be0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be08) {
            ctx->pc = 0x10BF20u;
            goto label_10bf20;
        }
    }
    ctx->pc = 0x10BE10u;
label_10be10:
    // 0x10be10: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x10be10u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x10be14: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x10BE14u;
    {
        const bool branch_taken_0x10be14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE14u;
        // 0x10be18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be14) {
            ctx->pc = 0x10BF1Cu;
            goto label_10bf1c;
        }
    }
    ctx->pc = 0x10BE1Cu;
    // 0x10be1c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10be20: 0x3c170049  lui         $s7, 0x49
    ctx->pc = 0x10be20u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)73 << 16));
    // 0x10be24: 0x24539b10  addiu       $s3, $v0, -0x64F0
    ctx->pc = 0x10be24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x10be28: 0x2654000c  addiu       $s4, $s2, 0xC
    ctx->pc = 0x10be28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x10be2c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x10be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_10be30:
    // 0x10be30: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10be34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10be34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10be38: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10be38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10be3c: 0x52000032  beql        $s0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x10BE3Cu;
    {
        const bool branch_taken_0x10be3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10be3c) {
            ctx->pc = 0x10BE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BE3Cu;
            // 0x10be40: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BF08u;
            goto label_10bf08;
        }
    }
    ctx->pc = 0x10BE44u;
    // 0x10be44: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x10be44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10be48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BE48u;
    {
        const bool branch_taken_0x10be48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE48u;
        // 0x10be4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be48) {
            ctx->pc = 0x10BE58u;
            goto label_10be58;
        }
    }
    ctx->pc = 0x10BE50u;
    // 0x10be50: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x10BE50u;
    SET_GPR_U32(ctx, 31, 0x10BE58u);
    ctx->pc = 0x10BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE50u;
    // 0x10be54: 0x26e49a08  addiu       $a0, $s7, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x10BE50u, 0x10BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE58u;
label_10be58:
    // 0x10be58: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x10BE58u;
    {
        const bool branch_taken_0x10be58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE58u;
        // 0x10be5c: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be58) {
            ctx->pc = 0x10BF08u;
            goto label_10bf08;
        }
    }
    ctx->pc = 0x10BE60u;
    // 0x10be60: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x10be60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10be64: 0x50760028  beql        $v1, $s6, . + 4 + (0x28 << 2)
    ctx->pc = 0x10BE64u;
    {
        const bool branch_taken_0x10be64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x10be64) {
            ctx->pc = 0x10BE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BE64u;
            // 0x10be68: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BF08u;
            goto label_10bf08;
        }
    }
    ctx->pc = 0x10BE6Cu;
    // 0x10be6c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x10be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x10be70: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x10BE70u;
    {
        const bool branch_taken_0x10be70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10be70) {
            ctx->pc = 0x10BE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BE70u;
            // 0x10be74: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BF08u;
            goto label_10bf08;
        }
    }
    ctx->pc = 0x10BE78u;
    // 0x10be78: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x10be78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10be7c: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x10BE7Cu;
    {
        const bool branch_taken_0x10be7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10be7c) {
            ctx->pc = 0x10BE80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BE7Cu;
            // 0x10be80: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BF08u;
            goto label_10bf08;
        }
    }
    ctx->pc = 0x10BE84u;
    // 0x10be84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10be84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10be88: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x10be88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10be8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10be90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BE90u;
    {
        const bool branch_taken_0x10be90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10be90) {
            ctx->pc = 0x10BE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BE90u;
            // 0x10be94: 0x8c4200c0  lw          $v0, 0xC0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BEA0u;
            goto label_10bea0;
        }
    }
    ctx->pc = 0x10BE98u;
    // 0x10be98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10BE98u;
    {
        const bool branch_taken_0x10be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE98u;
        // 0x10be9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be98) {
            ctx->pc = 0x10BEA8u;
            goto label_10bea8;
        }
    }
    ctx->pc = 0x10BEA0u;
label_10bea0:
    // 0x10bea0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x10bea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x10bea4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10bea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10bea8:
    // 0x10bea8: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x10BEA8u;
    {
        const bool branch_taken_0x10bea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bea8) {
            ctx->pc = 0x10BEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BEA8u;
            // 0x10beac: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BF08u;
            goto label_10bf08;
        }
    }
    ctx->pc = 0x10BEB0u;
    // 0x10beb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x10beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10beb4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x10beb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x10beb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10bebc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BEBCu;
    {
        const bool branch_taken_0x10bebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bebc) {
            ctx->pc = 0x10BEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BEBCu;
            // 0x10bec0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BECCu;
            goto label_10becc;
        }
    }
    ctx->pc = 0x10BEC4u;
    // 0x10bec4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10BEC4u;
    {
        const bool branch_taken_0x10bec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEC4u;
        // 0x10bec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bec4) {
            ctx->pc = 0x10BED4u;
            goto label_10bed4;
        }
    }
    ctx->pc = 0x10BECCu;
label_10becc:
    // 0x10becc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10beccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10bed0: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x10bed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_10bed4:
    // 0x10bed4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10bed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bed8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x10BED8u;
    SET_GPR_U32(ctx, 31, 0x10BEE0u);
    ctx->pc = 0x10BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BED8u;
    // 0x10bedc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x10BED8u, 0x10BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BEE0u;
label_10bee0:
    // 0x10bee0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x10bee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10bee4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x10bee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10bee8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x10bee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10beec: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x10beecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x10bef0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x10bef0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x10bef4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x10bef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x10bef8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x10bef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10befc: 0x0  nop
    ctx->pc = 0x10befcu;
    // NOP
    // 0x10bf00: 0x4501ffc1  bc1t        . + 4 + (-0x3F << 2)
    ctx->pc = 0x10BF00u;
    {
        const bool branch_taken_0x10bf00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF00u;
        // 0x10bf04: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf00) {
            ctx->pc = 0x10BE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10be08;
        }
    }
    ctx->pc = 0x10BF08u;
label_10bf08:
    // 0x10bf08: 0x924200cc  lbu         $v0, 0xCC($s2)
    ctx->pc = 0x10bf08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x10bf0c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x10bf0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10bf10: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x10bf10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10bf14: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x10BF14u;
    {
        const bool branch_taken_0x10bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF14u;
        // 0x10bf18: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf14) {
            ctx->pc = 0x10BE30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10be30;
        }
    }
    ctx->pc = 0x10BF1Cu;
label_10bf1c:
    // 0x10bf1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10bf1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bf20:
    // 0x10bf20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10bf20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bf24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x10bf24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10bf28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10bf28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bf2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x10bf2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10bf30: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x10bf30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10bf34: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x10bf34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10bf38: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x10bf38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10bf3c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x10bf3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x10bf40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10bf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10bf44: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x10bf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10bf48: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF48u;
        // 0x10bf4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BF50u;
    // 0x10bf50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10bf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10bf54: 0x0  nop
    ctx->pc = 0x10bf54u;
    // NOP
    // 0x10bf58: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10bf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10bf5c: 0x0  nop
    ctx->pc = 0x10bf5cu;
    // NOP
    ctx->pc = 0x10bf60u;
}
