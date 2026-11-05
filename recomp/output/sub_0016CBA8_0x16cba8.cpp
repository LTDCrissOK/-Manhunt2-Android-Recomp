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

// Function: sub_0016CBA8
// Address: 0x16cba8 - 0x16cd48
void sub_0016CBA8_0x16cba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CBA8_0x16cba8");
#endif

    switch (ctx->pc) {
        case 0x16cc28u: goto label_16cc28;
        case 0x16cc50u: goto label_16cc50;
        case 0x16cc64u: goto label_16cc64;
        case 0x16cc78u: goto label_16cc78;
        case 0x16cc8cu: goto label_16cc8c;
        case 0x16ccacu: goto label_16ccac;
        case 0x16ccbcu: goto label_16ccbc;
        case 0x16ccd8u: goto label_16ccd8;
        case 0x16ccf0u: goto label_16ccf0;
        case 0x16cd00u: goto label_16cd00;
        case 0x16cd0cu: goto label_16cd0c;
        case 0x16cd14u: goto label_16cd14;
        case 0x16cd24u: goto label_16cd24;
        case 0x16cd30u: goto label_16cd30;
        default: break;
    }

    ctx->pc = 0x16cba8u;

    // 0x16cba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16cba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16cbac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16cbb0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16cbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16cbb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16cbb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cbb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16cbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16cbbc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16cbc0: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x16cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x16cbc4: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16CBC4u;
    {
        const bool branch_taken_0x16cbc4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CBC4u;
        // 0x16cbc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cbc4) {
            ctx->pc = 0x16CBE8u;
            goto label_16cbe8;
        }
    }
    ctx->pc = 0x16CBCCu;
    // 0x16cbcc: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x16cbccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x16cbd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16CBD0u;
    {
        const bool branch_taken_0x16cbd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cbd0) {
            ctx->pc = 0x16CBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CBD0u;
            // 0x16cbd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CBE8u;
            goto label_16cbe8;
        }
    }
    ctx->pc = 0x16CBD8u;
    // 0x16cbd8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x16cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x16cbdc: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16CBDCu;
    {
        const bool branch_taken_0x16cbdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16cbdc) {
            ctx->pc = 0x16CBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CBDCu;
            // 0x16cbe0: 0x920300f8  lbu         $v1, 0xF8($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CBECu;
            goto label_16cbec;
        }
    }
    ctx->pc = 0x16CBE4u;
    // 0x16cbe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16cbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16cbe8:
    // 0x16cbe8: 0x920300f8  lbu         $v1, 0xF8($s0)
    ctx->pc = 0x16cbe8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 248)));
label_16cbec:
    // 0x16cbec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16cbf0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x16cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16cbf4: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x16cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x16cbf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16cbfc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16cbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16cc00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cc04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16cc08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16cc0c: 0x8c92020c  lw          $s2, 0x20C($a0)
    ctx->pc = 0x16cc0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x16cc10: 0x52400048  beql        $s2, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x16CC10u;
    {
        const bool branch_taken_0x16cc10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc10) {
            ctx->pc = 0x16CC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CC10u;
            // 0x16cc14: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CD34u;
            goto label_16cd34;
        }
    }
    ctx->pc = 0x16CC18u;
    // 0x16cc18: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16CC18u;
    {
        const bool branch_taken_0x16cc18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cc18) {
            ctx->pc = 0x16CC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CC18u;
            // 0x16cc1c: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CC30u;
            goto label_16cc30;
        }
    }
    ctx->pc = 0x16CC20u;
    // 0x16cc20: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x16CC20u;
    SET_GPR_U32(ctx, 31, 0x16CC28u);
    ctx->pc = 0x16CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC20u;
    // 0x16cc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E820u, 0x16CC20u, 0x16CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC28u;
label_16cc28:
    // 0x16cc28: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x16CC28u;
    {
        const bool branch_taken_0x16cc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC28u;
        // 0x16cc2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc28) {
            ctx->pc = 0x16CD34u;
            goto label_16cd34;
        }
    }
    ctx->pc = 0x16CC30u;
