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

// Function: sub_0020BDF8
// Address: 0x20bdf8 - 0x20c090
void sub_0020BDF8_0x20bdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BDF8_0x20bdf8");
#endif

    switch (ctx->pc) {
        case 0x20be4cu: goto label_20be4c;
        case 0x20be58u: goto label_20be58;
        case 0x20be6cu: goto label_20be6c;
        case 0x20be88u: goto label_20be88;
        case 0x20be9cu: goto label_20be9c;
        case 0x20beb4u: goto label_20beb4;
        case 0x20beccu: goto label_20becc;
        case 0x20bee0u: goto label_20bee0;
        case 0x20bef8u: goto label_20bef8;
        case 0x20bf10u: goto label_20bf10;
        case 0x20bf28u: goto label_20bf28;
        case 0x20bf40u: goto label_20bf40;
        case 0x20bf58u: goto label_20bf58;
        case 0x20bf68u: goto label_20bf68;
        case 0x20bf80u: goto label_20bf80;
        case 0x20bf9cu: goto label_20bf9c;
        case 0x20bfb8u: goto label_20bfb8;
        case 0x20bfccu: goto label_20bfcc;
        case 0x20bfe4u: goto label_20bfe4;
        case 0x20bff8u: goto label_20bff8;
        case 0x20c010u: goto label_20c010;
        case 0x20c024u: goto label_20c024;
        case 0x20c03cu: goto label_20c03c;
        case 0x20c048u: goto label_20c048;
        case 0x20c05cu: goto label_20c05c;
        default: break;
    }

    ctx->pc = 0x20bdf8u;

    // 0x20bdf8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x20bdf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x20bdfc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x20bdfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x20be00: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x20be00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x20be04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20be04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20be08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be0c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x20be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x20be10: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x20be10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x20be14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20be14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be18: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x20be18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x20be1c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x20be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20be20: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x20be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x20be24: 0x3c140046  lui         $s4, 0x46
    ctx->pc = 0x20be24u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)70 << 16));
    // 0x20be28: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x20be28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x20be2c: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x20be2cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
    // 0x20be30: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x20be30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x20be34: 0x3c160046  lui         $s6, 0x46
    ctx->pc = 0x20be34u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
    // 0x20be38: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x20be38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x20be3c: 0x3c170046  lui         $s7, 0x46
    ctx->pc = 0x20be3cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)70 << 16));
    // 0x20be40: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x20be40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x20be44: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x20BE44u;
    SET_GPR_U32(ctx, 31, 0x20BE4Cu);
    ctx->pc = 0x20BE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE44u;
    // 0x20be48: 0x3c1e0046  lui         $fp, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x20BE44u, 0x20BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE4Cu;
label_20be4c:
    // 0x20be4c: 0x3c120046  lui         $s2, 0x46
    ctx->pc = 0x20be4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
    // 0x20be50: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x20BE50u;
    {
        const bool branch_taken_0x20be50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE50u;
        // 0x20be54: 0x3c130046  lui         $s3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be50) {
            ctx->pc = 0x20C03Cu;
            goto label_20c03c;
        }
    }
    ctx->pc = 0x20BE58u;
label_20be58:
    // 0x20be58: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x20BE58u;
    {
        const bool branch_taken_0x20be58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE58u;
        // 0x20be5c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be58) {
            ctx->pc = 0x20C03Cu;
            goto label_20c03c;
        }
    }
    ctx->pc = 0x20BE60u;
    // 0x20be60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20be60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be64: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BE64u;
    SET_GPR_U32(ctx, 31, 0x20BE6Cu);
    ctx->pc = 0x20BE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE64u;
    // 0x20be68: 0x24450f60  addiu       $a1, $v0, 0xF60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BE64u, 0x20BE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE6Cu;
label_20be6c:
    // 0x20be6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20be6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20be70: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x20BE70u;
    {
        const bool branch_taken_0x20be70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE70u;
        // 0x20be74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be70) {
            ctx->pc = 0x20C040u;
            goto label_20c040;
        }
    }
    ctx->pc = 0x20BE78u;
    // 0x20be78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20be78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x20be7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20be7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20be80: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BE80u;
    SET_GPR_U32(ctx, 31, 0x20BE88u);
    ctx->pc = 0x20BE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE80u;
    // 0x20be84: 0x24450f68  addiu       $a1, $v0, 0xF68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BE80u, 0x20BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE88u;
