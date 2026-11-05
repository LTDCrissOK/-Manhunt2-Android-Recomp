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

// Function: sub_0011BDC0
// Address: 0x11bdc0 - 0x11c248
void sub_0011BDC0_0x11bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BDC0_0x11bdc0");
#endif

    switch (ctx->pc) {
        case 0x11bde0u: goto label_11bde0;
        case 0x11bdfcu: goto label_11bdfc;
        case 0x11be18u: goto label_11be18;
        case 0x11be34u: goto label_11be34;
        case 0x11be50u: goto label_11be50;
        case 0x11be6cu: goto label_11be6c;
        case 0x11be88u: goto label_11be88;
        case 0x11bea4u: goto label_11bea4;
        case 0x11bec0u: goto label_11bec0;
        case 0x11bedcu: goto label_11bedc;
        case 0x11bef8u: goto label_11bef8;
        case 0x11bf14u: goto label_11bf14;
        case 0x11bf30u: goto label_11bf30;
        case 0x11bf4cu: goto label_11bf4c;
        case 0x11bf68u: goto label_11bf68;
        case 0x11bf84u: goto label_11bf84;
        case 0x11bfa0u: goto label_11bfa0;
        case 0x11bfbcu: goto label_11bfbc;
        case 0x11bfd8u: goto label_11bfd8;
        case 0x11bff4u: goto label_11bff4;
        case 0x11c010u: goto label_11c010;
        case 0x11c02cu: goto label_11c02c;
        case 0x11c048u: goto label_11c048;
        case 0x11c064u: goto label_11c064;
        case 0x11c080u: goto label_11c080;
        case 0x11c09cu: goto label_11c09c;
        case 0x11c0b8u: goto label_11c0b8;
        case 0x11c0d4u: goto label_11c0d4;
        case 0x11c0f0u: goto label_11c0f0;
        case 0x11c10cu: goto label_11c10c;
        case 0x11c128u: goto label_11c128;
        case 0x11c144u: goto label_11c144;
        case 0x11c160u: goto label_11c160;
        case 0x11c17cu: goto label_11c17c;
        case 0x11c198u: goto label_11c198;
        case 0x11c1b4u: goto label_11c1b4;
        case 0x11c1d0u: goto label_11c1d0;
        case 0x11c1ecu: goto label_11c1ec;
        case 0x11c208u: goto label_11c208;
        case 0x11c21cu: goto label_11c21c;
        default: break;
    }

    ctx->pc = 0x11bdc0u;

    // 0x11bdc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11bdc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bdc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11bdc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdcc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11bdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11bdd0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11bdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11bdd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdd8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BDD8u;
    SET_GPR_U32(ctx, 31, 0x11BDE0u);
    ctx->pc = 0x11BDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDD8u;
    // 0x11bddc: 0x24a5ba00  addiu       $a1, $a1, -0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BDD8u, 0x11BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDE0u;
