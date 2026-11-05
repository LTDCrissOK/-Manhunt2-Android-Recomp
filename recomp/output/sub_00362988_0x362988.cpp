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

// Function: sub_00362988
// Address: 0x362988 - 0x362a40
void sub_00362988_0x362988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362988_0x362988");
#endif

    switch (ctx->pc) {
        case 0x362988u: goto label_362988;
        case 0x36298cu: goto label_36298c;
        case 0x362990u: goto label_362990;
        case 0x362994u: goto label_362994;
        case 0x362998u: goto label_362998;
        case 0x36299cu: goto label_36299c;
        case 0x3629a0u: goto label_3629a0;
        case 0x3629a4u: goto label_3629a4;
        case 0x3629a8u: goto label_3629a8;
        case 0x3629acu: goto label_3629ac;
        case 0x3629b0u: goto label_3629b0;
        case 0x3629b4u: goto label_3629b4;
        case 0x3629b8u: goto label_3629b8;
        case 0x3629bcu: goto label_3629bc;
        case 0x3629c0u: goto label_3629c0;
        case 0x3629c4u: goto label_3629c4;
        case 0x3629c8u: goto label_3629c8;
        case 0x3629ccu: goto label_3629cc;
        case 0x3629d0u: goto label_3629d0;
        case 0x3629d4u: goto label_3629d4;
        case 0x3629d8u: goto label_3629d8;
        case 0x3629dcu: goto label_3629dc;
        case 0x3629e0u: goto label_3629e0;
        case 0x3629e4u: goto label_3629e4;
        case 0x3629e8u: goto label_3629e8;
        case 0x3629ecu: goto label_3629ec;
        case 0x3629f0u: goto label_3629f0;
        case 0x3629f4u: goto label_3629f4;
        case 0x3629f8u: goto label_3629f8;
        case 0x3629fcu: goto label_3629fc;
        case 0x362a00u: goto label_362a00;
        case 0x362a04u: goto label_362a04;
        case 0x362a08u: goto label_362a08;
        case 0x362a0cu: goto label_362a0c;
        case 0x362a10u: goto label_362a10;
        case 0x362a14u: goto label_362a14;
        case 0x362a18u: goto label_362a18;
        case 0x362a1cu: goto label_362a1c;
        case 0x362a20u: goto label_362a20;
        case 0x362a24u: goto label_362a24;
        case 0x362a28u: goto label_362a28;
        case 0x362a2cu: goto label_362a2c;
        case 0x362a30u: goto label_362a30;
        case 0x362a34u: goto label_362a34;
        case 0x362a38u: goto label_362a38;
        case 0x362a3cu: goto label_362a3c;
        default: break;
    }

    ctx->pc = 0x362988u;

label_362988:
    // 0x362988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x362988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36298c:
    // 0x36298c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x36298cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_362990:
    // 0x362990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x362990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_362994:
    // 0x362994: 0x24424560  addiu       $v0, $v0, 0x4560
    ctx->pc = 0x362994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17760));
label_362998:
    // 0x362998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x362998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_36299c:
    // 0x36299c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36299cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3629a0:
    // 0x3629a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3629a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3629a4:
    // 0x3629a4: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x3629a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_3629a8:
    // 0x3629a8: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3629a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3629ac:
    // 0x3629ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3629b0:
    if (ctx->pc == 0x3629B0u) {
        ctx->pc = 0x3629B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629ACu;
        // 0x3629b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3629B4u;
        goto label_3629b4;
    }
    ctx->pc = 0x3629ACu;
    {
        const bool branch_taken_0x3629ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3629B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629ACu;
        // 0x3629b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3629ac) {
            ctx->pc = 0x3629E4u;
            goto label_3629e4;
        }
    }
    ctx->pc = 0x3629B4u;
label_3629b4:
    // 0x3629b4: 0xc0d8a90  jal         func_362A40
label_3629b8:
    if (ctx->pc == 0x3629B8u) {
        ctx->pc = 0x3629BCu;
        goto label_3629bc;
    }
    ctx->pc = 0x3629B4u;
    SET_GPR_U32(ctx, 31, 0x3629BCu);
    ctx->pc = 0x362A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362A40u, 0x3629B4u, 0x3629BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629BCu;
label_3629bc:
    // 0x3629bc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_3629c0:
    if (ctx->pc == 0x3629C0u) {
        ctx->pc = 0x3629C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629BCu;
        // 0x3629c0: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3629C4u;
        goto label_3629c4;
    }
    ctx->pc = 0x3629BCu;
    {
        const bool branch_taken_0x3629bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3629bc) {
            ctx->pc = 0x3629C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3629BCu;
            // 0x3629c0: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3629E8u;
            goto label_3629e8;
        }
    }
    ctx->pc = 0x3629C4u;