label_20be88:
    // 0x20be88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20be88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20be8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BE8Cu;
    {
        const bool branch_taken_0x20be8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE8Cu;
        // 0x20be90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be8c) {
            ctx->pc = 0x20BEA4u;
            goto label_20bea4;
        }
    }
    ctx->pc = 0x20BE94u;
    // 0x20be94: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x20BE94u;
    SET_GPR_U32(ctx, 31, 0x20BE9Cu);
    ctx->pc = 0x20BE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BE94u;
    // 0x20be98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x20BE94u, 0x20BE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BE9Cu;
label_20be9c:
    // 0x20be9c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x20BE9Cu;
    {
        const bool branch_taken_0x20be9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BE9Cu;
        // 0x20bea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be9c) {
            ctx->pc = 0x20C040u;
            goto label_20c040;
        }
    }
    ctx->pc = 0x20BEA4u;
label_20bea4:
    // 0x20bea4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x20bea8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20bea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20beac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BEACu;
    SET_GPR_U32(ctx, 31, 0x20BEB4u);
    ctx->pc = 0x20BEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEACu;
    // 0x20beb0: 0x24450f78  addiu       $a1, $v0, 0xF78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BEACu, 0x20BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEB4u;
label_20beb4:
    // 0x20beb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20beb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20beb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20BEB8u;
    {
        const bool branch_taken_0x20beb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEB8u;
        // 0x20bebc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20beb8) {
            ctx->pc = 0x20BED4u;
            goto label_20bed4;
        }
    }
    ctx->pc = 0x20BEC0u;
    // 0x20bec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bec4: 0xc09e056  jal         func_278158
    ctx->pc = 0x20BEC4u;
    SET_GPR_U32(ctx, 31, 0x20BECCu);
    ctx->pc = 0x20BEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEC4u;
    // 0x20bec8: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x20BEC4u, 0x20BECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BECCu;
label_20becc:
    // 0x20becc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x20BECCu;
    {
        const bool branch_taken_0x20becc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BECCu;
        // 0x20bed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20becc) {
            ctx->pc = 0x20C040u;
            goto label_20c040;
        }
    }
    ctx->pc = 0x20BED4u;
label_20bed4:
    // 0x20bed4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20bed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bed8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BED8u;
    SET_GPR_U32(ctx, 31, 0x20BEE0u);
    ctx->pc = 0x20BEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BED8u;
    // 0x20bedc: 0x24450f80  addiu       $a1, $v0, 0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BED8u, 0x20BEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEE0u;
label_20bee0:
    // 0x20bee0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20bee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20bee4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x20BEE4u;
    {
        const bool branch_taken_0x20bee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEE4u;
        // 0x20bee8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bee4) {
            ctx->pc = 0x20BFF0u;
            goto label_20bff0;
        }
    }
    ctx->pc = 0x20BEECu;
    // 0x20beec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20beecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bef0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BEF0u;
    SET_GPR_U32(ctx, 31, 0x20BEF8u);
    ctx->pc = 0x20BEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BEF0u;
    // 0x20bef4: 0x27c50f90  addiu       $a1, $fp, 0xF90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BEF0u, 0x20BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BEF8u;
label_20bef8:
    // 0x20bef8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20bef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20befc: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x20BEFCu;
    {
        const bool branch_taken_0x20befc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BEFCu;
        // 0x20bf00: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20befc) {
            ctx->pc = 0x20BFF0u;
            goto label_20bff0;
        }
    }
    ctx->pc = 0x20BF04u;
    // 0x20bf04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20bf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf08: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BF08u;
    SET_GPR_U32(ctx, 31, 0x20BF10u);
    ctx->pc = 0x20BF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF08u;
    // 0x20bf0c: 0x26c50fa0  addiu       $a1, $s6, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BF08u, 0x20BF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF10u;
label_20bf10:
    // 0x20bf10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20bf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20bf14: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x20BF14u;
    {
        const bool branch_taken_0x20bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF14u;
        // 0x20bf18: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf14) {
            ctx->pc = 0x20BFF0u;
            goto label_20bff0;
        }
    }
    ctx->pc = 0x20BF1Cu;
    // 0x20bf1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20bf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf20: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BF20u;
    SET_GPR_U32(ctx, 31, 0x20BF28u);
    ctx->pc = 0x20BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF20u;
    // 0x20bf24: 0x26e50fb0  addiu       $a1, $s7, 0xFB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BF20u, 0x20BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF28u;