label_11bde0:
    // 0x11bde0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BDE0u;
    {
        const bool branch_taken_0x11bde0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDE0u;
        // 0x11bde4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bde0) {
            ctx->pc = 0x11BDF0u;
            goto label_11bdf0;
        }
    }
    ctx->pc = 0x11BDE8u;
    // 0x11bde8: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x11BDE8u;
    {
        const bool branch_taken_0x11bde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDE8u;
        // 0x11bdec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bde8) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BDF0u;
label_11bdf0:
    // 0x11bdf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bdf4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BDF4u;
    SET_GPR_U32(ctx, 31, 0x11BDFCu);
    ctx->pc = 0x11BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDF4u;
    // 0x11bdf8: 0x24a5ba10  addiu       $a1, $a1, -0x45F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BDF4u, 0x11BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BDFCu;
label_11bdfc:
    // 0x11bdfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BDFCu;
    {
        const bool branch_taken_0x11bdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDFCu;
        // 0x11be00: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bdfc) {
            ctx->pc = 0x11BE0Cu;
            goto label_11be0c;
        }
    }
    ctx->pc = 0x11BE04u;
    // 0x11be04: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x11BE04u;
    {
        const bool branch_taken_0x11be04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE04u;
        // 0x11be08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be04) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BE0Cu;
label_11be0c:
    // 0x11be0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11be0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be10: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BE10u;
    SET_GPR_U32(ctx, 31, 0x11BE18u);
    ctx->pc = 0x11BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE10u;
    // 0x11be14: 0x24a5ba18  addiu       $a1, $a1, -0x45E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BE10u, 0x11BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE18u;
label_11be18:
    // 0x11be18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BE18u;
    {
        const bool branch_taken_0x11be18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE18u;
        // 0x11be1c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be18) {
            ctx->pc = 0x11BE28u;
            goto label_11be28;
        }
    }
    ctx->pc = 0x11BE20u;
    // 0x11be20: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x11BE20u;
    {
        const bool branch_taken_0x11be20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE20u;
        // 0x11be24: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be20) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BE28u;
label_11be28:
    // 0x11be28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11be28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be2c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BE2Cu;
    SET_GPR_U32(ctx, 31, 0x11BE34u);
    ctx->pc = 0x11BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE2Cu;
    // 0x11be30: 0x24a5ba30  addiu       $a1, $a1, -0x45D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BE2Cu, 0x11BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE34u;
label_11be34:
    // 0x11be34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BE34u;
    {
        const bool branch_taken_0x11be34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE34u;
        // 0x11be38: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be34) {
            ctx->pc = 0x11BE44u;
            goto label_11be44;
        }
    }
    ctx->pc = 0x11BE3Cu;
    // 0x11be3c: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x11BE3Cu;
    {
        const bool branch_taken_0x11be3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE3Cu;
        // 0x11be40: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be3c) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BE44u;
label_11be44:
    // 0x11be44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11be44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be48: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BE48u;
    SET_GPR_U32(ctx, 31, 0x11BE50u);
    ctx->pc = 0x11BE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE48u;
    // 0x11be4c: 0x24a5ba38  addiu       $a1, $a1, -0x45C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BE48u, 0x11BE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE50u;
label_11be50:
    // 0x11be50: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BE50u;
    {
        const bool branch_taken_0x11be50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE50u;
        // 0x11be54: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be50) {
            ctx->pc = 0x11BE60u;
            goto label_11be60;
        }
    }
    ctx->pc = 0x11BE58u;
    // 0x11be58: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x11BE58u;
    {
        const bool branch_taken_0x11be58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE58u;
        // 0x11be5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be58) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BE60u;
label_11be60:
    // 0x11be60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11be60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be64: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BE64u;
    SET_GPR_U32(ctx, 31, 0x11BE6Cu);
    ctx->pc = 0x11BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE64u;
    // 0x11be68: 0x24a5ba48  addiu       $a1, $a1, -0x45B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BE64u, 0x11BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE6Cu;
label_11be6c:
    // 0x11be6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BE6Cu;
    {
        const bool branch_taken_0x11be6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE6Cu;
        // 0x11be70: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be6c) {
            ctx->pc = 0x11BE7Cu;
            goto label_11be7c;
        }
    }
    ctx->pc = 0x11BE74u;
    // 0x11be74: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x11BE74u;
    {
        const bool branch_taken_0x11be74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE74u;
        // 0x11be78: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be74) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BE7Cu;
label_11be7c:
    // 0x11be7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11be7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be80: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BE80u;
    SET_GPR_U32(ctx, 31, 0x11BE88u);
    ctx->pc = 0x11BE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE80u;
    // 0x11be84: 0x24a5ba58  addiu       $a1, $a1, -0x45A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BE80u, 0x11BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BE88u;
label_11be88:
    // 0x11be88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BE88u;
    {
        const bool branch_taken_0x11be88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE88u;
        // 0x11be8c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be88) {
            ctx->pc = 0x11BE98u;
            goto label_11be98;
        }
    }
    ctx->pc = 0x11BE90u;
    // 0x11be90: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x11BE90u;
    {
        const bool branch_taken_0x11be90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BE90u;
        // 0x11be94: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11be90) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BE98u;
label_11be98:
    // 0x11be98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be9c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BE9Cu;
    SET_GPR_U32(ctx, 31, 0x11BEA4u);
    ctx->pc = 0x11BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE9Cu;
    // 0x11bea0: 0x24a5ba68  addiu       $a1, $a1, -0x4598 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BE9Cu, 0x11BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEA4u;
label_11bea4:
    // 0x11bea4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BEA4u;
    {
        const bool branch_taken_0x11bea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEA4u;
        // 0x11bea8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bea4) {
            ctx->pc = 0x11BEB4u;
            goto label_11beb4;
        }
    }
    ctx->pc = 0x11BEACu;
    // 0x11beac: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x11BEACu;
    {
        const bool branch_taken_0x11beac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEACu;
        // 0x11beb0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11beac) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BEB4u;
label_11beb4:
    // 0x11beb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11beb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11beb8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BEB8u;
    SET_GPR_U32(ctx, 31, 0x11BEC0u);
    ctx->pc = 0x11BEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEB8u;
    // 0x11bebc: 0x24a5ba80  addiu       $a1, $a1, -0x4580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BEB8u, 0x11BEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEC0u;
label_11bec0:
    // 0x11bec0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BEC0u;
    {
        const bool branch_taken_0x11bec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEC0u;
        // 0x11bec4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bec0) {
            ctx->pc = 0x11BED0u;
            goto label_11bed0;
        }
    }
    ctx->pc = 0x11BEC8u;
    // 0x11bec8: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x11BEC8u;
    {
        const bool branch_taken_0x11bec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEC8u;
        // 0x11becc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bec8) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BED0u;
label_11bed0:
    // 0x11bed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bed4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BED4u;
    SET_GPR_U32(ctx, 31, 0x11BEDCu);
    ctx->pc = 0x11BED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BED4u;
    // 0x11bed8: 0x24a5ba98  addiu       $a1, $a1, -0x4568 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BED4u, 0x11BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEDCu;
label_11bedc:
    // 0x11bedc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BEDCu;
    {
        const bool branch_taken_0x11bedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEDCu;
        // 0x11bee0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bedc) {
            ctx->pc = 0x11BEECu;
            goto label_11beec;
        }
    }
    ctx->pc = 0x11BEE4u;
    // 0x11bee4: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x11BEE4u;
    {
        const bool branch_taken_0x11bee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEE4u;
        // 0x11bee8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bee4) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BEECu;
label_11beec:
    // 0x11beec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11beecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bef0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BEF0u;
    SET_GPR_U32(ctx, 31, 0x11BEF8u);
    ctx->pc = 0x11BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEF0u;
    // 0x11bef4: 0x24a5bab0  addiu       $a1, $a1, -0x4550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BEF0u, 0x11BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BEF8u;
label_11bef8:
    // 0x11bef8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BEF8u;
    {
        const bool branch_taken_0x11bef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEF8u;
        // 0x11befc: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bef8) {
            ctx->pc = 0x11BF08u;
            goto label_11bf08;
        }
    }
    ctx->pc = 0x11BF00u;
    // 0x11bf00: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x11BF00u;
    {
        const bool branch_taken_0x11bf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF00u;
        // 0x11bf04: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf00) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BF08u;
label_11bf08:
    // 0x11bf08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf0c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BF0Cu;
    SET_GPR_U32(ctx, 31, 0x11BF14u);
    ctx->pc = 0x11BF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF0Cu;
    // 0x11bf10: 0x24a5bac0  addiu       $a1, $a1, -0x4540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BF0Cu, 0x11BF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF14u;
label_11bf14:
    // 0x11bf14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BF14u;
    {
        const bool branch_taken_0x11bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF14u;
        // 0x11bf18: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf14) {
            ctx->pc = 0x11BF24u;
            goto label_11bf24;
        }
    }
    ctx->pc = 0x11BF1Cu;
    // 0x11bf1c: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x11BF1Cu;
    {
        const bool branch_taken_0x11bf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF1Cu;
        // 0x11bf20: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf1c) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BF24u;
label_11bf24:
    // 0x11bf24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bf24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf28: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BF28u;
    SET_GPR_U32(ctx, 31, 0x11BF30u);
    ctx->pc = 0x11BF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF28u;
    // 0x11bf2c: 0x24a5bad8  addiu       $a1, $a1, -0x4528 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BF28u, 0x11BF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF30u;
label_11bf30:
    // 0x11bf30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BF30u;
    {
        const bool branch_taken_0x11bf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF30u;
        // 0x11bf34: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf30) {
            ctx->pc = 0x11BF40u;
            goto label_11bf40;
        }
    }
    ctx->pc = 0x11BF38u;
    // 0x11bf38: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x11BF38u;
    {
        const bool branch_taken_0x11bf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF38u;
        // 0x11bf3c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf38) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BF40u;
label_11bf40:
    // 0x11bf40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf44: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BF44u;
    SET_GPR_U32(ctx, 31, 0x11BF4Cu);
    ctx->pc = 0x11BF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF44u;
    // 0x11bf48: 0x24a5bae8  addiu       $a1, $a1, -0x4518 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BF44u, 0x11BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF4Cu;
label_11bf4c:
    // 0x11bf4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BF4Cu;
    {
        const bool branch_taken_0x11bf4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF4Cu;
        // 0x11bf50: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf4c) {
            ctx->pc = 0x11BF5Cu;
            goto label_11bf5c;
        }
    }
    ctx->pc = 0x11BF54u;
    // 0x11bf54: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x11BF54u;
    {
        const bool branch_taken_0x11bf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF54u;
        // 0x11bf58: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf54) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BF5Cu;
label_11bf5c:
    // 0x11bf5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf60: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BF60u;
    SET_GPR_U32(ctx, 31, 0x11BF68u);
    ctx->pc = 0x11BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF60u;
    // 0x11bf64: 0x24a5baf8  addiu       $a1, $a1, -0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BF60u, 0x11BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF68u;
label_11bf68:
    // 0x11bf68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BF68u;
    {
        const bool branch_taken_0x11bf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF68u;
        // 0x11bf6c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf68) {
            ctx->pc = 0x11BF78u;
            goto label_11bf78;
        }
    }
    ctx->pc = 0x11BF70u;
    // 0x11bf70: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x11BF70u;
    {
        const bool branch_taken_0x11bf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF70u;
        // 0x11bf74: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf70) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BF78u;
label_11bf78:
    // 0x11bf78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf7c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BF7Cu;
    SET_GPR_U32(ctx, 31, 0x11BF84u);
    ctx->pc = 0x11BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF7Cu;
    // 0x11bf80: 0x24a5bb08  addiu       $a1, $a1, -0x44F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BF7Cu, 0x11BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BF84u;
label_11bf84:
    // 0x11bf84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BF84u;
    {
        const bool branch_taken_0x11bf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF84u;
        // 0x11bf88: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf84) {
            ctx->pc = 0x11BF94u;
            goto label_11bf94;
        }
    }
    ctx->pc = 0x11BF8Cu;
    // 0x11bf8c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x11BF8Cu;
    {
        const bool branch_taken_0x11bf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BF8Cu;
        // 0x11bf90: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bf8c) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BF94u;
label_11bf94:
    // 0x11bf94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bf98: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BF98u;
    SET_GPR_U32(ctx, 31, 0x11BFA0u);
    ctx->pc = 0x11BF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BF98u;
    // 0x11bf9c: 0x24a5bb18  addiu       $a1, $a1, -0x44E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BF98u, 0x11BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFA0u;
label_11bfa0:
    // 0x11bfa0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BFA0u;
    {
        const bool branch_taken_0x11bfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFA0u;
        // 0x11bfa4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfa0) {
            ctx->pc = 0x11BFB0u;
            goto label_11bfb0;
        }
    }
    ctx->pc = 0x11BFA8u;
    // 0x11bfa8: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x11BFA8u;
    {
        const bool branch_taken_0x11bfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFA8u;
        // 0x11bfac: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfa8) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BFB0u;
label_11bfb0:
    // 0x11bfb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfb4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BFB4u;
    SET_GPR_U32(ctx, 31, 0x11BFBCu);
    ctx->pc = 0x11BFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFB4u;
    // 0x11bfb8: 0x24a5bb28  addiu       $a1, $a1, -0x44D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BFB4u, 0x11BFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFBCu;
label_11bfbc:
    // 0x11bfbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BFBCu;
    {
        const bool branch_taken_0x11bfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFBCu;
        // 0x11bfc0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfbc) {
            ctx->pc = 0x11BFCCu;
            goto label_11bfcc;
        }
    }
    ctx->pc = 0x11BFC4u;
    // 0x11bfc4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x11BFC4u;
    {
        const bool branch_taken_0x11bfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFC4u;
        // 0x11bfc8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfc4) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BFCCu;
label_11bfcc:
    // 0x11bfcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bfccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfd0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BFD0u;
    SET_GPR_U32(ctx, 31, 0x11BFD8u);
    ctx->pc = 0x11BFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFD0u;
    // 0x11bfd4: 0x24a5bb38  addiu       $a1, $a1, -0x44C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BFD0u, 0x11BFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFD8u;
label_11bfd8:
    // 0x11bfd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BFD8u;
    {
        const bool branch_taken_0x11bfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFD8u;
        // 0x11bfdc: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfd8) {
            ctx->pc = 0x11BFE8u;
            goto label_11bfe8;
        }
    }
    ctx->pc = 0x11BFE0u;
    // 0x11bfe0: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x11BFE0u;
    {
        const bool branch_taken_0x11bfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFE0u;
        // 0x11bfe4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bfe0) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11BFE8u;
label_11bfe8:
    // 0x11bfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfec: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11BFECu;
    SET_GPR_U32(ctx, 31, 0x11BFF4u);
    ctx->pc = 0x11BFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BFECu;
    // 0x11bff0: 0x24a5bb50  addiu       $a1, $a1, -0x44B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11BFECu, 0x11BFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BFF4u;
label_11bff4:
    // 0x11bff4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BFF4u;
    {
        const bool branch_taken_0x11bff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFF4u;
        // 0x11bff8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bff4) {
            ctx->pc = 0x11C004u;
            goto label_11c004;
        }
    }
    ctx->pc = 0x11BFFCu;
    // 0x11bffc: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x11BFFCu;
    {
        const bool branch_taken_0x11bffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BFFCu;
        // 0x11c000: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bffc) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C004u;
label_11c004:
    // 0x11c004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c008: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C008u;
    SET_GPR_U32(ctx, 31, 0x11C010u);
    ctx->pc = 0x11C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C008u;
    // 0x11c00c: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C008u, 0x11C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C010u;
label_11c010:
    // 0x11c010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C010u;
    {
        const bool branch_taken_0x11c010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C010u;
        // 0x11c014: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c010) {
            ctx->pc = 0x11C020u;
            goto label_11c020;
        }
    }
    ctx->pc = 0x11C018u;
    // 0x11c018: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x11C018u;
    {
        const bool branch_taken_0x11c018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C018u;
        // 0x11c01c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c018) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C020u;
label_11c020:
    // 0x11c020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c024: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C024u;
    SET_GPR_U32(ctx, 31, 0x11C02Cu);
    ctx->pc = 0x11C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C024u;
    // 0x11c028: 0x24a5bb70  addiu       $a1, $a1, -0x4490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C024u, 0x11C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C02Cu;
label_11c02c:
    // 0x11c02c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C02Cu;
    {
        const bool branch_taken_0x11c02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C02Cu;
        // 0x11c030: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c02c) {
            ctx->pc = 0x11C03Cu;
            goto label_11c03c;
        }
    }
    ctx->pc = 0x11C034u;
    // 0x11c034: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x11C034u;
    {
        const bool branch_taken_0x11c034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C034u;
        // 0x11c038: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c034) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C03Cu;
label_11c03c:
    // 0x11c03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c040: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C040u;
    SET_GPR_U32(ctx, 31, 0x11C048u);
    ctx->pc = 0x11C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C040u;
    // 0x11c044: 0x24a5bb80  addiu       $a1, $a1, -0x4480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C040u, 0x11C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C048u;
label_11c048:
    // 0x11c048: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C048u;
    {
        const bool branch_taken_0x11c048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C048u;
        // 0x11c04c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c048) {
            ctx->pc = 0x11C058u;
            goto label_11c058;
        }
    }
    ctx->pc = 0x11C050u;
    // 0x11c050: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x11C050u;
    {
        const bool branch_taken_0x11c050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C050u;
        // 0x11c054: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c050) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C058u;
label_11c058:
    // 0x11c058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c05c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C05Cu;
    SET_GPR_U32(ctx, 31, 0x11C064u);
    ctx->pc = 0x11C060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C05Cu;
    // 0x11c060: 0x24a5bb90  addiu       $a1, $a1, -0x4470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C05Cu, 0x11C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C064u;
label_11c064:
    // 0x11c064: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C064u;
    {
        const bool branch_taken_0x11c064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C064u;
        // 0x11c068: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c064) {
            ctx->pc = 0x11C074u;
            goto label_11c074;
        }
    }
    ctx->pc = 0x11C06Cu;
    // 0x11c06c: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x11C06Cu;
    {
        const bool branch_taken_0x11c06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C06Cu;
        // 0x11c070: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c06c) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C074u;
label_11c074:
    // 0x11c074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c078: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C078u;
    SET_GPR_U32(ctx, 31, 0x11C080u);
    ctx->pc = 0x11C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C078u;
    // 0x11c07c: 0x24a5bba0  addiu       $a1, $a1, -0x4460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C078u, 0x11C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C080u;
label_11c080:
    // 0x11c080: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C080u;
    {
        const bool branch_taken_0x11c080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C080u;
        // 0x11c084: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c080) {
            ctx->pc = 0x11C090u;
            goto label_11c090;
        }
    }
    ctx->pc = 0x11C088u;
    // 0x11c088: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x11C088u;
    {
        const bool branch_taken_0x11c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C088u;
        // 0x11c08c: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c088) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C090u;
label_11c090:
    // 0x11c090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c094: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C094u;
    SET_GPR_U32(ctx, 31, 0x11C09Cu);
    ctx->pc = 0x11C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C094u;
    // 0x11c098: 0x24a5bbb0  addiu       $a1, $a1, -0x4450 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C094u, 0x11C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C09Cu;
label_11c09c:
    // 0x11c09c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C09Cu;
    {
        const bool branch_taken_0x11c09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C09Cu;
        // 0x11c0a0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c09c) {
            ctx->pc = 0x11C0ACu;
            goto label_11c0ac;
        }
    }
    ctx->pc = 0x11C0A4u;
    // 0x11c0a4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x11C0A4u;
    {
        const bool branch_taken_0x11c0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0A4u;
        // 0x11c0a8: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0a4) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C0ACu;
label_11c0ac:
    // 0x11c0ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0b0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C0B0u;
    SET_GPR_U32(ctx, 31, 0x11C0B8u);
    ctx->pc = 0x11C0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0B0u;
    // 0x11c0b4: 0x24a5bbc0  addiu       $a1, $a1, -0x4440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C0B0u, 0x11C0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0B8u;
label_11c0b8:
    // 0x11c0b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C0B8u;
    {
        const bool branch_taken_0x11c0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0B8u;
        // 0x11c0bc: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0b8) {
            ctx->pc = 0x11C0C8u;
            goto label_11c0c8;
        }
    }
    ctx->pc = 0x11C0C0u;
    // 0x11c0c0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x11C0C0u;
    {
        const bool branch_taken_0x11c0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0C0u;
        // 0x11c0c4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0c0) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C0C8u;
label_11c0c8:
    // 0x11c0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0cc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C0CCu;
    SET_GPR_U32(ctx, 31, 0x11C0D4u);
    ctx->pc = 0x11C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0CCu;
    // 0x11c0d0: 0x24a5bbd0  addiu       $a1, $a1, -0x4430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C0CCu, 0x11C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0D4u;
label_11c0d4:
    // 0x11c0d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C0D4u;
    {
        const bool branch_taken_0x11c0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0D4u;
        // 0x11c0d8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0d4) {
            ctx->pc = 0x11C0E4u;
            goto label_11c0e4;
        }
    }
    ctx->pc = 0x11C0DCu;
    // 0x11c0dc: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x11C0DCu;
    {
        const bool branch_taken_0x11c0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0DCu;
        // 0x11c0e0: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0dc) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C0E4u;
label_11c0e4:
    // 0x11c0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c0e8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C0E8u;
    SET_GPR_U32(ctx, 31, 0x11C0F0u);
    ctx->pc = 0x11C0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C0E8u;
    // 0x11c0ec: 0x24a5bbe0  addiu       $a1, $a1, -0x4420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C0E8u, 0x11C0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C0F0u;
label_11c0f0:
    // 0x11c0f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C0F0u;
    {
        const bool branch_taken_0x11c0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0F0u;
        // 0x11c0f4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0f0) {
            ctx->pc = 0x11C100u;
            goto label_11c100;
        }
    }
    ctx->pc = 0x11C0F8u;
    // 0x11c0f8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x11C0F8u;
    {
        const bool branch_taken_0x11c0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C0F8u;
        // 0x11c0fc: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c0f8) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C100u;
label_11c100:
    // 0x11c100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c104: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C104u;
    SET_GPR_U32(ctx, 31, 0x11C10Cu);
    ctx->pc = 0x11C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C104u;
    // 0x11c108: 0x24a5bbf0  addiu       $a1, $a1, -0x4410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C104u, 0x11C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C10Cu;
label_11c10c:
    // 0x11c10c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C10Cu;
    {
        const bool branch_taken_0x11c10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C10Cu;
        // 0x11c110: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c10c) {
            ctx->pc = 0x11C11Cu;
            goto label_11c11c;
        }
    }
    ctx->pc = 0x11C114u;
    // 0x11c114: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x11C114u;
    {
        const bool branch_taken_0x11c114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C114u;
        // 0x11c118: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c114) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C11Cu;
label_11c11c:
    // 0x11c11c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c120: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C120u;
    SET_GPR_U32(ctx, 31, 0x11C128u);
    ctx->pc = 0x11C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C120u;
    // 0x11c124: 0x24a5bc00  addiu       $a1, $a1, -0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C120u, 0x11C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C128u;
label_11c128:
    // 0x11c128: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C128u;
    {
        const bool branch_taken_0x11c128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C128u;
        // 0x11c12c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c128) {
            ctx->pc = 0x11C138u;
            goto label_11c138;
        }
    }
    ctx->pc = 0x11C130u;
    // 0x11c130: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x11C130u;
    {
        const bool branch_taken_0x11c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C130u;
        // 0x11c134: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c130) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C138u;
label_11c138:
    // 0x11c138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c13c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C13Cu;
    SET_GPR_U32(ctx, 31, 0x11C144u);
    ctx->pc = 0x11C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C13Cu;
    // 0x11c140: 0x24a5bc08  addiu       $a1, $a1, -0x43F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C13Cu, 0x11C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C144u;
label_11c144:
    // 0x11c144: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C144u;
    {
        const bool branch_taken_0x11c144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C144u;
        // 0x11c148: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c144) {
            ctx->pc = 0x11C154u;
            goto label_11c154;
        }
    }
    ctx->pc = 0x11C14Cu;
    // 0x11c14c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11C14Cu;
    {
        const bool branch_taken_0x11c14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C14Cu;
        // 0x11c150: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c14c) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C154u;
label_11c154:
    // 0x11c154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c158: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C158u;
    SET_GPR_U32(ctx, 31, 0x11C160u);
    ctx->pc = 0x11C15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C158u;
    // 0x11c15c: 0x24a5bc18  addiu       $a1, $a1, -0x43E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C158u, 0x11C160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C160u;
label_11c160:
    // 0x11c160: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C160u;
    {
        const bool branch_taken_0x11c160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C160u;
        // 0x11c164: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c160) {
            ctx->pc = 0x11C170u;
            goto label_11c170;
        }
    }
    ctx->pc = 0x11C168u;
    // 0x11c168: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x11C168u;
    {
        const bool branch_taken_0x11c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C168u;
        // 0x11c16c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c168) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C170u;
label_11c170:
    // 0x11c170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c174: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C174u;
    SET_GPR_U32(ctx, 31, 0x11C17Cu);
    ctx->pc = 0x11C178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C174u;
    // 0x11c178: 0x24a5bc28  addiu       $a1, $a1, -0x43D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C174u, 0x11C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C17Cu;
label_11c17c:
    // 0x11c17c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C17Cu;
    {
        const bool branch_taken_0x11c17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C17Cu;
        // 0x11c180: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c17c) {
            ctx->pc = 0x11C18Cu;
            goto label_11c18c;
        }
    }
    ctx->pc = 0x11C184u;
    // 0x11c184: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11C184u;
    {
        const bool branch_taken_0x11c184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C184u;
        // 0x11c188: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c184) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C18Cu;
label_11c18c:
    // 0x11c18c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c190: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C190u;
    SET_GPR_U32(ctx, 31, 0x11C198u);
    ctx->pc = 0x11C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C190u;
    // 0x11c194: 0x24a5bc38  addiu       $a1, $a1, -0x43C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C190u, 0x11C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C198u;
label_11c198:
    // 0x11c198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C198u;
    {
        const bool branch_taken_0x11c198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C198u;
        // 0x11c19c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c198) {
            ctx->pc = 0x11C1A8u;
            goto label_11c1a8;
        }
    }
    ctx->pc = 0x11C1A0u;
    // 0x11c1a0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11C1A0u;
    {
        const bool branch_taken_0x11c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1A0u;
        // 0x11c1a4: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1a0) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C1A8u;
label_11c1a8:
    // 0x11c1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1ac: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C1ACu;
    SET_GPR_U32(ctx, 31, 0x11C1B4u);
    ctx->pc = 0x11C1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1ACu;
    // 0x11c1b0: 0x24a5bc48  addiu       $a1, $a1, -0x43B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C1ACu, 0x11C1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1B4u;
label_11c1b4:
    // 0x11c1b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C1B4u;
    {
        const bool branch_taken_0x11c1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1B4u;
        // 0x11c1b8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1b4) {
            ctx->pc = 0x11C1C4u;
            goto label_11c1c4;
        }
    }
    ctx->pc = 0x11C1BCu;
    // 0x11c1bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11C1BCu;
    {
        const bool branch_taken_0x11c1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1BCu;
        // 0x11c1c0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1bc) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C1C4u;
label_11c1c4:
    // 0x11c1c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1c8: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C1C8u;
    SET_GPR_U32(ctx, 31, 0x11C1D0u);
    ctx->pc = 0x11C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1C8u;
    // 0x11c1cc: 0x24a5bc58  addiu       $a1, $a1, -0x43A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C1C8u, 0x11C1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1D0u;
label_11c1d0:
    // 0x11c1d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C1D0u;
    {
        const bool branch_taken_0x11c1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1D0u;
        // 0x11c1d4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1d0) {
            ctx->pc = 0x11C1E0u;
            goto label_11c1e0;
        }
    }
    ctx->pc = 0x11C1D8u;
    // 0x11c1d8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11C1D8u;
    {
        const bool branch_taken_0x11c1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1D8u;
        // 0x11c1dc: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1d8) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C1E0u;
label_11c1e0:
    // 0x11c1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c1e4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C1E4u;
    SET_GPR_U32(ctx, 31, 0x11C1ECu);
    ctx->pc = 0x11C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C1E4u;
    // 0x11c1e8: 0x24a5bc68  addiu       $a1, $a1, -0x4398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C1E4u, 0x11C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C1ECu;
label_11c1ec:
    // 0x11c1ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C1ECu;
    {
        const bool branch_taken_0x11c1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1ECu;
        // 0x11c1f0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1ec) {
            ctx->pc = 0x11C1FCu;
            goto label_11c1fc;
        }
    }
    ctx->pc = 0x11C1F4u;
    // 0x11c1f4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11C1F4u;
    {
        const bool branch_taken_0x11c1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C1F4u;
        // 0x11c1f8: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c1f4) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C1FCu;
label_11c1fc:
    // 0x11c1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c200: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C200u;
    SET_GPR_U32(ctx, 31, 0x11C208u);
    ctx->pc = 0x11C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C200u;
    // 0x11c204: 0x24a5bc78  addiu       $a1, $a1, -0x4388 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C200u, 0x11C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C208u;
label_11c208:
    // 0x11c208: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C208u;
    {
        const bool branch_taken_0x11c208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C208u;
        // 0x11c20c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c208) {
            ctx->pc = 0x11C230u;
            goto label_11c230;
        }
    }
    ctx->pc = 0x11C210u;
    // 0x11c210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c214: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C214u;
    SET_GPR_U32(ctx, 31, 0x11C21Cu);
    ctx->pc = 0x11C218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C214u;
    // 0x11c218: 0x24a5bc88  addiu       $a1, $a1, -0x4378 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C214u, 0x11C21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C21Cu;
label_11c21c:
    // 0x11c21c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x11c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x11c220: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x11c220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x11c224: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11c224u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11c228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C228u;
    {
        const bool branch_taken_0x11c228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C228u;
        // 0x11c22c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c228) {
            ctx->pc = 0x11C234u;
            goto label_11c234;
        }
    }
    ctx->pc = 0x11C230u;
label_11c230:
    // 0x11c230: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x11c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_11c234:
    // 0x11c234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c238: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11c238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c23c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C23Cu;
        // 0x11c240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C244u;
    // 0x11c244: 0x0  nop
    ctx->pc = 0x11c244u;
    // NOP
    ctx->pc = 0x11c248u;
}