label_16cc30:
    // 0x16cc30: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16CC30u;
    {
        const bool branch_taken_0x16cc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc30) {
            ctx->pc = 0x16CC70u;
            goto label_16cc70;
        }
    }
    ctx->pc = 0x16CC38u;
    // 0x16cc38: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x16cc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x16cc3c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x16CC3Cu;
    {
        const bool branch_taken_0x16cc3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CC3Cu;
        // 0x16cc40: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cc3c) {
            ctx->pc = 0x16CC68u;
            goto label_16cc68;
        }
    }
    ctx->pc = 0x16CC44u;
    // 0x16cc44: 0x2451b530  addiu       $s1, $v0, -0x4AD0
    ctx->pc = 0x16cc44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x16cc48: 0xc04b2b6  jal         func_12CAD8
    ctx->pc = 0x16CC48u;
    SET_GPR_U32(ctx, 31, 0x16CC50u);
    ctx->pc = 0x16CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC48u;
    // 0x16cc4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x16CC48u, 0x16CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC50u;
label_16cc50:
    // 0x16cc50: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x16CC50u;
    {
        const bool branch_taken_0x16cc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc50) {
            ctx->pc = 0x16CC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CC50u;
            // 0x16cc54: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CD34u;
            goto label_16cd34;
        }
    }
    ctx->pc = 0x16CC58u;
    // 0x16cc58: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x16cc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x16cc5c: 0xc04b2c0  jal         func_12CB00
    ctx->pc = 0x16CC5Cu;
    SET_GPR_U32(ctx, 31, 0x16CC64u);
    ctx->pc = 0x16CC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC5Cu;
    // 0x16cc60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB00u, 0x16CC5Cu, 0x16CC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC64u;
label_16cc64:
    // 0x16cc64: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x16cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
label_16cc68:
    // 0x16cc68: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x16cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x16cc6c: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x16cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
label_16cc70:
    // 0x16cc70: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16CC70u;
    SET_GPR_U32(ctx, 31, 0x16CC78u);
    ctx->pc = 0x16CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CC70u;
    // 0x16cc74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16CC70u, 0x16CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC78u;
label_16cc78:
    // 0x16cc78: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x16cc78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x16cc7c: 0x14a0000d  bnez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x16CC7Cu;
    {
        const bool branch_taken_0x16cc7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x16cc7c) {
            ctx->pc = 0x16CCB4u;
            goto label_16ccb4;
        }
    }
    ctx->pc = 0x16CC84u;
    // 0x16cc84: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x16CC84u;
    SET_GPR_U32(ctx, 31, 0x16CC8Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x16CC84u, 0x16CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CC8Cu;
label_16cc8c:
    // 0x16cc8c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x16cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16cc90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16cc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cc94: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x16cc94u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16cc98: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16CC98u;
    {
        const bool branch_taken_0x16cc98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cc98) {
            ctx->pc = 0x16CC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CC98u;
            // 0x16cc9c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CCA0u;
            goto label_16cca0;
        }
    }
    ctx->pc = 0x16CCA0u;
label_16cca0:
    // 0x16cca0: 0x2810  mfhi        $a1
    ctx->pc = 0x16cca0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x16cca4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x16CCA4u;
    SET_GPR_U32(ctx, 31, 0x16CCACu);
    ctx->pc = 0x16CCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CCA4u;
    // 0x16cca8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x16CCA4u, 0x16CCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CCACu;
label_16ccac:
    // 0x16ccac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16CCACu;
    {
        const bool branch_taken_0x16ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCACu;
        // 0x16ccb0: 0xae020104  sw          $v0, 0x104($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccac) {
            ctx->pc = 0x16CCE4u;
            goto label_16cce4;
        }
    }
    ctx->pc = 0x16CCB4u;
