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

// Function: sub_001CC1A8
// Address: 0x1cc1a8 - 0x1cc3d8
void sub_001CC1A8_0x1cc1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC1A8_0x1cc1a8");
#endif

    switch (ctx->pc) {
        case 0x1cc200u: goto label_1cc200;
        case 0x1cc21cu: goto label_1cc21c;
        case 0x1cc258u: goto label_1cc258;
        case 0x1cc278u: goto label_1cc278;
        case 0x1cc280u: goto label_1cc280;
        case 0x1cc2a8u: goto label_1cc2a8;
        case 0x1cc2bcu: goto label_1cc2bc;
        case 0x1cc2d8u: goto label_1cc2d8;
        case 0x1cc2f0u: goto label_1cc2f0;
        case 0x1cc300u: goto label_1cc300;
        case 0x1cc30cu: goto label_1cc30c;
        case 0x1cc364u: goto label_1cc364;
        case 0x1cc378u: goto label_1cc378;
        case 0x1cc380u: goto label_1cc380;
        case 0x1cc3acu: goto label_1cc3ac;
        default: break;
    }

    ctx->pc = 0x1cc1a8u;

    // 0x1cc1a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cc1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cc1ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cc1b0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cc1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cc1b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1cc1b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc1b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cc1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cc1bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cc1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cc1c0: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x1cc1c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x1cc1c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1cc1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1cc1c8: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x1cc1c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x1cc1cc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1cc1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1cc1d0: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x1cc1d0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x1cc1d4: 0x8c4289bc  lw          $v0, -0x7644($v0)
    ctx->pc = 0x1cc1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F89BCu));
    // 0x1cc1d8: 0x3c170048  lui         $s7, 0x48
    ctx->pc = 0x1cc1d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)72 << 16));
    // 0x1cc1dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc1e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc1e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cc1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cc1e8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1CC1E8u;
    {
        const bool branch_taken_0x1cc1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1E8u;
        // 0x1cc1ec: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1e8) {
            ctx->pc = 0x1CC2BCu;
            goto label_1cc2bc;
        }
    }
    ctx->pc = 0x1CC1F0u;
    // 0x1cc1f0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1CC1F0u;
    {
        const bool branch_taken_0x1cc1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC1F0u;
        // 0x1cc1f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc1f0) {
            ctx->pc = 0x1CC294u;
            goto label_1cc294;
        }
    }
    ctx->pc = 0x1CC1F8u;
    // 0x1cc1f8: 0x8e8289b8  lw          $v0, -0x7648($s4)
    ctx->pc = 0x1cc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937016)));
    // 0x1cc1fc: 0x0  nop
    ctx->pc = 0x1cc1fcu;
    // NOP
label_1cc200:
    // 0x1cc200: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1cc200u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1cc204: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cc204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cc208: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cc208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc20c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC20Cu;
    {
        const bool branch_taken_0x1cc20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC20Cu;
        // 0x1cc210: 0x8ec289b0  lw          $v0, -0x7650($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc20c) {
            ctx->pc = 0x1CC220u;
            goto label_1cc220;
        }
    }
    ctx->pc = 0x1CC214u;
    // 0x1cc214: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1CC214u;
    SET_GPR_U32(ctx, 31, 0x1CC21Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1CC214u, 0x1CC21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC21Cu;
label_1cc21c:
    // 0x1cc21c: 0x8ec289b0  lw          $v0, -0x7650($s6)
    ctx->pc = 0x1cc21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937008)));
label_1cc220:
    // 0x1cc220: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1cc220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1cc224: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cc224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cc228: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1cc228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc22c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CC22Cu;
    {
        const bool branch_taken_0x1cc22c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC22Cu;
        // 0x1cc230: 0x8ea289bc  lw          $v0, -0x7644($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc22c) {
            ctx->pc = 0x1CC284u;
            goto label_1cc284;
        }
    }
    ctx->pc = 0x1CC234u;
    // 0x1cc234: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1cc234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cc238: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CC238u;
    {
        const bool branch_taken_0x1cc238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC238u;
        // 0x1cc23c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc238) {
            ctx->pc = 0x1CC278u;
            goto label_1cc278;
        }
    }
    ctx->pc = 0x1CC240u;
    // 0x1cc240: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x1cc240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x1cc244: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1cc244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1cc248: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cc248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc24c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC24Cu;
    {
        const bool branch_taken_0x1cc24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC24Cu;
        // 0x1cc250: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc24c) {
            ctx->pc = 0x1CC270u;
            goto label_1cc270;
        }
    }
    ctx->pc = 0x1CC254u;
    // 0x1cc254: 0x0  nop
    ctx->pc = 0x1cc254u;
    // NOP