label_3629c4:
    // 0x3629c4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3629c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3629c8:
    // 0x3629c8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3629cc:
    if (ctx->pc == 0x3629CCu) {
        ctx->pc = 0x3629CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629C8u;
        // 0x3629cc: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3629D0u;
        goto label_3629d0;
    }
    ctx->pc = 0x3629C8u;
    {
        const bool branch_taken_0x3629c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3629c8) {
            ctx->pc = 0x3629CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3629C8u;
            // 0x3629cc: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3629E4u;
            goto label_3629e4;
        }
    }
    ctx->pc = 0x3629D0u;
label_3629d0:
    // 0x3629d0: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x3629d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_3629d4:
    // 0x3629d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3629d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3629d8:
    // 0x3629d8: 0x40f809  jalr        $v0
label_3629dc:
    if (ctx->pc == 0x3629DCu) {
        ctx->pc = 0x3629DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629D8u;
        // 0x3629dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3629E0u;
        goto label_3629e0;
    }
    ctx->pc = 0x3629D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3629E0u);
        ctx->pc = 0x3629DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629D8u;
        // 0x3629dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3629D8u, 0x3629E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3629E0u;
label_3629e0:
    // 0x3629e0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3629e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_3629e4:
    // 0x3629e4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x3629e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3629e8:
    // 0x3629e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3629ec:
    if (ctx->pc == 0x3629ECu) {
        ctx->pc = 0x3629ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629E8u;
        // 0x3629ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3629F0u;
        goto label_3629f0;
    }
    ctx->pc = 0x3629E8u;
    {
        const bool branch_taken_0x3629e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3629ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629E8u;
        // 0x3629ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3629e8) {
            ctx->pc = 0x362A24u;
            goto label_362a24;
        }
    }
    ctx->pc = 0x3629F0u;
label_3629f0:
    // 0x3629f0: 0xc0d8a90  jal         func_362A40
label_3629f4:
    if (ctx->pc == 0x3629F4u) {
        ctx->pc = 0x3629F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629F0u;
        // 0x3629f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3629F8u;
        goto label_3629f8;
    }
    ctx->pc = 0x3629F0u;
    SET_GPR_U32(ctx, 31, 0x3629F8u);
    ctx->pc = 0x3629F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3629F0u;
    // 0x3629f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362A40u, 0x3629F0u, 0x3629F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3629F8u;
label_3629f8:
    // 0x3629f8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3629fc:
    if (ctx->pc == 0x3629FCu) {
        ctx->pc = 0x3629FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629F8u;
        // 0x3629fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362A00u;
        goto label_362a00;
    }
    ctx->pc = 0x3629F8u;
    {
        const bool branch_taken_0x3629f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3629FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3629F8u;
        // 0x3629fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3629f8) {
            ctx->pc = 0x362A24u;
            goto label_362a24;
        }
    }
    ctx->pc = 0x362A00u;
label_362a00:
    // 0x362a00: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x362a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_362a04:
    // 0x362a04: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_362a08:
    if (ctx->pc == 0x362A08u) {
        ctx->pc = 0x362A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A04u;
        // 0x362a08: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362A0Cu;
        goto label_362a0c;
    }
    ctx->pc = 0x362A04u;
    {
        const bool branch_taken_0x362a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x362a04) {
            ctx->pc = 0x362A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x362A04u;
            // 0x362a08: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x362A20u;
            goto label_362a20;
        }
    }
    ctx->pc = 0x362A0Cu;
label_362a0c:
    // 0x362a0c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x362a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_362a10:
    // 0x362a10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x362a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_362a14:
    // 0x362a14: 0x40f809  jalr        $v0
label_362a18:
    if (ctx->pc == 0x362A18u) {
        ctx->pc = 0x362A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A14u;
        // 0x362a18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362A1Cu;
        goto label_362a1c;
    }
    ctx->pc = 0x362A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x362A1Cu);
        ctx->pc = 0x362A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A14u;
        // 0x362a18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362A14u, 0x362A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x362A1Cu;
label_362a1c:
    // 0x362a1c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x362a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_362a20:
    // 0x362a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x362a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_362a24:
    // 0x362a24: 0xc0d762c  jal         func_35D8B0
label_362a28:
    if (ctx->pc == 0x362A28u) {
        ctx->pc = 0x362A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A24u;
        // 0x362a28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362A2Cu;
        goto label_362a2c;
    }
    ctx->pc = 0x362A24u;
    SET_GPR_U32(ctx, 31, 0x362A2Cu);
    ctx->pc = 0x362A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A24u;
    // 0x362a28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D8B0u, 0x362A24u, 0x362A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A2Cu;
label_362a2c:
    // 0x362a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x362a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_362a30:
    // 0x362a30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x362a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_362a34:
    // 0x362a34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x362a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_362a38:
    // 0x362a38: 0x3e00008  jr          $ra
label_362a3c:
    if (ctx->pc == 0x362A3Cu) {
        ctx->pc = 0x362A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A38u;
        // 0x362a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x362A40u;
        goto label_fallthrough_0x362a38;
    }
    ctx->pc = 0x362A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A38u;
        // 0x362a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x362a38:
    ctx->pc = 0x362A40u;
}