label_16ccb4:
    // 0x16ccb4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x16CCB4u;
    SET_GPR_U32(ctx, 31, 0x16CCBCu);
    ctx->pc = 0x16CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CCB4u;
    // 0x16ccb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x16CCB4u, 0x16CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CCBCu;
label_16ccbc:
    // 0x16ccbc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16CCBCu;
    {
        const bool branch_taken_0x16ccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCBCu;
        // 0x16ccc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccbc) {
            ctx->pc = 0x16CCE4u;
            goto label_16cce4;
        }
    }
    ctx->pc = 0x16CCC4u;
    // 0x16ccc4: 0x8e0500f4  lw          $a1, 0xF4($s0)
    ctx->pc = 0x16ccc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x16ccc8: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x16ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x16cccc: 0x38a50005  xori        $a1, $a1, 0x5
    ctx->pc = 0x16ccccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
    // 0x16ccd0: 0xc04434c  jal         func_110D30
    ctx->pc = 0x16CCD0u;
    SET_GPR_U32(ctx, 31, 0x16CCD8u);
    ctx->pc = 0x16CCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CCD0u;
    // 0x16ccd4: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x16CCD0u, 0x16CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CCD8u;
label_16ccd8:
    // 0x16ccd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16ccd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ccdc: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16CCDCu;
    {
        const bool branch_taken_0x16ccdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ccdc) {
            ctx->pc = 0x16CCF8u;
            goto label_16ccf8;
        }
    }
    ctx->pc = 0x16CCE4u;
label_16cce4:
    // 0x16cce4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16cce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cce8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16CCE8u;
    SET_GPR_U32(ctx, 31, 0x16CCF0u);
    ctx->pc = 0x16CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CCE8u;
    // 0x16ccec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16CCE8u, 0x16CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CCF0u;
label_16ccf0:
    // 0x16ccf0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16CCF0u;
    {
        const bool branch_taken_0x16ccf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CCF0u;
        // 0x16ccf4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ccf0) {
            ctx->pc = 0x16CD34u;
            goto label_16cd34;
        }
    }
    ctx->pc = 0x16CCF8u;
label_16ccf8:
    // 0x16ccf8: 0xc04631a  jal         func_118C68
    ctx->pc = 0x16CCF8u;
    SET_GPR_U32(ctx, 31, 0x16CD00u);
    ctx->pc = 0x16CCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CCF8u;
    // 0x16ccfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C68u, 0x16CCF8u, 0x16CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD00u;
label_16cd00:
    // 0x16cd00: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x16cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x16cd04: 0xc05b90e  jal         func_16E438
    ctx->pc = 0x16CD04u;
    SET_GPR_U32(ctx, 31, 0x16CD0Cu);
    ctx->pc = 0x16CD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD04u;
    // 0x16cd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E438u, 0x16CD04u, 0x16CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD0Cu;
label_16cd0c:
    // 0x16cd0c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x16CD0Cu;
    SET_GPR_U32(ctx, 31, 0x16CD14u);
    ctx->pc = 0x16CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD0Cu;
    // 0x16cd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x16CD0Cu, 0x16CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD14u;
label_16cd14:
    // 0x16cd14: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16cd14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16cd18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16cd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd1c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x16CD1Cu;
    SET_GPR_U32(ctx, 31, 0x16CD24u);
    ctx->pc = 0x16CD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD1Cu;
    // 0x16cd20: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x16CD1Cu, 0x16CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD24u;
label_16cd24:
    // 0x16cd24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16cd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cd28: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16CD28u;
    SET_GPR_U32(ctx, 31, 0x16CD30u);
    ctx->pc = 0x16CD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CD28u;
    // 0x16cd2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16CD28u, 0x16CD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CD30u;
label_16cd30:
    // 0x16cd30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16cd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16cd34:
    // 0x16cd34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16cd34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16cd38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16cd38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cd3c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16cd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16cd40: 0x3e00008  jr          $ra
    ctx->pc = 0x16CD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD40u;
        // 0x16cd44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CD48u;
}
