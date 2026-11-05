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

// Function: sub_001F6928
// Address: 0x1f6928 - 0x1f6a80
void sub_001F6928_0x1f6928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6928_0x1f6928");
#endif

    switch (ctx->pc) {
        case 0x1f6948u: goto label_1f6948;
        case 0x1f697cu: goto label_1f697c;
        case 0x1f6998u: goto label_1f6998;
        case 0x1f69acu: goto label_1f69ac;
        case 0x1f69c4u: goto label_1f69c4;
        case 0x1f69d4u: goto label_1f69d4;
        case 0x1f69dcu: goto label_1f69dc;
        case 0x1f69e4u: goto label_1f69e4;
        case 0x1f69ecu: goto label_1f69ec;
        case 0x1f69f4u: goto label_1f69f4;
        case 0x1f6a1cu: goto label_1f6a1c;
        case 0x1f6a24u: goto label_1f6a24;
        case 0x1f6a2cu: goto label_1f6a2c;
        case 0x1f6a54u: goto label_1f6a54;
        case 0x1f6a5cu: goto label_1f6a5c;
        case 0x1f6a64u: goto label_1f6a64;
        default: break;
    }

    ctx->pc = 0x1f6928u;

    // 0x1f6928: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f6928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f692c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f692cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6934: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6938: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f693c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f6940: 0xc07e604  jal         func_1F9810
    ctx->pc = 0x1F6940u;
    SET_GPR_U32(ctx, 31, 0x1F6948u);
    ctx->pc = 0x1F6944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6940u;
    // 0x1f6944: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9810u, 0x1F6940u, 0x1F6948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6948u;
label_1f6948:
    // 0x1f6948: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f6948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f694c: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1F694Cu;
    {
        const bool branch_taken_0x1f694c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F694Cu;
        // 0x1f6950: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f694c) {
            ctx->pc = 0x1F6A64u;
            goto label_1f6a64;
        }
    }
    ctx->pc = 0x1F6954u;
    // 0x1f6954: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x1f6954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x1f6958: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1f6958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f695c: 0x8e0215e8  lw          $v0, 0x15E8($s0)
    ctx->pc = 0x1f695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5608)));
    // 0x1f6960: 0xae0215ec  sw          $v0, 0x15EC($s0)
    ctx->pc = 0x1f6960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5612), GPR_U32(ctx, 2));
    // 0x1f6964: 0x8c83cb34  lw          $v1, -0x34CC($a0)
    ctx->pc = 0x1f6964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x66CB34u));
    // 0x1f6968: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F6968u;
    {
        const bool branch_taken_0x1f6968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6968u;
        // 0x1f696c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6968) {
            ctx->pc = 0x1F69A4u;
            goto label_1f69a4;
        }
    }
    ctx->pc = 0x1F6970u;
    // 0x1f6970: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f6970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f6974: 0xc07f53a  jal         func_1FD4E8
    ctx->pc = 0x1F6974u;
    SET_GPR_U32(ctx, 31, 0x1F697Cu);
    ctx->pc = 0x1F6978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6974u;
    // 0x1f6978: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD4E8u, 0x1F6974u, 0x1F697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F697Cu;
label_1f697c:
    // 0x1f697c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F697Cu;
    {
        const bool branch_taken_0x1f697c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F697Cu;
        // 0x1f6980: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f697c) {
            ctx->pc = 0x1F69A4u;
            goto label_1f69a4;
        }
    }
    ctx->pc = 0x1F6984u;
    // 0x1f6984: 0x9043b821  lbu         $v1, -0x47DF($v0)
    ctx->pc = 0x1f6984u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948897)));
    // 0x1f6988: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6988u;
    {
        const bool branch_taken_0x1f6988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6988) {
            ctx->pc = 0x1F69A4u;
            goto label_1f69a4;
        }
    }
    ctx->pc = 0x1F6990u;
    // 0x1f6990: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x1F6990u;
    SET_GPR_U32(ctx, 31, 0x1F6998u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1F6990u, 0x1F6998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6998u;
label_1f6998:
    // 0x1f6998: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x1f6998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x1f699c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F699Cu;
    {
        const bool branch_taken_0x1f699c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f699c) {
            ctx->pc = 0x1F69A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F699Cu;
            // 0x1f69a0: 0xae1215e8  sw          $s2, 0x15E8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 5608), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F69B8u;
            goto label_1f69b8;
        }
    }
    ctx->pc = 0x1F69A4u;
label_1f69a4:
    // 0x1f69a4: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x1F69A4u;
    SET_GPR_U32(ctx, 31, 0x1F69ACu);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x1F69A4u, 0x1F69ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69ACu;
label_1f69ac:
    // 0x1f69ac: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1f69acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1f69b0: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x1f69b0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f69b4: 0xae1215e8  sw          $s2, 0x15E8($s0)
    ctx->pc = 0x1f69b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5608), GPR_U32(ctx, 18));
label_1f69b8:
    // 0x1f69b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f69b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f69bc: 0xc07dc5a  jal         func_1F7168
    ctx->pc = 0x1F69BCu;
    SET_GPR_U32(ctx, 31, 0x1F69C4u);
    ctx->pc = 0x1F69C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69BCu;
    // 0x1f69c0: 0x3c10004a  lui         $s0, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7168u, 0x1F69BCu, 0x1F69C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69C4u;
label_1f69c4:
    // 0x1f69c4: 0x26129b28  addiu       $s2, $s0, -0x64D8
    ctx->pc = 0x1f69c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941480));
    // 0x1f69c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f69c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f69cc: 0xc07dfb2  jal         func_1F7EC8
    ctx->pc = 0x1F69CCu;
    SET_GPR_U32(ctx, 31, 0x1F69D4u);
    ctx->pc = 0x1F69D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69CCu;
    // 0x1f69d0: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EC8u, 0x1F69CCu, 0x1F69D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69D4u;