label_20bf28:
    // 0x20bf28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20bf2c: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x20BF2Cu;
    {
        const bool branch_taken_0x20bf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF2Cu;
        // 0x20bf30: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf2c) {
            ctx->pc = 0x20BFF0u;
            goto label_20bff0;
        }
    }
    ctx->pc = 0x20BF34u;
    // 0x20bf34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20bf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf38: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BF38u;
    SET_GPR_U32(ctx, 31, 0x20BF40u);
    ctx->pc = 0x20BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF38u;
    // 0x20bf3c: 0x26a50fc0  addiu       $a1, $s5, 0xFC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BF38u, 0x20BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF40u;
label_20bf40:
    // 0x20bf40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20bf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20bf44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20BF44u;
    {
        const bool branch_taken_0x20bf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF44u;
        // 0x20bf48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf44) {
            ctx->pc = 0x20BF60u;
            goto label_20bf60;
        }
    }
    ctx->pc = 0x20BF4Cu;
    // 0x20bf4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf50: 0xc09df16  jal         func_277C58
    ctx->pc = 0x20BF50u;
    SET_GPR_U32(ctx, 31, 0x20BF58u);
    ctx->pc = 0x20BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF50u;
    // 0x20bf54: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x20BF50u, 0x20BF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF58u;
label_20bf58:
    // 0x20bf58: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x20BF58u;
    {
        const bool branch_taken_0x20bf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF58u;
        // 0x20bf5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf58) {
            ctx->pc = 0x20C040u;
            goto label_20c040;
        }
    }
    ctx->pc = 0x20BF60u;
label_20bf60:
    // 0x20bf60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BF60u;
    SET_GPR_U32(ctx, 31, 0x20BF68u);
    ctx->pc = 0x20BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF60u;
    // 0x20bf64: 0x26850fd8  addiu       $a1, $s4, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BF60u, 0x20BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF68u;
label_20bf68:
    // 0x20bf68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20bf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20bf6c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20BF6Cu;
    {
        const bool branch_taken_0x20bf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF6Cu;
        // 0x20bf70: 0x2624002c  addiu       $a0, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf6c) {
            ctx->pc = 0x20BFF0u;
            goto label_20bff0;
        }
    }
    ctx->pc = 0x20BF74u;
    // 0x20bf74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20bf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf78: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BF78u;
    SET_GPR_U32(ctx, 31, 0x20BF80u);
    ctx->pc = 0x20BF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF78u;
    // 0x20bf7c: 0x26450fe8  addiu       $a1, $s2, 0xFE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BF78u, 0x20BF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF80u;
label_20bf80:
    // 0x20bf80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20bf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20bf84: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x20BF84u;
    {
        const bool branch_taken_0x20bf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BF84u;
        // 0x20bf88: 0x26240034  addiu       $a0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf84) {
            ctx->pc = 0x20BFF0u;
            goto label_20bff0;
        }
    }
    ctx->pc = 0x20BF8Cu;
    // 0x20bf8c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20bf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20bf90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20bf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bf94: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BF94u;
    SET_GPR_U32(ctx, 31, 0x20BF9Cu);
    ctx->pc = 0x20BF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BF94u;
    // 0x20bf98: 0x24a50ff8  addiu       $a1, $a1, 0xFF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BF94u, 0x20BF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BF9Cu;
label_20bf9c:
    // 0x20bf9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20bf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20bfa0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20BFA0u;
    {
        const bool branch_taken_0x20bfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFA0u;
        // 0x20bfa4: 0x2624003c  addiu       $a0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfa0) {
            ctx->pc = 0x20BFF0u;
            goto label_20bff0;
        }
    }
    ctx->pc = 0x20BFA8u;
    // 0x20bfa8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20bfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20bfac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20bfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bfb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BFB0u;
    SET_GPR_U32(ctx, 31, 0x20BFB8u);
    ctx->pc = 0x20BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFB0u;
    // 0x20bfb4: 0x24a51008  addiu       $a1, $a1, 0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BFB0u, 0x20BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFB8u;
label_20bfb8:
    // 0x20bfb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20bfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20bfbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BFBCu;
    {
        const bool branch_taken_0x20bfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFBCu;
        // 0x20bfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfbc) {
            ctx->pc = 0x20BFD4u;
            goto label_20bfd4;
        }
    }
    ctx->pc = 0x20BFC4u;
    // 0x20bfc4: 0xc09df16  jal         func_277C58
    ctx->pc = 0x20BFC4u;
    SET_GPR_U32(ctx, 31, 0x20BFCCu);
    ctx->pc = 0x20BFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFC4u;
    // 0x20bfc8: 0x26250044  addiu       $a1, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x20BFC4u, 0x20BFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFCCu;