label_1cc258:
    // 0x1cc258: 0x0  nop
    ctx->pc = 0x1cc258u;
    // NOP
    // 0x1cc25c: 0x0  nop
    ctx->pc = 0x1cc25cu;
    // NOP
    // 0x1cc260: 0x0  nop
    ctx->pc = 0x1cc260u;
    // NOP
    // 0x1cc264: 0x0  nop
    ctx->pc = 0x1cc264u;
    // NOP
    // 0x1cc268: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CC268u;
    {
        const bool branch_taken_0x1cc268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CC26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC268u;
        // 0x1cc26c: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc268) {
            ctx->pc = 0x1CC258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc258;
        }
    }
    ctx->pc = 0x1CC270u;
label_1cc270:
    // 0x1cc270: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1CC270u;
    SET_GPR_U32(ctx, 31, 0x1CC278u);
    ctx->pc = 0x1CC274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC270u;
    // 0x1cc274: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1CC270u, 0x1CC278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC278u;
label_1cc278:
    // 0x1cc278: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1CC278u;
    SET_GPR_U32(ctx, 31, 0x1CC280u);
    ctx->pc = 0x1CC27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC278u;
    // 0x1cc27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1CC278u, 0x1CC280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC280u;
label_1cc280:
    // 0x1cc280: 0x8ea289bc  lw          $v0, -0x7644($s5)
    ctx->pc = 0x1cc280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937020)));
label_1cc284:
    // 0x1cc284: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1cc284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc288: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1cc288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cc28c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1CC28Cu;
    {
        const bool branch_taken_0x1cc28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC28Cu;
        // 0x1cc290: 0x8e8289b8  lw          $v0, -0x7648($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc28c) {
            ctx->pc = 0x1CC200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc200;
        }
    }
    ctx->pc = 0x1CC294u;
label_1cc294:
    // 0x1cc294: 0x8e8489b8  lw          $a0, -0x7648($s4)
    ctx->pc = 0x1cc294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937016)));
    // 0x1cc298: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC298u;
    {
        const bool branch_taken_0x1cc298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc298) {
            ctx->pc = 0x1CC29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC298u;
            // 0x1cc29c: 0x8ec489b0  lw          $a0, -0x7650($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC2ACu;
            goto label_1cc2ac;
        }
    }
    ctx->pc = 0x1CC2A0u;
    // 0x1cc2a0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1CC2A0u;
    SET_GPR_U32(ctx, 31, 0x1CC2A8u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1CC2A0u, 0x1CC2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2A8u;
label_1cc2a8:
    // 0x1cc2a8: 0x8ec489b0  lw          $a0, -0x7650($s6)
    ctx->pc = 0x1cc2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937008)));
label_1cc2ac:
    // 0x1cc2ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC2ACu;
    {
        const bool branch_taken_0x1cc2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2ACu;
        // 0x1cc2b0: 0x8e62bd50  lw          $v0, -0x42B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2ac) {
            ctx->pc = 0x1CC2C0u;
            goto label_1cc2c0;
        }
    }
    ctx->pc = 0x1CC2B4u;
    // 0x1cc2b4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1CC2B4u;
    SET_GPR_U32(ctx, 31, 0x1CC2BCu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1CC2B4u, 0x1CC2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2BCu;
label_1cc2bc:
    // 0x1cc2bc: 0x8e62bd50  lw          $v0, -0x42B0($s3)
    ctx->pc = 0x1cc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950224)));
label_1cc2c0:
    // 0x1cc2c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc2c4: 0xaea389bc  sw          $v1, -0x7644($s5)
    ctx->pc = 0x1cc2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294937020), GPR_U32(ctx, 3));
    // 0x1cc2c8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1cc2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cc2cc: 0xaee22b18  sw          $v0, 0x2B18($s7)
    ctx->pc = 0x1cc2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 11032), GPR_U32(ctx, 2));
    // 0x1cc2d0: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1CC2D0u;
    SET_GPR_U32(ctx, 31, 0x1CC2D8u);
    ctx->pc = 0x1CC2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC2D0u;
    // 0x1cc2d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1CC2D0u, 0x1CC2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2D8u;
label_1cc2d8:
    // 0x1cc2d8: 0x8ea389bc  lw          $v1, -0x7644($s5)
    ctx->pc = 0x1cc2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937020)));
    // 0x1cc2dc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CC2DCu;
    {
        const bool branch_taken_0x1cc2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC2DCu;
        // 0x1cc2e0: 0xae8289b8  sw          $v0, -0x7648($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294937016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2dc) {
            ctx->pc = 0x1CC354u;
            goto label_1cc354;
        }
    }
    ctx->pc = 0x1CC2E4u;
    // 0x1cc2e4: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x1cc2e4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x1cc2e8: 0x8e9189b8  lw          $s1, -0x7648($s4)
    ctx->pc = 0x1cc2e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937016)));
    // 0x1cc2ec: 0x0  nop
    ctx->pc = 0x1cc2ecu;
    // NOP