label_1f69d4:
    // 0x1f69d4: 0xc07bca8  jal         func_1EF2A0
    ctx->pc = 0x1F69D4u;
    SET_GPR_U32(ctx, 31, 0x1F69DCu);
    ctx->pc = 0x1F69D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69D4u;
    // 0x1f69d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF2A0u, 0x1F69D4u, 0x1F69DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69DCu;
label_1f69dc:
    // 0x1f69dc: 0xc07dff4  jal         func_1F7FD0
    ctx->pc = 0x1F69DCu;
    SET_GPR_U32(ctx, 31, 0x1F69E4u);
    ctx->pc = 0x1F69E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69DCu;
    // 0x1f69e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FD0u, 0x1F69DCu, 0x1F69E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69E4u;
label_1f69e4:
    // 0x1f69e4: 0xc07fb36  jal         func_1FECD8
    ctx->pc = 0x1F69E4u;
    SET_GPR_U32(ctx, 31, 0x1F69ECu);
    ctx->pc = 0x1F69E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69E4u;
    // 0x1f69e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECD8u, 0x1F69E4u, 0x1F69ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69ECu;
label_1f69ec:
    // 0x1f69ec: 0xc07dbdc  jal         func_1F6F70
    ctx->pc = 0x1F69ECu;
    SET_GPR_U32(ctx, 31, 0x1F69F4u);
    ctx->pc = 0x1F69F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69ECu;
    // 0x1f69f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6F70u, 0x1F69ECu, 0x1F69F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69F4u;
label_1f69f4:
    // 0x1f69f4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f69f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f69f8: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x1f69f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f69fc: 0x8e0315e8  lw          $v1, 0x15E8($s0)
    ctx->pc = 0x1f69fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5608)));
    // 0x1f6a00: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F6A00u;
    {
        const bool branch_taken_0x1f6a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A00u;
        // 0x1f6a04: 0x2221021  addu        $v0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a00) {
            ctx->pc = 0x1F6A40u;
            goto label_1f6a40;
        }
    }
    ctx->pc = 0x1F6A08u;
    // 0x1f6a08: 0x8e0215ec  lw          $v0, 0x15EC($s0)
    ctx->pc = 0x1f6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5612)));
    // 0x1f6a0c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6A0Cu;
    {
        const bool branch_taken_0x1f6a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6a0c) {
            ctx->pc = 0x1F6A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6A0Cu;
            // 0x1f6a10: 0x8e0215e8  lw          $v0, 0x15E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6A30u;
            goto label_1f6a30;
        }
    }
    ctx->pc = 0x1F6A14u;
    // 0x1f6a14: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1F6A14u;
    SET_GPR_U32(ctx, 31, 0x1F6A1Cu);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F6A14u, 0x1F6A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A1Cu;
label_1f6a1c:
    // 0x1f6a1c: 0xc081eac  jal         func_207AB0
    ctx->pc = 0x1F6A1Cu;
    SET_GPR_U32(ctx, 31, 0x1F6A24u);
    ctx->pc = 0x1F6A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A1Cu;
    // 0x1f6a20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207AB0u, 0x1F6A1Cu, 0x1F6A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A24u;
label_1f6a24:
    // 0x1f6a24: 0xc080396  jal         func_200E58
    ctx->pc = 0x1F6A24u;
    SET_GPR_U32(ctx, 31, 0x1F6A2Cu);
    ctx->pc = 0x1F6A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A24u;
    // 0x1f6a28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200E58u, 0x1F6A24u, 0x1F6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A2Cu;
label_1f6a2c:
    // 0x1f6a2c: 0x8e0215e8  lw          $v0, 0x15E8($s0)
    ctx->pc = 0x1f6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5608)));
label_1f6a30:
    // 0x1f6a30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F6A30u;
    {
        const bool branch_taken_0x1f6a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A30u;
        // 0x1f6a34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a30) {
            ctx->pc = 0x1F6A68u;
            goto label_1f6a68;
        }
    }
    ctx->pc = 0x1F6A38u;
    // 0x1f6a38: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f6a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f6a3c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1f6a40:
    // 0x1f6a40: 0x8c4315ec  lw          $v1, 0x15EC($v0)
    ctx->pc = 0x1f6a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1f6a44: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F6A44u;
    {
        const bool branch_taken_0x1f6a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A44u;
        // 0x1f6a48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a44) {
            ctx->pc = 0x1F6A68u;
            goto label_1f6a68;
        }
    }
    ctx->pc = 0x1F6A4Cu;
    // 0x1f6a4c: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1F6A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F6A54u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F6A4Cu, 0x1F6A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A54u;
label_1f6a54:
    // 0x1f6a54: 0xc081ec6  jal         func_207B18
    ctx->pc = 0x1F6A54u;
    SET_GPR_U32(ctx, 31, 0x1F6A5Cu);
    ctx->pc = 0x1F6A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A54u;
    // 0x1f6a58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207B18u, 0x1F6A54u, 0x1F6A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A5Cu;
label_1f6a5c:
    // 0x1f6a5c: 0xc0803a2  jal         func_200E88
    ctx->pc = 0x1F6A5Cu;
    SET_GPR_U32(ctx, 31, 0x1F6A64u);
    ctx->pc = 0x1F6A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A5Cu;
    // 0x1f6a60: 0x26649b28  addiu       $a0, $s3, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200E88u, 0x1F6A5Cu, 0x1F6A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A64u;
label_1f6a64:
    // 0x1f6a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6a68:
    // 0x1f6a68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6a6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6a70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f6a70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6a74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6a78: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A78u;
        // 0x1f6a7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6A80u;
}