label_20bfcc:
    // 0x20bfcc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20BFCCu;
    {
        const bool branch_taken_0x20bfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFCCu;
        // 0x20bfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfcc) {
            ctx->pc = 0x20C040u;
            goto label_20c040;
        }
    }
    ctx->pc = 0x20BFD4u;
label_20bfd4:
    // 0x20bfd4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20bfd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20bfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bfdc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20BFDCu;
    SET_GPR_U32(ctx, 31, 0x20BFE4u);
    ctx->pc = 0x20BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFDCu;
    // 0x20bfe0: 0x24a51018  addiu       $a1, $a1, 0x1018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20BFDCu, 0x20BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFE4u;
label_20bfe4:
    // 0x20bfe4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20bfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20bfe8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BFE8u;
    {
        const bool branch_taken_0x20bfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFE8u;
        // 0x20bfec: 0x26240048  addiu       $a0, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfe8) {
            ctx->pc = 0x20C000u;
            goto label_20c000;
        }
    }
    ctx->pc = 0x20BFF0u;
label_20bff0:
    // 0x20bff0: 0xc08304a  jal         func_20C128
    ctx->pc = 0x20BFF0u;
    SET_GPR_U32(ctx, 31, 0x20BFF8u);
    ctx->pc = 0x20BFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BFF0u;
    // 0x20bff4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C128u, 0x20BFF0u, 0x20BFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BFF8u;
label_20bff8:
    // 0x20bff8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x20BFF8u;
    {
        const bool branch_taken_0x20bff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BFF8u;
        // 0x20bffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bff8) {
            ctx->pc = 0x20C040u;
            goto label_20c040;
        }
    }
    ctx->pc = 0x20C000u;
label_20c000:
    // 0x20c000: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20c000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20c004: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c008: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20C008u;
    SET_GPR_U32(ctx, 31, 0x20C010u);
    ctx->pc = 0x20C00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C008u;
    // 0x20c00c: 0x24a51028  addiu       $a1, $a1, 0x1028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20C008u, 0x20C010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C010u;
label_20c010:
    // 0x20c010: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x20c010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20c014: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C014u;
    {
        const bool branch_taken_0x20c014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C014u;
        // 0x20c018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c014) {
            ctx->pc = 0x20C02Cu;
            goto label_20c02c;
        }
    }
    ctx->pc = 0x20C01Cu;
    // 0x20c01c: 0xc09df16  jal         func_277C58
    ctx->pc = 0x20C01Cu;
    SET_GPR_U32(ctx, 31, 0x20C024u);
    ctx->pc = 0x20C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C01Cu;
    // 0x20c020: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277C58u, 0x20C01Cu, 0x20C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C024u;
label_20c024:
    // 0x20c024: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20C024u;
    {
        const bool branch_taken_0x20c024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C024u;
        // 0x20c028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c024) {
            ctx->pc = 0x20C040u;
            goto label_20c040;
        }
    }
    ctx->pc = 0x20C02Cu;
label_20c02c:
    // 0x20c02c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x20c02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c030: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x20c030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20c034: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x20C034u;
    SET_GPR_U32(ctx, 31, 0x20C03Cu);
    ctx->pc = 0x20C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C034u;
    // 0x20c038: 0x26651030  addiu       $a1, $s3, 0x1030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x20C034u, 0x20C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C03Cu;
label_20c03c:
    // 0x20c03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c040:
    // 0x20c040: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x20C040u;
    SET_GPR_U32(ctx, 31, 0x20C048u);
    ctx->pc = 0x20C044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C040u;
    // 0x20c044: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x20C040u, 0x20C048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C048u;
label_20c048:
    // 0x20c048: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x20C048u;
    {
        const bool branch_taken_0x20c048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C048u;
        // 0x20c04c: 0x97a20004  lhu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c048) {
            ctx->pc = 0x20BE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20be58;
        }
    }
    ctx->pc = 0x20C050u;
    // 0x20c050: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20c050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c054: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x20C054u;
    SET_GPR_U32(ctx, 31, 0x20C05Cu);
    ctx->pc = 0x20C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C054u;
    // 0x20c058: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x20C054u, 0x20C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C05Cu;
label_20c05c:
    // 0x20c05c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x20c05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20c060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c064: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x20c064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x20c068: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x20c068u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x20c06c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x20c06cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20c070: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x20c070u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20c074: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x20c074u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x20c078: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x20c078u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20c07c: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x20c07cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x20c080: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x20c080u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20c084: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x20c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x20c088: 0x3e00008  jr          $ra
    ctx->pc = 0x20C088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C088u;
        // 0x20c08c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C090u;
}