label_1cc2f0:
    // 0x1cc2f0: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x1cc2f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1cc2f4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1cc2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1cc2f8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1CC2F8u;
    SET_GPR_U32(ctx, 31, 0x1CC300u);
    ctx->pc = 0x1CC2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC2F8u;
    // 0x1cc2fc: 0x2518821  addu        $s1, $s2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1CC2F8u, 0x1CC300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC300u;
label_1cc300:
    // 0x1cc300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc304: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CC304u;
    SET_GPR_U32(ctx, 31, 0x1CC30Cu);
    ctx->pc = 0x1CC308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC304u;
    // 0x1cc308: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CC304u, 0x1CC30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC30Cu;
label_1cc30c:
    // 0x1cc30c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1cc30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1cc310: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1cc310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1cc314: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1cc314u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x1cc318: 0x7e000040  sq          $zero, 0x40($s0)
    ctx->pc = 0x1cc318u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 0));
    // 0x1cc31c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1cc31cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1cc320: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cc320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cc324: 0x8ee289b4  lw          $v0, -0x764C($s7)
    ctx->pc = 0x1cc324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937012)));
    // 0x1cc328: 0x8e8389b8  lw          $v1, -0x7648($s4)
    ctx->pc = 0x1cc328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937016)));
    // 0x1cc32c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1cc32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc330: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x1cc330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1cc334: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1cc334u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1cc338: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1cc338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cc33c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1cc33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1cc340: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x1cc340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x1cc344: 0x8ea289bc  lw          $v0, -0x7644($s5)
    ctx->pc = 0x1cc344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937020)));
    // 0x1cc348: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1cc348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cc34c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1CC34Cu;
    {
        const bool branch_taken_0x1cc34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC34Cu;
        // 0x1cc350: 0x8e9189b8  lw          $s1, -0x7648($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc34c) {
            ctx->pc = 0x1CC2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc2f0;
        }
    }
    ctx->pc = 0x1CC354u;
label_1cc354:
    // 0x1cc354: 0x8ea489bc  lw          $a0, -0x7644($s5)
    ctx->pc = 0x1cc354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937020)));
    // 0x1cc358: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cc358u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc35c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1CC35Cu;
    SET_GPR_U32(ctx, 31, 0x1CC364u);
    ctx->pc = 0x1CC360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC35Cu;
    // 0x1cc360: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1CC35Cu, 0x1CC364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC364u;
label_1cc364:
    // 0x1cc364: 0x8ea389bc  lw          $v1, -0x7644($s5)
    ctx->pc = 0x1cc364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937020)));
    // 0x1cc368: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CC368u;
    {
        const bool branch_taken_0x1cc368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC368u;
        // 0x1cc36c: 0xaec289b0  sw          $v0, -0x7650($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294937008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc368) {
            ctx->pc = 0x1CC3A4u;
            goto label_1cc3a4;
        }
    }
    ctx->pc = 0x1CC370u;
    // 0x1cc370: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1cc370u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1cc374: 0x0  nop
    ctx->pc = 0x1cc374u;
    // NOP
label_1cc378:
    // 0x1cc378: 0xc0795ec  jal         func_1E57B0
    ctx->pc = 0x1CC378u;
    SET_GPR_U32(ctx, 31, 0x1CC380u);
    ctx->pc = 0x1CC37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC378u;
    // 0x1cc37c: 0x8e0489ac  lw          $a0, -0x7654($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937004)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E57B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E57B0u, 0x1CC378u, 0x1CC380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC380u;
label_1cc380:
    // 0x1cc380: 0x8ec489b0  lw          $a0, -0x7650($s6)
    ctx->pc = 0x1cc380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937008)));
    // 0x1cc384: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1cc384u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1cc388: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cc388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1cc38c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cc38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cc390: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1cc390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1cc394: 0x8ea289bc  lw          $v0, -0x7644($s5)
    ctx->pc = 0x1cc394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937020)));
    // 0x1cc398: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1cc398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cc39c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CC39Cu;
    {
        const bool branch_taken_0x1cc39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc39c) {
            ctx->pc = 0x1CC378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc378;
        }
    }
    ctx->pc = 0x1CC3A4u;
label_1cc3a4:
    // 0x1cc3a4: 0xc073116  jal         func_1CC458
    ctx->pc = 0x1CC3A4u;
    SET_GPR_U32(ctx, 31, 0x1CC3ACu);
    ctx->pc = 0x1CC458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC458u, 0x1CC3A4u, 0x1CC3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3ACu;
label_1cc3ac:
    // 0x1cc3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc3b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cc3b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc3b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cc3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cc3bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cc3bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cc3c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cc3c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cc3c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1cc3c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cc3c8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1cc3c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cc3cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cc3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cc3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3D0u;
        // 0x1cc3d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC3D8u;
}
